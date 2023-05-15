#define Input1
#define Input2
#define Input3
#define Output1
#define Output2
#define Output3
#define LED


void setup() {
  pinMode(Input1, INPUT);
  pinMode(Input2, INPUT);
  pinMode(Input3, INPUT);
  pinMode(Output1, OUTPUT);
  pinMode(Output2, OUTPUT);
  pinMode(Output3, OUTPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
  digitalWrite(Output1, digitalRead(Input1));
  digitalWrite(Output2, digitalRead(Input2));
  digitalWrite(Output3, digitalRead(Input3));
  digitalWrite(LED, digitalRead(Input1));
}
