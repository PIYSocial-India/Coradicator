// Coradicator Project by Team PIYSocial
#define LED_PIN4  7 

int inByte = 0;               
boolean status_unlock;
boolean status_bluetooth;

int minite,sec;
const int led_blue_pin = 5;         
const int led_red_pin = 10;         
const int buzzer_pin = 11; 
const int PIRPin = 8;         
int pirState = LOW;           
int val = 0;                  

void setup()
{

Serial.begin(9600);
pinMode(PIRPin, INPUT); 
pinMode(LED_PIN4, OUTPUT); 
pinMode(led_red_pin, OUTPUT);
pinMode(led_blue_pin, OUTPUT);
digitalWrite(LED_PIN4, LOW);  
digitalWrite(led_red_pin, LOW);  
pinMode(buzzer_pin, OUTPUT); 
digitalWrite(buzzer_pin, LOW);

status_bluetooth = true;
status_unlock = false;
sec = 0;
}

void loop()
{
val = digitalRead(PIRPin); 
if (val == HIGH)  
{
  digitalWrite(LED_PIN4, LOW); 
  digitalWrite(led_red_pin , LOW);
  }
else // condition when the PIR sensor detects a movement
{
  if (Serial.available() > 0) {
    inByte = Serial.read();                      

if(inByte == 'a'){
  digitalWrite(led_blue_pin, HIGH);// starts a warning sequence previously to turn on the UVC lamps, it includes an intermittent sound and the red led blinking.  
}

if(inByte == 'Q'){
digitalWrite(led_red_pin , HIGH);
digitalWrite(buzzer_pin, HIGH);
delay(200);
digitalWrite(led_red_pin , LOW);
delay(200);
digitalWrite(led_red_pin , HIGH);
digitalWrite(buzzer_pin, HIGH);
delay(200);
digitalWrite(led_red_pin , LOW);
delay(200);
digitalWrite(led_red_pin , HIGH);
digitalWrite(buzzer_pin, HIGH);
delay(200);
digitalWrite(led_red_pin , LOW);
digitalWrite(buzzer_pin, LOW);
delay(200);
digitalWrite(led_red_pin , HIGH);
digitalWrite(buzzer_pin, HIGH);
delay(200);
digitalWrite(led_red_pin , LOW);
digitalWrite(buzzer_pin, LOW);
delay(200);
digitalWrite(led_red_pin , HIGH);
digitalWrite(buzzer_pin, HIGH);
delay(200);
digitalWrite(led_red_pin , LOW);
digitalWrite(buzzer_pin, LOW);
delay(200);
digitalWrite(led_red_pin , HIGH);
digitalWrite(buzzer_pin, HIGH);
delay(1000);
digitalWrite(led_red_pin , LOW);
digitalWrite(buzzer_pin, LOW);
delay(200);
digitalWrite(led_red_pin , HIGH);
digitalWrite(buzzer_pin, HIGH);
delay(3000);
digitalWrite(led_red_pin , LOW);
digitalWrite(buzzer_pin, LOW);
digitalWrite(LED_PIN4, HIGH);        
digitalWrite(led_red_pin , HIGH);// red led is turned on when the relay is activated
Serial.write((byte)'Q'); 
inByte = 0;
}

if(inByte == 'q'){
digitalWrite(LED_PIN4, LOW);        
digitalWrite(led_red_pin , LOW);// red led is turned off when the relay is inactivated
Serial.write((byte)'q'); 
inByte = 0;
}

if(inByte == 'S'){
Serial.write((byte)'S');
digitalWrite(led_blue_pin , LOW);
delay(5000);
status_bluetooth = true;
sec = 0;
  
}
} 
}
} 
// Coradicator Project by Team PIYSocial
