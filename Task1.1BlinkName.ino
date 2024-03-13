int buttonPin = 6;

int buttonState = 0;

int shortTime = 300;
int longTime = 900;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    // turn LED on:

    // Z
    switchLed(longTime);
    switchLed(longTime);
    switchLed(shortTime);
    switchLed(shortTime);

    delay(longTime);

    // A
    switchLed(shortTime);
    switchLed(longTime);

    delay(longTime);

    // M
    switchLed(longTime);
    switchLed(longTime);

    delay(longTime);

    // I
    switchLed(shortTime);
    switchLed(shortTime);

    delay(longTime);

    // N
    switchLed(longTime);
    switchLed(shortTime);

    delay(longTime);

  } else {
    // turn LED off:
    digitalWrite(LED_BUILTIN, LOW);
  }
}

void switchLed(int timing) {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(timing);
  digitalWrite(LED_BUILTIN, LOW);
}
