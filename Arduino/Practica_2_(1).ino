// C++ code
//
void setup()
{
  for(int i = 11; i<=13; i++){
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(int i=11; i<=13; i++){
 	 digitalWrite(i, HIGH);
  	delay(200);
  	digitalWrite(i, LOW);
 	 delay(200);
  }
}