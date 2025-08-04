int redLED = 2;
int yellowLED = 5;
int blueLED = 8;
int greenLED = 11;

void setup ()
{
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  delay(1000);


  /*digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, HIGH);
  delay(1000);


  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, LOW);
  delay(1000);


  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  delay(1000);*/

  
}

void loop()
{

}
