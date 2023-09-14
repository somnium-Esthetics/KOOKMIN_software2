//점멸 제어 테스트
#define PIN_LED 13
unsigned int count, toggle; //두개의 정수형 변수 선언

void setup() {
  pinMode(PIN_LED, OUTPUT); //PIN_LED로 설정된 LED를 출력경로로 설정
  Serial.begin(115200); //Initialize serial port 시리얼 통신 초기화, 통신속도 115200
  while (!Serial) {//시리얼 포트가 연결될 때까지 대기
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World"); //출력문, 일종의 디버깅 메세지
  count = toggle = 0;//변수 초기화
  digitalWrite(PIN_LED, toggle); // turn off LED.
}

void loop() {
  Serial.println(++count);//count변수 1증가
  toggle = toggle_state(toggle);// toggle LED value.
  digitalWrite(PIN_LED, toggle); // update LED status.
  delay(1000);

}
int toggle_state(int toggle){
  return !toggle;//변수 toggle의 값을 반전시킴 
}
