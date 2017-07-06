/***********************************************************************************************
  Showcased Air Keyboard as part of Prakalpa 2014 - Exhibition Technical Fest at PES Universty
  Author : Aravind Ravi
  Year : 2014
  Description : This keyboard is capable of playing the C major scale with 8 notes.
 ***********************************************************************************************/
 
/*This pin is configure for output and is connected to the speaker*/
int speakerPin = 11;

/*Each key is mapped to an i/o pin and configured as input*/
int key1=2;
int key2=3;
int key3=4;
int key4=5;
int key5=6;
int key6=7;
int key7=8;
int key8=9;

/*Debug led*/
int led=13;
void setup()
{

  pinMode(key1,INPUT);
  pinMode(key2,INPUT);
  pinMode(key3,INPUT);
  pinMode(key4,INPUT);
  pinMode(key5,INPUT);
  pinMode(key6,INPUT);
  pinMode(key7,INPUT);
  pinMode(key8,INPUT);
  
  pinMode(speakerPin,OUTPUT);
  pinMode(led,OUTPUT);
}
void loop()
{
  
  int C1=digitalRead(key1);
  int C2=digitalRead(key2);
  int C3=digitalRead(key3);
  int C4=digitalRead(key4);
  int C5=digitalRead(key5);
  int C6=digitalRead(key6);
  int C7=digitalRead(key7);
  int C8=digitalRead(key8);
  /*Here the tone function is used to generate the tones for the C Major Scale */
  if(C1==HIGH)
  {
  digitalWrite(led,HIGH);
  tone(speakerPin, 262);
  delay(10);
  }
  else if(C2==HIGH)
  {
  digitalWrite(led,HIGH);
  tone(speakerPin, 294);
  delay(10); 
  }
  else if(C3==HIGH)
  {
  digitalWrite(led,HIGH);
  tone(speakerPin, 330);
  delay(10); 
  }
   else if(C4==HIGH)
  {
  digitalWrite(led,HIGH);
  tone(speakerPin, 349); 
  delay(50);
  }
  else if(C5==HIGH)
  {  
  digitalWrite(led,HIGH);
  tone(speakerPin, 392);
  delay(10); 
  }
  else if(C6==HIGH)
  {
  digitalWrite(led,HIGH);
  tone(speakerPin, 440);
  delay(50); 
  }
  else if(C7==HIGH)
  {
  digitalWrite(led,HIGH);
  tone(speakerPin, 494);
  delay(10); 
  }
  else if(C8==HIGH)
  {
  digitalWrite(led,HIGH);
  tone(speakerPin, 523);
  delay(10); 
  }
  else
  {
  digitalWrite(led,LOW);
  noTone(speakerPin);
  }
}
