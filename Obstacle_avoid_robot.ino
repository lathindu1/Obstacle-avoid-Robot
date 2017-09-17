/*Coded by-: A.L Pramuditha
  by pantherCodes

  Simple Obstacle avoid robo using IR Obstacle avoid sensor
*/
// pin dec
int mor1 = 5 ;
int mor2 = 6 ;
int mol1 = 9 ;
int mol2 = 10 ;
int pwmr = 3 ;
int pwml = 11 ;
int val;
int speed = 200;
int bpin = 2 ;
int a;

void setup() {
  Serial.begin(9600);
  pinMode(mor1, OUTPUT);  
  pinMode(mor2, OUTPUT); 
  pinMode(mol1, OUTPUT);  
  pinMode(mol2, OUTPUT); 
  pinMode(bpin, INPUT); 

}

void loop() {

go();
}
// This is a Obstacle avoid function
void go ()
{
 val=digitalRead(bpin); 
  if(val == HIGH)
  {
    Serial.print("no wall");
    Serial.print("\n");
    forwd ();
  
  }
  if(val == LOW)
  {
   Serial.print("there are wall");
    Serial.print("\n");
    back();
    delay(2000);
    Taro();
    
  }
 
  
}
//forwd function for go robo forward
void forwd ()
{
digitalWrite (mor1, LOW); 
  digitalWrite (mor2, HIGH);
  digitalWrite (mol1, HIGH); 
  digitalWrite (mol2, LOW);
  analogWrite (pwmr, speed);
  analogWrite (pwml, speed);  
}
//back function for robo go to back
void back ()
{
digitalWrite (mor1, HIGH); 
  digitalWrite (mor2, LOW);
  digitalWrite (mol1, LOW); 
  digitalWrite (mol2, HIGH);
  analogWrite (pwmr, speed);
  analogWrite (pwml, speed);  
}
//thisa function for turn around robo
void Taro ()
{
digitalWrite (mor1, HIGH); 
  digitalWrite (mor2, LOW);
  digitalWrite (mol1, HIGH); 
  digitalWrite (mol2, LOW);
  analogWrite (pwmr, speed);
  analogWrite (pwml, speed); 
  delay(3000); 
}
//this function use for robo turn right 
void right ()
{
digitalWrite (mor1, HIGH); 
  digitalWrite (mor2, LOW);
  digitalWrite (mol1, HIGH); 
  digitalWrite (mol2, LOW);
  analogWrite (pwmr, speed);
  analogWrite (pwml, speed);  
}
//this function use for turn to left
void left ()
{
digitalWrite (mor1, LOW); 
  digitalWrite (mor2, HIGH);
  digitalWrite (mol1, LOW); 
  digitalWrite (mol2, HIGH);
  analogWrite (pwmr, speed);
  analogWrite (pwml, speed);  
}
//this is a stop function
void stop1 ()
{
digitalWrite (mor1, LOW); 
  digitalWrite (mor2, LOW);
  digitalWrite (mol1, LOW); 
  digitalWrite (mol2, LOW);
  analogWrite (pwmr, speed);
  analogWrite (pwml, speed);  
}

