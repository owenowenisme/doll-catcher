
#include <Arduino.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include<Servo.h>

LiquidCrystal_I2C lcd(0x27,20,4);
Servo motorx;
Servo motory;

  char block=255;

  void frame();
  void xymove(int ,int);
  void timer();

void setup() {
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  Serial.begin(9600);
  lcd.init();                      
  lcd.init();
  lcd.backlight();
  lcd.setCursor(1,1);
  lcd.print("  FRC JIA WAWA JI ");
  lcd.setCursor(1,2);
  lcd.print("    insert coin   ");
  motorx.attach(2);
  motory.attach(3);
}

//int x=millis();
void loop() {
  frame();
 //int coin=analogRead(); 
int x=500;
 int y=analogRead(1);
 Serial.print(analogRead(2));
 Serial.print("  ");
 Serial.println(y);
 int button=analogRead(3);
 xymove(x,y);

  //Serial.println(y);

// if (coin){

 

 

 }
//}
void frame(){
  lcd.setCursor(0,0); 
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.setCursor(0,1); 
  lcd.print(block);
  lcd.setCursor(19,1); 
  lcd.print(block);
  lcd.setCursor(0,2); 
  lcd.print(block);
  lcd.setCursor(19,2); 
  lcd.print(block);
  lcd.setCursor(0,3); 
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);
  lcd.print(block);

}

void xymove(int x,int y){
  if(x>1000){
    motorx.write(20);
    motory.write(0);
 }
 
  else if(x<100){

    motorx.write(160);
    motory.write(0);
 }
 
  else if(y>1000){
    motorx.write(0);
    motory.write(130);
 }

  else if(y<20){
    motory.write(50);
    motorx.write(0);
 }
 
 else{
    motorx.write(0);
    motory.write(0);
}
}
void timer(){

}