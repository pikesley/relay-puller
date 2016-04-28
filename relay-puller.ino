int relayPin0 = 4;
int relayPin1 = 5;
int relayPin2 = 6;
int relayPin3 = 7;

int driverPin0 = 8;
int driverPin1 = 9;
int driverPin2 = 10;
int driverPin3 = 11;

int value0 = 0;
int value1 = 0;
int value2 = 0;
int value3 = 0;

void setup() {
  pinMode(relayPin0, OUTPUT);
  pinMode(relayPin1, OUTPUT);
  pinMode(relayPin2, OUTPUT);
  pinMode(relayPin3, OUTPUT);
  
  pinMode(driverPin0, INPUT);
  pinMode(driverPin1, INPUT);
  pinMode(driverPin2, INPUT);
  pinMode(driverPin3, INPUT);
}

void loop() {
  value0 = digitalRead(driverPin0);
  value1 = digitalRead(driverPin1);
  value2 = digitalRead(driverPin2);
  value3 = digitalRead(driverPin3);
  
  if(value0 == HIGH) {
    digitalWrite(relayPin0, HIGH);
  }

  if(value1 == HIGH) {
    digitalWrite(relayPin1, HIGH);
  }
  
  if(value2 == HIGH) {
    digitalWrite(relayPin2, HIGH);
  }

  if(value3 == HIGH) {
    digitalWrite(relayPin3, HIGH);
  }
  
  if(value0 == LOW) {
    digitalWrite(relayPin0, LOW);       
  }
    
  if(value1 == LOW) {
    digitalWrite(relayPin1, LOW);       
  }

  if(value2 == LOW) {
    digitalWrite(relayPin2, LOW);       
  }
    
  if(value3 == LOW) {
    digitalWrite(relayPin3, LOW);       
  }
}

