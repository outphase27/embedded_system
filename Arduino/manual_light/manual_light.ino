float val = 0;
float brightness = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(0);
  val = val*255/1024;
  brightness = val;
  analogWrite(6,brightness);
  Serial.println(brightness);
  

}

