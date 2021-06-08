int LED_PRENSA_BRANCO=4;
int LED_PRENSA_AMARELO=5;
int CHAVE=2;
int CHAVE_ONOFF=3;

   void setup()
 {
  pinMode(LED_PRENSA_BRANCO,OUTPUT);
  pinMode(LED_PRENSA_AMARELO,OUTPUT);
  pinMode(CHAVE,INPUT_PULLUP);
  pinMode(CHAVE_ONOFF,INPUT_PULLUP);
  attachInterrupt(0,paraPrensa,LOW);
 }

   void loop()
 {
     if(digitalRead(CHAVE_ONOFF)==0)
 {
  digitalWrite(LED_PRENSA_BRANCO,HIGH);
  digitalWrite(LED_PRENSA_AMARELO,LOW);
  
  delay(1000);
  
  digitalWrite(LED_PRENSA_BRANCO,LOW);
  digitalWrite(LED_PRENSA_AMARELO,HIGH);
  
  delay(1000);
 }
   else
 {
  digitalWrite(LED_PRENSA_BRANCO,LOW);
  digitalWrite(LED_PRENSA_AMARELO,LOW);
 }

 }

   void paraPrensa()
 {
  digitalWrite(LED_PRENSA_BRANCO,LOW);
  digitalWrite(LED_PRENSA_AMARELO,LOW);
 }
