const int readPin = A0;
void setup() {
  Serial.begin(9600);

}

void loop() {
int hodnota = analogRead(readPin);
float napeti = ((float)hodnota/1023.0)*5.0;

Serial.print("napětí: ");
Serial.print(napeti, 2);
Serial.println("V");
delay(200);
}
