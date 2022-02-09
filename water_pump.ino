
int soilMoistureValue = 0;
int percentage=0;
void setup() {
  pinMode(3,OUTPUT);
  //makes pin 3 signal output pin for relay//
  
  Serial.begin(9600);
}
void loop() {
soilMoistureValue = analogRead(A1);// reads analog value of moisture sensor//

Serial.println(percentage);
percentage = map(soilMoistureValue, 80, 1023, 100, 0);
//*sets max, min values for moisture sensor*//

if(percentage < 75) // this value depends on type quality of moisture sensor// 
{
  Serial.println(" pump on");
  // if percentage is low pump is switched on//

  
  digitalWrite(3,HIGH);
  // High value switches on relay//
}
if(percentage >75)
{
  Serial.println("pump off"); 
  // if percentage is high pump is switched off//
  
  digitalWrite(3,LOW);
  // low value switches off relay//
}
}
