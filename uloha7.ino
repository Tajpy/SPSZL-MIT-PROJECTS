const int segmentA = 13;
const int segmentB = 12;
const int segmentC = 11;
const int segmentD = 10;
const int segmentE = 9;
const int segmentF = 8;
const int segmentG = 7;

void setup()
{
  pinMode(segmentA, OUTPUT);
pinMode(segmentB, OUTPUT);
pinMode(segmentC, OUTPUT);
pinMode(segmentD, OUTPUT);
pinMode(segmentE, OUTPUT);
pinMode(segmentF, OUTPUT);
pinMode(segmentG, OUTPUT);
Serial.begin(9600);
ZhasnutiDisplaye();
}

  void ZhasnutiDisplaye() {
  for (int i = 13; i > 6; i--) {
    digitalWrite(i, HIGH);
  }
}

void loop(){
  char znak = Serial.read();
  RosvititZnak(znak);
  delay(100);
  }


  void RosvititZnak(char znak) {
  switch (znak) {
    case '0':  // A B C D E F svítí, G zhasnutý
      digitalWrite(segmentA, LOW);
      digitalWrite(segmentB, LOW);
      digitalWrite(segmentC, LOW);
      digitalWrite(segmentD, LOW);
      digitalWrite(segmentE, LOW);
      digitalWrite(segmentF, LOW);
      digitalWrite(segmentG, HIGH);
      break;

    case '1':  // B C
      digitalWrite(segmentA, HIGH);
      digitalWrite(segmentB, LOW);
      digitalWrite(segmentC, LOW);
      digitalWrite(segmentD, HIGH);
      digitalWrite(segmentE, HIGH);
      digitalWrite(segmentF, HIGH);
      digitalWrite(segmentG, HIGH);
      break;

    case '2':  // A B D E G
      digitalWrite(segmentA, LOW);
      digitalWrite(segmentB, LOW);
      digitalWrite(segmentC, HIGH);
      digitalWrite(segmentD, LOW);
      digitalWrite(segmentE, LOW);
      digitalWrite(segmentF, HIGH);
      digitalWrite(segmentG, LOW);
      break;

    case '3':  // A B C D G
      digitalWrite(segmentA, LOW);
      digitalWrite(segmentB, LOW);
      digitalWrite(segmentC, LOW);
      digitalWrite(segmentD, LOW);
      digitalWrite(segmentE, HIGH);
      digitalWrite(segmentF, HIGH);
      digitalWrite(segmentG, LOW);
      break;

    case '4':  // B C F G
      digitalWrite(segmentA, HIGH);
      digitalWrite(segmentB, LOW);
      digitalWrite(segmentC, LOW);
      digitalWrite(segmentD, HIGH);
      digitalWrite(segmentE, HIGH);
      digitalWrite(segmentF, LOW);
      digitalWrite(segmentG, LOW);
      break;

    case '5':  // A C D F G
      digitalWrite(segmentA, LOW);
      digitalWrite(segmentB, HIGH);
      digitalWrite(segmentC, LOW);
      digitalWrite(segmentD, LOW);
      digitalWrite(segmentE, HIGH);
      digitalWrite(segmentF, LOW);
      digitalWrite(segmentG, LOW);
      break;

    case '6':  // A C D E F G
      digitalWrite(segmentA, LOW);
      digitalWrite(segmentB, HIGH);
      digitalWrite(segmentC, LOW);
      digitalWrite(segmentD, LOW);
      digitalWrite(segmentE, LOW);
      digitalWrite(segmentF, LOW);
      digitalWrite(segmentG, LOW);
      break;

    case '7':  // A B C
      digitalWrite(segmentA, LOW);
      digitalWrite(segmentB, LOW);
      digitalWrite(segmentC, LOW);
      digitalWrite(segmentD, HIGH);
      digitalWrite(segmentE, HIGH);
      digitalWrite(segmentF, HIGH);
      digitalWrite(segmentG, HIGH);
      break;

    case '8':  // A B C D E F G
      digitalWrite(segmentA, LOW);
      digitalWrite(segmentB, LOW);
      digitalWrite(segmentC, LOW);
      digitalWrite(segmentD, LOW);
      digitalWrite(segmentE, LOW);
      digitalWrite(segmentF, LOW);
      digitalWrite(segmentG, LOW);
      break;

    case '9':  // A B C D F G
      digitalWrite(segmentA, LOW);
      digitalWrite(segmentB, LOW);
      digitalWrite(segmentC, LOW);
      digitalWrite(segmentD, LOW);
      digitalWrite(segmentE, HIGH);
      digitalWrite(segmentF, LOW);
      digitalWrite(segmentG, LOW);
      break;

      case 'x':  // B C
      digitalWrite(segmentA, HIGH);
      digitalWrite(segmentB, HIGH);
      digitalWrite(segmentC, HIGH);
      digitalWrite(segmentD, HIGH);
      digitalWrite(segmentE, HIGH);
      digitalWrite(segmentF, HIGH);
      digitalWrite(segmentG, HIGH);
      break;
  }
}