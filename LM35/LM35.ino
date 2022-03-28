#define sensor A0
#define bz 8

float input, temp;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(bz, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  input = analogRead(sensor);
  temp = input * 500 / 1024;
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print("'C");
  Serial.println();
  delay(1000);

  if(temp >= 26){
    digitalWrite(bz, HIGH);
    delay(200);

    digitalWrite(bz, LOW);
    delay(50);
  }
 else {
  digitalWrite(bz, LOW);
  }
}
