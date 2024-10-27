int ledpin = 9;
int analogpin = A0;
int val = 0 ;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
val = analogpinRead(analogpin);
analogpinWrite(ledpin, val / 4);
}
