#define Input1 3
#define Input2 4
#define Input3 2
#define Output1 5
#define Output2 6
#define Output3 9
#define LED 7


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
