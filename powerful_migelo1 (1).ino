int ldr=A0;//Set A0(Analog Input) for LDR.
int led = 3;
int value=0;
void setup() {
 Serial.begin(9600);
 pinMode(led,OUTPUT);  // initialize serial
 pinMode(9,OUTPUT);
 pinMode(A1,INPUT);
}
void loop(){
 float temperature;
 temperature=analogRead(A1);
 float tempmv=temperature*5000/1024;
 float tempc=(tempmv/10)+(-50);
 value=analogRead(ldr);//Reads the Value of LDR(light).
 Serial.println("LDR value is :");//Prints the value of LDR to Serial Monitor.
 Serial.println(value);
 if(value>10)
 {
 digitalWrite(led,HIGH);//Makes the LED glow in Dark.
 }
 else
 {
 digitalWrite(led,LOW);//Turns the LED OFF in Light.
 }
 if(tempc<20)
 {
   analogWrite(9,0);
   delay(1000);
 }
  else if(tempc>20&&tempc<=25)
  {
    analogWrite(9,100);
    delay(1000);
  }
  else if(tempc>25&&tempc<=30)
  {
    analogWrite(9,150);
    delay(1000);
  }
  else
  {
    analogWrite(9,255);
    delay(1000);
  }
}