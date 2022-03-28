#define sensor A0
#define bz 8

float input, temp_c, temp_f;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(bz, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  input = analogRead(sensor);
  temp_c = input * 500 / 1024;
  temp_f = 9 * (temp_c / 5) + 32;
  Serial.print("INPUT value: ");
  Serial.print(input);
  Serial.println();
  Serial.print("Temperature in Celsius: ");
  Serial.print(temp_c);
  Serial.print("'C");
  Serial.println();
  Serial.print("Temperature in Fahrenheit: ");
  Serial.print(temp_f);
  Serial.print("F");
  Serial.println();
  delay(1000);

  if(temp_c >= 26){
    digitalWrite(bz, HIGH);
    delay(200);

    digitalWrite(bz, LOW);
    delay(50);
  }

  else {
    digitalWrite(bz, LOW);
  }
}
