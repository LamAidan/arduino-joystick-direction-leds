int xPin = A0;
int yPin = A1;

int ledUp = 2;
int ledDown = 3;
int ledLeft = 4;
int ledRight = 5;

int threshold = 200;

void setup() {
  pinMode(ledUp, OUTPUT)/;
  pinMode(ledDown, OUTPUT);
  pinMode(ledLeft, OUTPUT);
  pinMode(ledRight, OUTPUT);
}

void loop() {
  int xVal = analogRead(xPin);
  int yVal = analogRead(yPin);

  digitalWrite(ledUp, HIGH);
  digitalWrite(ledDown, HIGH);
  digitalWrite(ledLeft, HIGH);
  digitalWrite(ledRight, HIGH);

  if (xVal > 512 + threshold) {
    digitalWrite(ledRight, LOW);
  } else if (xVal < 512 - threshold) {
    digitalWrite(ledLeft, LOW);
  } else if (yVal > 512 + threshold) {
    digitalWrite(ledUp, LOW);
  } else if (yVal < 512 - threshold) {
    digitalWrite(ledDown, LOW);
  }

  delay(50);
}
