
char val = 0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  /*
  pinMode(9, OUTPUT);
  OCR1A = 0;
  ICR1 = 1;
  TCCR1A = _BV(WGM11) | _BV(COM1A1);
  TCCR1B = _BV(WGM13) | _BV(WGM12) | _BV(CS10);
  */
}

void loop() {
  if(Serial.available() > 0) {
  val = Serial.read();
  if(val == 0x03) Serial.println(val, HEX);
  else Serial.print(val, HEX);
  }
}
