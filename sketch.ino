#include <Servo.h>

Servo myServo;
int trigPin = 2;
int echoPin = 3;
int buzzer = 4;
int distance;

void setup() {
  Serial.begin(9600);
  myServo.attach(9);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  myServo.write(0); // Initial position closed
  digitalWrite(buzzer, LOW); // Ensure buzzer is off at start
}

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  int duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;
  return distance;
}

void beep(int times) {
  for (int i = 0; i < times; i++) {
    tone(buzzer, 1000, 500); // 1000 Hz for 0.5 seconds
    delay(1000);
    noTone(buzzer);
  }
}

void loop() {
  distance = getDistance();
  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < 10 && distance > 0) {
    Serial.println("Object Detected!");
    myServo.write(90); // Open the lid
    beep(5); // Beep 5 times
    delay(3000);
    myServo.write(0);  // Close the lid
  } else {
    Serial.println("No Object Detected.");
    digitalWrite(buzzer, LOW); // Ensure buzzer is off
  }

  delay(1000);
}