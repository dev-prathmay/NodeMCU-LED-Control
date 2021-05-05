#define BLYNK_PRINT Serial

#include <ESP8266Wifi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "Your authorisation Token Here";
char ssid[] = "Your wifi name here";
char pass[] = "Your wifi password here";

void setup(){
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
void loop(){
  Blynk.run();
}
