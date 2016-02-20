int flexSensorPinL = A0; //analog pin 0
int flexSensorPinS = A1; //analog pin 1

void setup(){
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop(){
  int flexSensorReadingL = analogRead(flexSensorPinL); 
  int flexSensorReadingS = analogRead(flexSensorPinS);
  Serial.println(flexSensorReadingL);
  Serial.println(flexSensorReadingS);
  
  if(flexSensorReadingL <= 200){
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

  delay(500); //just here to slow down the output for easier reading
}

