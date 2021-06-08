int LED_PRENSA=4;
int CHAVE=2;

  void setup()
 {
  pinMode(LED_PRENSA,OUTPUT);
  pinMode(CHAVE,INPUT_PULLUP);
  attachInterrupt(0,paraPrensa,LOW);
 }

  void loop()
 {
  digitalWrite(LED_PRENSA,HIGH);
  delay(5000);

 }

  void paraPrensa()
 {
  digitalWrite(LED_PRENSA,LOW);
 }
