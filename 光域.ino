#define LDR_PIN 3
void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("光敏测试开始...");
}
void loop() {
  int lightValue = analogRead(LDR_PIN);
  Serial.print("光照值: ");
  Serial.println(lightValue);
  delay(500);
}