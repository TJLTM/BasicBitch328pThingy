#define HeadLight
#define EngineRun
#define Input3
#define DingDong
#define EGR
#define Output3
#define LED

long EGRTimer, WarningTimer;
bool DelayEGR, WarningDelay = false;

void setup() {
  pinMode(HeadLight, INPUT);
  pinMode(EngineRun, INPUT);
  pinMode(Input3, INPUT);
  pinMode(DingDong, OUTPUT);
  pinMode(EGR, OUTPUT);
  pinMode(Output3, OUTPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(DingDong, LOW);
  digitalWrite(EGR, LOW);
  digitalWrite(Output3, LOW);
  digitalWrite(LED, LOW);
}

void loop() {
  bool EngineStatus = digitalRead(EngineRun);

  if (digitalRead(HeadLight) == HIGH && EngineStatus == LOW) {
    if (WarningDelay == false) {
      WarningDelay = true;
      WarningTimer = millis();
    }
    if (millis() - WarningDelay) > 5000) {
      digitalWrite(DingDong, HIGH);
    }
  }
  else {
    digitalWrite(DingDong, LOW);
  }


  if (EngineStatus == HIGH) {
    if (digitalRead(EGR) == LOW) {
      if (DelayEGR == false) {
        DelayEGR = true;
        EGRTimer = millis();
      }
      if (millis() - EGRTimer > 300000) {
        digitalWrite(EGR, HIGH);
      }
    }
  }
  else {
    digitalWrite(EGR, LOW);
  }
}
