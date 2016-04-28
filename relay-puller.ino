int relays[] = { 4, 5, 6, 7 };
int inputs[] = { 8, 9, 10, 11 };
int count = 4;

void setup() {
  for (int r = 0; r < count; r++) {
    pinMode(relays[r], OUTPUT);
    pinMode(inputs[r], INPUT);
  }
}

void loop() {
  for (int v = 0; v < count; v++) {
    digitalWrite(relays[v], digitalRead(inputs[v])); 
  }
}


