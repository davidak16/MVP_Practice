
void print_binary(uint8_t val) {
  //Print 8 bit with leading zeros
  // Hint: oop from bit 7 down to bit 8, use (val >> i) & 1
  // Your code here

  for ( int i = 0 ; i >=7 ; i--) {
    result = (val >> i) & 1 ;
    printf("%d", result);
  }
uint8_t set_bit(uint8_t val, uint8_t bit_pos) {
  return val | (1<< bit_pos);
}
uint8_t clear_bit(uint8_t val, uint8_t bit_pos) {
  return val & ~(1 << bit_pos);
}
uint8_t toggle_bit(uint8_t val, uint8_t bit_pos) {
  return val ^ (1 << bit_pos);
 }
uint8_t check_bit(uint8_t val, uint8_t bit_pos) {
  return (val >> bit_pos) & 1;
}
}

void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);
 delay(1000);

 uinnt8t_t reg = 0b00001010

 Serial.print("Original:  "); print_binary(reg);Serial.println();
 reg = set_bit(reg,7);
 Serial.print("Set bit 7: "); print_binary(reg);Serial.println();
 reg = clear_bit(reg,1);
 Serial.print("Clr bit 1: "); print_binary(reg);Serial.println();
 reg = toggle_bit(reg, 3);
 Serial.print("Tog bit 3: "); print_binary(reg);Serial.println();

 Serial.print("Bit 7 set? "); Serial.println(check_bit(reg,7));
 Serial.print("Bit 0 set? "); Serial.println(check_bit(reg,0));
}

void loop() {
  // put your main code here, to run repeatedly:

}
