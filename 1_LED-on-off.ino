#define LED1 10
#define LED2 11
#define LED3 12
#define LED4 13

void setup() {
  // put your setup code here, to run once:
 
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH);
  delay(200);
  digitalWrite(LED1, LOW);
  delay(200);
 
  digitalWrite(LED2, HIGH);
  delay(200);
  digitalWrite(LED2, LOW);
  delay(200);
 
  digitalWrite(LED3, HIGH);
  delay(200);
  digitalWrite(LED3, LOW);
  delay(200);
 
  digitalWrite(LED4, HIGH);
  delay(200);
  digitalWrite(LED4, LOW);
  delay(200);
 
}
