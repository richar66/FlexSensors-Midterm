int flexSensorPinTh = A0; //analog pin 0
int flexSensorPinPoint = A1; //analog pin 1
int flexSensorPinMid = A2; //analog pin 2
int green = 8;
int red = 7;
int yellow = 4;
int blue = 2;

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
  
  
}

