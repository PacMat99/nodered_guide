#ifdef ESP32
  #include <WiFi.h>
#else
  #include <ESP8266WiFi.h>
#endif

void setup(){
  Serial.begin(115200);
  Serial.println();
}
 
void loop(){
  Serial.print("ESP Board MAC Address:  ");
  Serial.println(WiFi.macAddress());
  delay(10000)
}
