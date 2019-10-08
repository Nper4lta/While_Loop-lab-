int x = 1;
int led = 3;
int butt = 2;
int buttState = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (led, OUTPUT);
  pinMode (butt, INPUT_PULLUP);
}

void loop() {
   buttState = digitalRead(butt);
 if (buttState == LOW)
 {
 while (x <= 100)
 {
  x = x + 2; 
  Serial.println (x);
  digitalWrite (led, HIGH);
 }
 x = 0;
 Serial.print ("Rebooting");
 delay(100);
 Serial.print (".");
 delay (100);
  Serial.print (".");
 delay (100);
  Serial.print (".");
 delay (100);
  Serial.print (".");
 delay (100);
  Serial.print (".");
 delay (100);
  Serial.print (".");
 delay (100);
  Serial.print (".");
 delay (100);
  Serial.print (".");
 delay (100);
  Serial.print (".");
 delay (100);
  Serial.print (".");
 delay (100);
  Serial.print (".");
 delay (100);
  Serial.println (".");
 delay (100);
 }
 else 
 {
 digitalWrite (led, LOW);
 x = 0;
 }
 }


