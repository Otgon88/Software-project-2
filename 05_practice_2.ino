
const int ledPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // LED를 켭니다.
  delay(1000); // 1초 동안 대기합니다.

  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, LOW); // LED를 끕니다.
    delay(100); // 0.1초 동안 대기합니다.
    digitalWrite(ledPin, HIGH); // LED를 다시 켭니다.
    delay(100); // 0.1초 동안 대기합니다.
  }

  digitalWrite(ledPin, LOW); // LED를 끕니다.
  
  while (1) {
    // 아무 동작도 하지 않는 무한 루프입니다.
  }
}
