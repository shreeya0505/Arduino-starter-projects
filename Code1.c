//Shreeya Bhonsle - 213
int lightcal;
int lightval;
int ledpin=9;
int sensorpin=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
  lightcal=analogRead(sensorpin);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightval=analogRead(sensorpin);
  if(lightval<lightcal-50)
  {
    digitalWrite(9,HIGH);
  }
  else{

    digitalWrite(9,LOW);
  }
}
