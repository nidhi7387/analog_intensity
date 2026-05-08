#define led1 5
#define led2 4
byte myarray[]= {10, 27, 98,110, 147, 189, 210, 255 };


void setup() {
  Serial.begin(9000);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);


}

void loop() {

  for(int position=0; position<10; position++){

    analogWrite(led1, myarray[position]);
    analogWrite(led2,255-myarray[position]);
    Serial.print("LED1 intensity:");
    Serial.print(myarray[position]);
    Serial.print("LED2 intensity:");
    Serial.println(255-myarray[position]);
      }
  

}