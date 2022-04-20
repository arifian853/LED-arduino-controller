int pin[]={2,3,4,5,6,7};
int data = 0;

void setup() {
  // put your setup code here, to run once:
  for(int j=0; j<6; j++)
  {
    pinMode(pin[j],OUTPUT);
    digitalWrite(pin[j],LOW);
    Serial.begin(9600);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()){data = Serial.read();}
  if (data == '1') {
      for(int j=0; j<6; j++)
  {
    digitalWrite(pin[j],HIGH);
    delay(150);
  }
  for(int j=0; j<6; j++)
  {
    digitalWrite(pin[j],LOW);
    delay(150);
  }
    } 
    else {
        for(int j=0; j<6; j++)
  {
    digitalWrite(pin[j],LOW);
  }
     }
}
