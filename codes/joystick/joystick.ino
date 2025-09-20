#include <SPI.h>
#include <WiFi.h>
char ssid[] = "OnePlus";
char pass[] = "samarth254";
IPAddress ip;
void setup() {
    Serial.begin(9600);

  Serial.print("attempting to connect to network");
Serial.println(ssid);

WiFi.begin(ssid, pass);
while (WiFi.status() != WL_CONNECTED)
{
 
  Serial.print(".");
  delay(300);
}
Serial.println("\nYou're connected to the network");
Serial.println("Waiting for the ip address to be obtained ");
while (WiFi.localIP() == INADDR_NONE) {
  
 Serial.print(".");
  delay(300);
}
Serial.println("\nIP Address obtained");
ip=WiFi.localIP();
Serial.println(ip);
}

void loop() {
 
  
}