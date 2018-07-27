void setup() {
  for (int i=2;i<=13;i++)
    pinMode(i, OUTPUT);
}

void on(int port) {
  digitalWrite(port, HIGH);
}

void off(int port) {
  digitalWrite(port, LOW);
}

// the loop function runs over and over again forever
void loop() {
  for (int i=2; i<=13; i++) {
    on(i);
    delay(100); 
  } 
  
  
  for (int i=2; i<=13; i++) {
    off(i);
    delay(100); 
  }
}
