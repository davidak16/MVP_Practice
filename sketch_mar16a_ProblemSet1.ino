void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);

  Serial.printf("%d", sizeof(char));
  Serial.printf("%d \n", sizeof(int));
  Serial.printf("%d \n", sizeof(uint8_t));
  Serial.printf("%d \n", sizeof(uint16_t));
  Serial.printf("%d \n", sizeof(uint32_t));
  Serial.printf("%d \n", sizeof(int16_t));
  Serial.printf("%d \n", sizeof(float));
  Serial.printf("%d", sizeof(double));

  uint8_t x = 255;
  x = x + 1;
  Serial.print("uint8_t overflow: ");
  Serial.println(x);

}

void loop() {
  // put your main code here, to run repeatedly:

}
