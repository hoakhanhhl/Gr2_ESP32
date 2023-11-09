#define LED_BUILTIN 2
//chân DOIT ESP32 DEVKIT V1 là 2
void setup() {
  // Đặt chân GPIO là OUTPUT
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Bật đèn
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200); // Chờ 1 giây

  // Tắt đèn
  digitalWrite(LED_BUILTIN, LOW);
  delay(200); // Chờ 1 giây
}
// board: DOIT ESP32 DEVKIT V1
// port: COM6