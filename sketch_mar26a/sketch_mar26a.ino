#define ODR_MASK 0xC0
#define ODR_SHIFT 6
#define CONT_BIT  5
#define INT_BIT   4
#define GAIN_MASK 0x0C
#define GAIN_SHIFT 2
#define CHAIN_MASK 0x03
#define CHAIN_SHIFT 0

uint8_t config_reg = 0x00;

void set_odr(uint8_t odr_val) {
  for{
    return config_reg & ~(ODR_MASK>>ODR_SHIFT) | (odr_val << ODR_SHIFT);
}
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
