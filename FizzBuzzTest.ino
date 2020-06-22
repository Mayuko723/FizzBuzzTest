int t=0;

void setup() {
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  t=1+millis()/200;
  
  if(t%3==0 && t%5==0) {
    Serial.print("FizzBuzz");
  } else {
    if (t%3==0) {
      Serial.print("Fizz    \n");
    } else {
      if (t%5==0) {
       Serial.print("Buzz    \n");
      } else {
       Serial.print("        \n");
      }
    }
  } 
  Serial.print(t);
}
