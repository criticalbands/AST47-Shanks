// Motor A
const int A1A = 2;//define pin 2 for A1A
const int A1B = 3;//define pin 3 for A1B
// Motor B
const int B1A = 4;//define pin 8 for B1A
const int B1B = 5;//define pin 9 for B1B
// Motor C
const int C1A = 6;//define pin 8 for C1A
const int C1B = 7;//define pin 9 for C1B
// Motor D
const int D1A = 8;//define pin 8 for D1A
const int D1B = 9;//define pin 9 for B1B

// this is from the code found for the l9110
boolean motor_dir1 = 0;
boolean motor_dir2 = 0;
boolean motor_dir3 = 0;
boolean motor_dir4 = 0;

int SpeedControl1 = A0;
int SpeedControl2 = A1;
int SpeedControl3 = A2;
int SpeedControl4 = A3;

int MotorSpeed1 = 0;
int MotorSpeed2 = 0;
int MotorSpeed3 = 0;
int MotorSpeed4 = 0;

void setup() {
  pinMode(A1A,   OUTPUT);
  pinMode(A1B,   OUTPUT);
  pinMode(B1A,   OUTPUT);
  pinMode(B1B,   OUTPUT);
  pinMode(C1A,   OUTPUT);
  pinMode(C1B,   OUTPUT);
  pinMode(D1A,   OUTPUT);
  pinMode(D1B,   OUTPUT);
  
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(A4, INPUT_PULLUP);
  pinMode(A5, INPUT_PULLUP);
}

void loop() {
  MotorSpeed1 = analogRead(SpeedControl1);
  MotorSpeed1 = map(MotorSpeed1, 0, 1023, 0, 255);
  if (motor_dir1)
    digitalWrite(A1A, HIGH);
  else
    analogWrite(A1B, MotorSpeed1);
  if (motor_dir1)
    digitalWrite(A1B, 0);
  else
    digitalWrite(A1A, 0);

  MotorSpeed2 = analogRead(SpeedControl2);
  MotorSpeed2 = map(MotorSpeed2, 0, 1023, 0, 255);
  if (motor_dir2)
    digitalWrite(B1A, HIGH);
  else
    analogWrite(B1B, MotorSpeed2);
  if (motor_dir2)
    digitalWrite(B1B, 0);
  else
    digitalWrite(B1A, 0);

  MotorSpeed3 = analogRead(SpeedControl3);
  MotorSpeed3 = map(MotorSpeed3, 0, 1023, 0, 255);
  if (motor_dir3)
    digitalWrite(C1A, HIGH);
  else
    analogWrite(C1B, MotorSpeed3);
  if (motor_dir3)
    digitalWrite(C1B, 0);
  else
    digitalWrite(C1A, 0);

  MotorSpeed4 = analogRead(SpeedControl4);
  MotorSpeed4 = map(MotorSpeed4, 0, 1023, 0, 255);
  if (motor_dir4)
    digitalWrite(D1A, HIGH);
  else
    analogWrite(D1B, MotorSpeed4);
  if (motor_dir4)
    digitalWrite(D1B, 0);
  else
    digitalWrite(D1A, 0);
}
