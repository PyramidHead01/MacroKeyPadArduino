#define PIN_BUTTON D1

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(PIN_BUTTON, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(digitalRead(PIN_BUTTON));
  delay(1000);

}
