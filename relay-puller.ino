int relayPin0 = 5;
int relayPin1 = 7;

int driverPin0 = 8;
int driverPin1 = 10;

int value0 = 0;
int value1 = 0;

void setup() {
  pinMode(relayPin0, OUTPUT);
  pinMode(relayPin1, OUTPUT);
  
  pinMode(driverPin0, INPUT);
  pinMode(driverPin1, INPUT);
}

void loop() {
  value0 = digitalRead(driverPin0);
  value1 = digitalRead(driverPin1);
  
  if(value0 == HIGH) {
    digitalWrite(relayPin0, HIGH);
  }

  if(value1 == HIGH) {
    digitalWrite(relayPin1, HIGH);
  }
  
  if(value0 == LOW) {
    digitalWrite(relayPin0, LOW);       
  }
    
  if(value1 == LOW) {
    digitalWrite(relayPin1, LOW);       
  }
}

