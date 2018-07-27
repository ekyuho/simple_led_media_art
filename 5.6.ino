void setup() {
  for (int i=2;i<=13;i++)
    pinMode(i, OUTPUT);
    pinMode(2, INPUT);
}

void on(int port) {
  digitalWrite(port, HIGH);
}

void off(int port) {
  digitalWrite(port, LOW);
}

int i = 3;
bool direction = true;
void loop() {

    on(i);
    delay(10);
    off(i);
    if (direction) {
      i++;
      if (i == 13) direction = false;
    } else {
      i--;
      if (i == 3) direction = true;
    }
}
