int analog_no = 5 ;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int pin_value;
  int temperature;
  
  pin_value = analogRead(analog_no);
  
  temperature = (125*pin_value)>>8 ;
  Serial.print("Current temperature is ") ;
  Serial.print(temperature) ;
  Serial.println("C");
  delay(400);
}
