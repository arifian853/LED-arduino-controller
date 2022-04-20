char serialData;
int pinA=10;
int pinB=11;
int pinC=12;
int pinD=13;
int analogPin = A0;
int sensorVal;

void setup() {
  // put your setup code here, to run once:
  pinMode (pinA, OUTPUT);
  pinMode (pinB, OUTPUT);
  pinMode (pinC, OUTPUT);
  pinMode (pinD, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorVal = analogRead(analogPin);
  Serial.println(sensorVal);
  delay(1000);
  for(int i=0; i<4; i++)
    if(Serial.available() > 0) {
      serialData = Serial.read();
      if(serialData == 'A') digitalWrite(pinA, HIGH);
      if(serialData == 'B') digitalWrite(pinA, LOW);
      if(serialData == 'C') digitalWrite(pinB, HIGH);
      if(serialData == 'D') digitalWrite(pinB, LOW);
      if(serialData == 'E') digitalWrite(pinC, HIGH);
      if(serialData == 'F') digitalWrite(pinC, LOW);
      if(serialData == 'G') digitalWrite(pinD, HIGH);
      if(serialData == 'H') digitalWrite(pinD, LOW);
    }
}
