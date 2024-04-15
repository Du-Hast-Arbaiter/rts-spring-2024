 #include <TaskManagerIO.h>
 
const int ledPin = 3;
const int ledPin2 = 5;
const int ledPin3 = 6;
const int ledPin4 = 9;
const int ledPin5 = 10;


int ledState = LOW; 
int ledState2 = LOW;
int ledState3 = LOW;
int ledState4 = LOW;
int ledState5 = LOW;


unsigned long previousMillis = 0; 
unsigned long previousMillis2 = 0; 
unsigned long previousMillis3 = 0; 
unsigned long previousMillis4 = 0; 
unsigned long previousMillis5 = 0;  


const long interval = 10000;
const long interval2 = 1000;
const long interval3 = 500;
const long interval4 = 100;
const long interval5 = 50;  

void blink()
{
  if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
  digitalWrite(ledPin, ledState);
}
void blink2()
{
  if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }
  digitalWrite(ledPin2, ledState2);
}
void blink3()
{
  if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }
  digitalWrite(ledPin3, ledState3);
}
void blink4()
{
  if (ledState4 == LOW) {
      ledState4 = HIGH;
    } else {
      ledState4 = LOW;
    }
  digitalWrite(ledPin4, ledState4);
}
void blink5()
{
  if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }
  digitalWrite(ledPin5, ledState5);
}


void setup() {

  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  
  taskManager.schedule(repeatMicros(interval), blink);
  taskManager.schedule(repeatMicros(interval2), blink2);
  taskManager.schedule(repeatMicros(interval3), blink3);
  taskManager.schedule(repeatMicros(interval4), blink4);
  taskManager.schedule(repeatMicros(interval5), blink5);
}

void loop() {
  taskManager.runLoop();
}

