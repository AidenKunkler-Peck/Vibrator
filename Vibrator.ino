int vpin=7;
int lpin=8;
int vpin2=9;
float temp =0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(vpin, OUTPUT);
  pinMode(vpin2, OUTPUT);
}

void loop() {
   //put your main code here, to run repeatedly:
  for (int i=0; i <= 255; i++){
    Serial.print("i = ");
    temp = i;
    Serial.print((temp/255)*100);
    Serial.println(" %");
    analogWrite(vpin, i);
    analogWrite(vpin2, i);
    analogWrite(lpin, i);
    delay(25);
  }
  for (int i=255; i>=0; i--){
    Serial.print("i = ");
    temp = i;
    Serial.print((temp/255)*100);
    Serial.println(" %");
    analogWrite(vpin, i);
    analogWrite(vpin2, i);
    analogWrite(lpin, i);
    delay(25);
  }

//analogWrite(vpin,255);
//delay(1000);
//analogWrite(vpin, 0);
//delay(1000);


}
