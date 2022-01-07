#include <Arduino.h>
#include <EEPROM.h>
char in = 0;

//connection 
// Arduno 5v -> Blutooth modeule Vcc pin
//Arduno GND -> Blutooth modeule GND
//Arduno TX -> Blutooth modeule RX
//Arduno RX -> Blutooth modeule TX
//LED 
//LED NEG(-) ARDUNO -> GND
//LED POSTIVE (+) ARDUNO -> DIGITAL (11)

// 07 /Fri/2022
//Dev :MANOJ K NARAYANAN
// insta:manoj_drexler 

void setup() {
  Serial.begin(9600);          
  Serial.println("Program Loading...");

  //LED Pin
  pinMode(11,OUTPUT);

}

void loop() {

//checking the serial is avilable or not 
  if (Serial.available() >0 )
  {
    in = Serial.read();
    //printing the value 
    Serial.print(in);
    Serial.print("\n");
    if (in  == '1')
    {
      //turning on the led
      digitalWrite(11,HIGH);
      /* code */
    }else if (in == '0')
    {
      //turning off the led
      digitalWrite(11,LOW);
      
    }
    
  
  
  
 
}