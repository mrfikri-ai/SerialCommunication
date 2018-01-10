int leftsensor = A2;
int rightsensor = A3;
int sensorValue1 = 0;
int sensorValue2 = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue1 = analogRead(leftsensor);
  sensorValue2 = analogRead(rightsensor);

  String temp = "{\"x\":\"";
    temp += sensorValue1;
    temp +="\",\"y\":\"";
    temp += sensorValue2;
    temp +="\"}";

Serial.println(temp); //convert the data to string, so In node js we can parse it
  
  //Serial.print(sensorValue1 + ',' + sensorValue2); // data serialization on .csv format
  // Serial.print(String(sensorValue1) + ',' + String(sensorValue2)); // if not work, use this
  // Serial.println(sensorValue2);

  delay(1); 
}
