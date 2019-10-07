int x = 0;
int led = 3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 while (x < 250)
 {
  x = x + 2; 
  Serial.println (x);
  delay (100);
  digitalWrite (led, HIGH);
  delay (100);
  digitalWrite (led, LOW);
 }
 if (x == 250)
 {
  Serial.println ("RESTARTING");
  delay (1000);
   x = 0;
  }
  }
