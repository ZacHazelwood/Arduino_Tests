//www.elegoo.com
//2016.12.08

int ledPin = 4;
int buttonApin = 6;
int buttonBpin = 8;
bool isLightOn = false;

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);
  // if (isLightOn == true)
  // {
  //   digitalWrite(ledPin, LOW);
  // }  // this is to ensure that the light is OFF no matter what
}

// void loop() 
// {
//   if (digitalRead(buttonApin) == LOW)
//   {
//     digitalWrite(ledPin, HIGH);
//   }
//   if (digitalRead(buttonBpin) == LOW)
//   {
//     digitalWrite(ledPin, LOW);
//   }
// }

void loop() // TEST, without changing hardware, change state of LED with only Button A
  // this technically works, but state is being changed along input manipulation, and is causing loop errors
  // need to change syntax to check LED state against itself
{ 
  if (digitalRead(buttonApin) == LOW)
  {
    if (isLightOn == false)
    {
      digitalWrite(ledPin, HIGH);
      isLightOn = true;
      // delay(100);
    }
    else if (isLightOn == true)
    {
      digitalWrite(ledPin, LOW);
      isLightOn = false;
      // delay(100);
    }
  }
  // delay(1000);
}
