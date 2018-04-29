

//alternating between fast blinks and slow blinks. The LED should blink 5 times, once every half second, and then it should blink 5 more times, once every two seconds. 
void setup() {
  // initialize pin 13
  pinMode(13,OUTPUT);
}

void loop() {
  for (int i=0;i<5;++i){      //blink 5 times fast.  
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
  }                         
  for (int i=0;i<5;++i){      //blink 5 times slow.
    digitalWrite(13,HIGH);
    delay(2000);
    digitalWrite(13,LOW);
    delay(2000);
  }
}
