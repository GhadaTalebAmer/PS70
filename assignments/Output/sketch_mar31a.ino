
int input=0;
int buzz=13; // Buzzer Pin
int j=3;
int k=12;
void setup() {
for(int i=3;i<=12;i++)
pinMode(i,OUTPUT);
pinMode(2,INPUT);
}


void settone(int input)
{

if(input==2)
loop();
}


 void loop() {        
  for(int i=4;i<=12;i+=2)
digitalWrite(i,LOW);
for(int i=3;i<=11;i+=2)
digitalWrite(i,HIGH);
  for(int hz = 440; hz < 1000; hz++){
    tone(buzz, hz, 50);
    delay(4);
  }
for(int i=3;i<=11;i+=2)
digitalWrite(i,LOW);
 for(int i=4;i<=12;i+=2)
digitalWrite(i,HIGH);
  for(int hz = 1000; hz > 440; hz--){
    tone(buzz, hz, 50);
    delay(4);
  }    }
  
