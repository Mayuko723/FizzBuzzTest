int t=0;

void setup() {
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  

  for(int x=0; x<=100; x++){
    t=1+millis()/200;
  if(t%3==0 && t%5==0) {
    Serial.print("FizzBuzz");
  } else {
    if (t%5==0) {
      Serial.print("Fizz");
    } else {
      if (t%3==0) {
       Serial.print("Buzz");
      } else {
       Serial.print("");
      }
    }
  } 
  Serial.println("");
  Serial.print(t);
  delay(200);
  
  }
}
