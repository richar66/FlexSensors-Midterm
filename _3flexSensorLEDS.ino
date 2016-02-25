int flexSensorPinPoint = A1; //analog pin 1
int flexSensorPinTh = A0; //analog pin 0
int flexSensorPinMid = A2; //analog pin 2
int green = 6;
int red = 5;
int yellow = 4;
int blue = 3;

void setup(){
  Serial.begin(9600);
  pinMode(blue, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop(){
  int flexSensorReadingPt = analogRead(flexSensorPinPoint); 
  int flexSensorReadingTh = analogRead(flexSensorPinTh);
  int flexSensorReadingMid = analogRead(flexSensorPinMid);
  Serial.println(flexSensorReadingPt);
  Serial.println(flexSensorReadingTh);
  Serial.println(flexSensorReadingMid);
  
 /* if(flexSensorReadingL <= 200){
  digitalWrite(5, LOW); 
  
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)       
  }   

 else{
  digitalWrite(6, LOW); 
  
  digitalWrite(5, HIGH);  } // turn the LED on (HIGH is the voltage level)

 
if(flexSensorReadingS <= 95){
  digitalWrite(3, LOW); 
  
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
          
  }   

 else{
  digitalWrite(4, LOW); 
  digitalWrite(3, HIGH); 
 }
*/
  delay(500); //just here to slow down the output for easier reading
}

