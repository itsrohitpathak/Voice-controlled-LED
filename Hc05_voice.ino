int Red = 3;
int Blue = 4;


void setup() {
  Serial.begin(9600);
  pinMode(Red,OUTPUT);
  pinMode(Blue,OUTPUT);
 
  

}


char c;
String voice;

void loop() {
  if (Serial.available()>0)
  {
    voice="";
    voice=Serial.readString();
    Serial.print(voice+'\n');
  }

  if(voice=="Red")
  {
    digitalWrite(Red,HIGH);
  } else if(voice=="No red")
  {
    digitalWrite(Red,LOW);
  }

    if(voice=="Blue")
  {
    digitalWrite(Blue,HIGH);
  } else if(voice=="No blue")
  {
    digitalWrite(Blue,LOW);
  }

  

}
