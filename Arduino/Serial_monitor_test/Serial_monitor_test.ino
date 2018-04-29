
char a = '0';                                                    // define char a 
void setup() {
  
  pinMode(13,OUTPUT); 
  Serial.begin(9600);                                            // initialize serial_monitor
  Serial.print("Please input 1 (ON) or 0 (OFF).\n");           
}

void loop() {
  a = Serial.read();
  if(a=='1') {
     digitalWrite(13,HIGH); 
     }                                                           //  input 1 will turn the led on
  if(a=='0'){
    digitalWrite(13,LOW);                                        //  input 0 will turn the led off
  }
}
