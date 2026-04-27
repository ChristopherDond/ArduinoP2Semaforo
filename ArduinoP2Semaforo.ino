const int led[3][3] = {
  {2, 3, 4},   
  {5, 7, 6},   
  {8, 10, 9}   
};

void apagaTodos() {
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      digitalWrite(led[i][j], LOW);
}

void acende(int ledIdx, bool r, bool g, bool b) {
  digitalWrite(led[ledIdx][0], r);
  digitalWrite(led[ledIdx][1], g);
  digitalWrite(led[ledIdx][2], b);
}

void setup() {
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      pinMode(led[i][j], OUTPUT);
}

void loop() {

  apagaTodos();
  acende(0, HIGH, LOW, LOW);
  delay(2000);

  apagaTodos();
  acende(1, HIGH, HIGH, LOW);
  delay(1500);

  apagaTodos();
  acende(2, LOW, HIGH, LOW);
  delay(2000);

  apagaTodos();
  acende(1, HIGH, HIGH, LOW);
  delay(1500);
}