#define Input1 3 //HeadLight
#define Input2 4 //Key or Run State
#define Input3 2
#define Output1 5 //Buzzer
#define Output2 6
#define Output3 11
#define LED 13

long KeyOffDelayTimer;
long KeyOffDelay = 5000; // in Mills

void setup() {
  // put your setup code here, to run once:
  pinMode(Input1, INPUT);
  pinMode(Input2, INPUT);
  pinMode(Input3, INPUT);
  pinMode(Output1, OUTPUT);
  pinMode(Output2, OUTPUT);
  pinMode(Output3, OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  HeadLightWarning();
}


void HeadLightWarning() {
  if (digitalRead(Input1) == HIGH) {
    if (digitalRead(Input2) == LOW) {
      if (abs(KeyOffDelayTimer - millis()) > KeyOffDelay) {
        digitalWrite(Output1, HIGH);
      }
    }

    if (digitalRead(Input2) == HIGH) {
      KeyOffDelayTimer = millis();
      digitalWrite(Output1, LOW);
    }
  }
}
