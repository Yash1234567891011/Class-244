#define LED 26
#define PUSHBUTTON_pin 12
int button=0;
void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
pinMode(PUSHBUTTON_pin,INPUT_PULLUP);
}
void loop() {
  // put your main code here, to run repeatedly:
  button=digitalRead(PUSHBUTTON_pin);
  if(button==LOW){
  digitalWrite(LED_pin,HIGH);
  delay(100);
  }
else{
  digitalWrite(LED_pin,LOW);
}
}