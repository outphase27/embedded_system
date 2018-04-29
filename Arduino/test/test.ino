int pk=13;
void setup()
{
pinMode(13,OUTPUT);
serial.begin(9600);
}
void loop()
{
char a==serial.read();
if(a=='1')
{
digitalWrite(pk,1);
}
else(if a=='0')
{
digitalWrite(pk,0);
}
}
