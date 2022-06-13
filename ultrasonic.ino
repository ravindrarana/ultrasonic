
#define trigPin 7
#define echoPin 8
#define led 13
#define fan 12

void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(led, OUTPUT);
pinMode(fan, OUTPUT);
}

void loop() {
long duration, distance;
digitalWrite(trigPin, LOW);  
delayMicroseconds(2); 
digitalWrite(trigPin, HIGH);
delayMicroseconds(10); 
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
  
distance = (duration/2) / 29.1;
  
if (distance < 50) { 
  
 digitalWrite(led,HIGH);
 Serial.println("Light is ON");
 Serial.println(distance);
}
else {
  digitalWrite(led,LOW);
  Serial.print(distance);
  Serial.println(" cm");
  Serial.println("Out of Range");
}
delay(500);
}
