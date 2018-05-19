#include <EEPROM.h>
void setup() {
 Serial.begin(9600);
 while (!Serial) {
   ;
 }
 Serial.println("Please input as the format shown below");
 Serial.println("read 13");
 Serial.println("write 123 12");
}
int address;
int data;

void loop() {
  String buffer ="";
  buffer = Serial.readString();
  if(buffer.startsWith("read")){                                  // read 
    address = buffer.substring(buffer.indexOf(' ')+1).toInt();    // There is only one' ', the substring is address. 
    Serial.println(EEPROM.read(address));
  }
  else if(buffer.startsWith("write")){
    int i=6;       
    for(;buffer[i]>'0'&& buffer[i]<'9';i++){                      // the address is bewteen the write and data
    ;
    }                                                             // the address is start from space to the i (not include i)
    address = buffer.substring(6,i).toInt();
    data = buffer.substring(i+1).toInt();
    EEPROM.write(address,data);
  }
}
