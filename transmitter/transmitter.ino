#define dataout 12
#define ledPin 7

 void setup()
 {
   pinMode(dataout, OUTPUT);
   pinMode(ledPin, OUTPUT);
   Serial.begin(9600);
 }

 void loop(){
   for(int i=4000; i>5; i=i-(i/3)){
     digitalWrite(dataout, HIGH);
     digitalWrite(ledPin, HIGH);
     delay(2000);

     digitalWrite(dataout,LOW);
     digitalWrite(ledPin, LOW);
     delay(i);
   }
 }
