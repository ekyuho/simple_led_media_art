void setup() {
  for (int i=3;i<=13;i++) pinMode(i, OUTPUT);
  pinMode(2, INPUT);
  Serial.begin(115200);
}

void on(int port) {
  digitalWrite(port, HIGH);
}

void off(int port) {
  digitalWrite(port, LOW);
}

int i = 3;
bool direction = true;
int buttonState = 0;
int lastButtonState = 0;

void loop() {
    on(i);
    delay(10);

    buttonState = digitalRead(2);
    if (buttonState && buttonState != lastButtonState) {
      if (i == 6) {
        Serial.println("Congrat! got 6!!");
        delay(3000);
      } else
        Serial.println("Sorry, try again.");
    }
    lastButtonState = buttonState;

    off(i);
    if (direction) {
      i++;
      if (i == 13) direction = false;
    } else {
      i--;
      if (i == 3) direction = true;
    }
}
