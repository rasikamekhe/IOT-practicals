// Define pin numbers for LEDs
#define GREEN_LED 4
#define YELLOW_LED 2
#define RED_LED 3

// Initialize counter
int counter = 0;

void setup() {
  // Set LED pins as outputs
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  // Reset all LEDs
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, LOW);

  // Illuminate the appropriate LED based on the counter value
  if (counter <= 100)
   {
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, HIGH);
    digitalWrite(RED_LED, HIGH);
    delay(20);
  }
  else if (counter > 100 && counter <= 200)
  {
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, HIGH);
    delay(20);
  } else if (counter > 200)
   {
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(YELLOW_LED, HIGH);
    delay(20);
  }

  // Increment the counter
  counter++;

  // Reset counter if it exceeds 300
  if (counter > 300) {
    counter = 0;
  }


  // Wait 100ms before updating the LEDs
  delay(100);
}
