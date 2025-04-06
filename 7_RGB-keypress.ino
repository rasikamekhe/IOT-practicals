char ch;

void setup()
{
 pinMode(3, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);    //Configures pins 3, 5, and 6 as output pins to control the LEDs.
 Serial.begin(9600);    //Initializes serial communication with a baud rate of 9600.
}

void loop()
{
 if(Serial.available()){
 ch=Serial.read();
 }
 if(ch=='R'|| ch=='r'){
 digitalWrite(3, LOW);
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);
 }
 if(ch=='G'||ch=='g'){
 digitalWrite(5, LOW);
 digitalWrite(6, HIGH);
 digitalWrite(3, HIGH);
 }
 if(ch=='B'||ch=='b'){
 digitalWrite(6, LOW);
 digitalWrite(5, HIGH);
 digitalWrite(3, HIGH);
 }
}
