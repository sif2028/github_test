int ledPin = 29;
int ledPin2 = 30;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, HIGH);
  Serial.println(digitalRead(ledPin));
  Serial.println(digitalRead(ledPin2));
  delay(500);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
  Serial.println(digitalRead(ledPin));
  Serial.println(digitalRead(ledPin2));
  delay(500);
}
