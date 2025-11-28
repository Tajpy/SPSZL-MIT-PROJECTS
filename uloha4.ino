int ledka = 6;
int potak = A0;
int i = 0;
void setup()
{ 
  pinMode(ledka, OUTPUT);

}

void loop()
{
  int hodnotapot = analogRead(potak);
  int prodleva = map(hodnotapot, 0, 1023, 1, 20);
for (i=0; i<=255; i+=1)
{
  analogWrite(ledka, i);
  delay(prodleva);
}
delay(200);

for (i=255; i>=0; i-=1)
{
  analogWrite(ledka, i);
  delay(prodleva);
}
delay(200);
}