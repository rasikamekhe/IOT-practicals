#include <LiquidCrystal.h>
int num;
String s;

LiquidCrystal lcd1(6,7,2,3,4,5);     //lcd object  
void setup()
{
  lcd1.begin(16, 2);        //Initialize the LCD screen
  lcd1.print("Enter the Number");
  Serial.begin(9600);

}

void loop()
{
  if(Serial.available()){
    num = Serial.parseInt();
    lcd1.clear();
    delay(500);
        // Set the cursor position to the first row
    lcd1.setCursor(0, 0);
    s="Square of "+ String(num)+" : "+(num*num);
    lcd1.print(s);
    delay(10000);  
    lcd1.clear();
    lcd1.setCursor(0, 0);
    lcd1.print("Enter the Number");
 }
}
