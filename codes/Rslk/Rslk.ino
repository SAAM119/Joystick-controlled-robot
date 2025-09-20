#define lsp 35
#define rsp 36 
#define LDP 25
#define RDP 26
#define LSP 31
#define RSP 32
#include <SPI.h>
#include <WiFi.h>
char ssid[]= "OnePlus";
char password[]= "samarth254";

uint16_t port =5555;    
IPAddress server(192,168,1,122); 
void setup()
{
  Serial.begin(9600);
   analogReadResolution(12);
pinMode(LDP,OUTPUT);
pinMode(RDP,OUTPUT);
digitalWrite(LSP,HIGH);
digitalWrite(RSP,HIGH);
  WiFi.begin(ssid, password);
  while(WiFi.status()!=WL_CONNECTED)
  {
    Serial.println("Waiting for Wi-Fi Connection");
     Serial.print(".");
    delay(300);
  }
  
  Serial.println("WiFi Connected");
  Serial.println("Attempting to connect to Server");
  
  while(!Client.connect(server,port));
    {
    Serial.println("Connected to Server");
    }  
}
void forward(){
         digitalWrite(LDP,LOW);
 digitalWrite(RDP,LOW);
 analogWrite(lsp,80);
 analogWrite(rsp,80);
}

void backward(){
         digitalWrite(LDP,HIGH);
 digitalWrite(RDP,HIGH);
 analogWrite(lsp,80);
 analogWrite(rsp,80);
}
void right(){
         digitalWrite(LDP,LOW);
 digitalWrite(RDP,LOW);
 analogWrite(lsp,80);
 analogWrite(rsp,0);
}
void left(){
         digitalWrite(LDP,LOW);
 digitalWrite(RDP,LOW);
 analogWrite(lsp,0);
 analogWrite(rsp,80);
}
void Stop(){
          digitalWrite(LDP,LOW);
 digitalWrite(RDP,LOW);
 analogWrite(lsp,0);
 analogWrite(rsp,0);
}


void loop()
{
      if(Client.available())   
      {
       int s = Client.parseInt();
    Serial.print(s);
   if((s > 0)&&(s<1000)){
 forward();   
    }
    else if((s > 1100)&&(s<2000)){
  backward(); 
          }     
          else if((s> 2100) && (s <=3000)){
          right();
     }
       else if((s>= 3100) && (s <=3900)){
          left();
     }
       else if((s>= 3950) && (s <=4095)){
          Stop(); 26
     }
     }     
}