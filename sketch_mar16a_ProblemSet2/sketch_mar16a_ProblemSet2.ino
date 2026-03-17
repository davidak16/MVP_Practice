void print_binary(uint8_t val) {
  //Print 8 bits with leading zeros
  //loop from bit 7 down to bit 0, use (val>>i) & 1

  for(int i = 7 ; i > 0 ; i--) {    
    int result = (val >> i) & 1;
    Serial.printf("%d", result);
  }
}

uint8_t set_bit(uint8_t val, uint8_t bit_pos) {
    return val | 1 << bit_pos;
    
  }

uint8_t clear_bit(uint8_t val, uint8_t bit_pos) { 
    return val & ~(1 << bit_Pos);
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);

  uint8_t reg = 0b00001010; //Starting value

  Serial.printf("origial:  ","%d", print_binary(reg));                                                                                                                                                                                             bbbbbbbbbhhhh

}

void loop() {
  // put your main code here, to run repeatedly:

}
