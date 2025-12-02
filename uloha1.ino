int zelena = 5;
int zluta = 6;
int cervena = 7;


void setup() {

  pinMode(zelena, OUTPUT);
  pinMode(zluta, OUTPUT);
  pinMode(cervena, OUTPUT);

}

void loop() {

  digitalWrite(zelena, HIGH);
  delay(1000);
  digitalWrite(zluta, HIGH);
  delay(1000);
  digitalWrite(zelena, LOW);
  digitalWrite(zluta, LOW);
  digitalWrite(cervena, HIGH);
  delay(3000);
  digitalWrite(zluta, HIGH);
  digitalWrite(cervena, LOW);
  delay(1000);
  digitalWrite(zluta, LOW);

}
