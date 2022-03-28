

// constants won't change. They're used here to set pin numbers:
int buttonPin = 12;     // the number of the pushbutton pin
int bz =  8;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(bz, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == 1) {
    // turn LED on:
   tone(bz, 1850);
   delay(100);
   noTone(bz);
   delay(140);
   tone(bz, 1850);
   delay(100);
   noTone(bz);
   delay(140);
   tone(bz, 1850);
   delay(100);
   noTone(bz);
   delay(140);
   tone(bz, 1850);
   delay(100);
   noTone(bz);
   delay(160);
   
   
   tone(bz, 3080);
   delay(100);
   noTone(bz);
   delay(140);
   tone(bz, 3080);
   delay(100);
   noTone(bz);
   delay(140);
   tone(bz, 3080);
   delay(100);
   noTone(bz);
   delay(140);
   tone(bz, 3080);
   delay(100);
   noTone(bz);
   delay(160);
   
   
   tone(bz, 2470);
   delay(100);
   noTone(bz);
   delay(140);
   tone(bz, 2470);
   delay(100);
   noTone(bz);
   delay(140);
   tone(bz, 2470);
   delay(100);
   noTone(bz);
   delay(140);
   tone(bz, 2470);
   delay(100);
   noTone(bz);
   delay(160);


   tone(bz, 4010);
   delay(110);
   noTone(bz);
   delay(130);
   tone(bz, 4010);
   delay(110);
   noTone(bz);
   delay(130);
   tone(bz, 4010);
   delay(110);
   noTone(bz);
   delay(130);
   tone(bz, 4010);
   delay(110);
   noTone(bz);
   delay(150);


   tone(bz, 4625);
   delay(110);
   noTone(bz);
   delay(120);
   tone(bz, 4625);
   delay(110);
   noTone(bz);
   delay(120);
   tone(bz, 4625);
   delay(110);
   noTone(bz);
   delay(120);
   tone(bz, 4625);
   delay(110);
   noTone(bz);
   delay(120);
   tone(bz, 4625);
   delay(110);
   noTone(bz);
   delay(120);
   tone(bz, 4625);
   delay(110);
   noTone(bz);
   delay(120);
   tone(bz, 4625);
   delay(110);
   noTone(bz);
   delay(120);
   tone(bz, 4625);
   delay(110);
   noTone(bz);
   delay(120);
   tone(bz, 4625);
   delay(110);
   noTone(bz);
   delay(120);
   tone(bz, 4625);
   delay(110);
   noTone(bz);
   delay(120);
   tone(bz, 4625);
   delay(110);
   noTone(bz);
   delay(120);
   tone(bz, 4625);
   delay(110);
   noTone(bz);
   delay(150);
   

   tone(bz, 2470); //8
   delay(100);
   noTone(bz);
   delay(150);
   tone(bz, 1850); //6
   delay(100);
   noTone(bz);
   delay(150);
   tone(bz, 1540); //5
   delay(100);
   noTone(bz);
   delay(150);
   tone(bz, 310); //1
   delay(100);
   noTone(bz);
   delay(180);
   
   tone(bz, 925); //3
   delay(300);
   noTone(bz);
   delay(150);
   
   tone(bz, 925); //3
   delay(160);
   noTone(bz);
   delay(100);
   tone(bz, 3080); //10
   delay(120);
   noTone(bz);
   delay(150);
   tone(bz, 2470); //8
   delay(200);
   noTone(bz); 
   delay(250);
   tone(bz, 1850); //6
   delay(200);
   noTone(bz);
   delay(300);
   tone(bz, 1540); //5
   delay(300);
   noTone(bz);
   delay(150);
   tone(bz, 1540); //5
   delay(150);
   noTone(bz);
   delay(100);
   tone(bz, 1540); //5
   delay(150);
   noTone(bz);
   delay(150);
   tone(bz, 2470); //8
   delay(140);
   noTone(bz);
   delay(250);
   tone(bz, 1850); //6
   delay(150);
   noTone(bz);
   delay(120);
   tone(bz, 1540); //5
   delay(150);
   noTone(bz);
   delay(140);
   
   tone(bz, 925); //3
   delay(350);
   noTone(bz);
   delay(120);

   tone(bz, 925);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 2200);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 925);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 2200);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 925);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 2200);
   delay(120);
   noTone(bz);
   delay(150);
   
   tone(bz, 925); //3
   delay(350);
   noTone(bz);
   delay(120);

   tone(bz, 925);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 2200);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 925);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 2200);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 925);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 2200);
   delay(120);
   noTone(bz);
   delay(120);
   

   tone(bz, 925); //3
   delay(300);
   noTone(bz);
   delay(150);
   
   tone(bz, 925); //3
   delay(160);
   noTone(bz);
   delay(100);
   tone(bz, 3080); //10
   delay(120);
   noTone(bz);
   delay(150);
   tone(bz, 2470); //8
   delay(200);
   noTone(bz); 
   delay(250);
   tone(bz, 1850); //6
   delay(200);
   noTone(bz);
   delay(300);
   tone(bz, 1540); //5
   delay(300);
   noTone(bz);
   delay(150);
   tone(bz, 1540); //5
   delay(150);
   noTone(bz);
   delay(100);
   tone(bz, 1540); //5
   delay(150);
   noTone(bz);
   delay(150);
   tone(bz, 2470); //8
   delay(140);
   noTone(bz);
   delay(250);
   tone(bz, 1850); //6
   delay(150);
   noTone(bz);
   delay(120);
   tone(bz, 1540); //5
   delay(150);
   noTone(bz);
   delay(140);
   
   tone(bz, 925); //3
   delay(350);
   noTone(bz);
   delay(120);

   tone(bz, 925);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 2200);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 925);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 2200);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 925);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 2200);
   delay(120);
   noTone(bz);
   delay(150);
   
   tone(bz, 925); //3
   delay(350);
   noTone(bz);
   delay(120);

   tone(bz, 925);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 2200);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 925);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 2200);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 925);
   delay(120);
   noTone(bz);
   delay(120);
   tone(bz, 2200);
   delay(120);
   noTone(bz);
   delay(120);
   


   
  } 
  else {
    digitalWrite(bz, LOW);
    }
}
