// 7번 핀을 출력으로 설정
int ledPin = 7;
int blinkCount = 0; // 깜빡인 횟수 카운터

void setup() {
  pinMode(ledPin, OUTPUT);

  // 1초 동안 LED를 켬
  digitalWrite(ledPin, 0);
  delay(1000);

  // 다음 1 초 동안 LED를 5회 반복 즉 0.2초 주기
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, 1);
    delay(100);  // LED를 끄고 0.1초 대기
    digitalWrite(ledPin, 0);
    delay(100);  // LED를 켜고 0.1초 대기
  }

  // LED 끔
  digitalWrite(ledPin, 1);
}

void loop() {
  // 루프 내용 없음
}