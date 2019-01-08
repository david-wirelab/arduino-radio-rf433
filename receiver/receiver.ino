#define datain A0
#define ledPin 4

unsigned int data = 0;
const unsigned int upperThreshold = 300;
const unsigned int lowerThreshold = 100;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  data=analogRead(datain);

   if(data<lowerThreshold)
   {
    digitalWrite(ledPin, HIGH);
    Serial.println(data);
   }

  else if(data>upperThreshold)
  {
    digitalWrite(ledPin, LOW);
    Serial.println(data);
  }
}
