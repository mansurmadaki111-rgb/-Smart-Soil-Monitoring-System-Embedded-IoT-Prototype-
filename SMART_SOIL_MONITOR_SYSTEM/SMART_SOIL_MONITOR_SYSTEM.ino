#include <Keypad.h>

int green = 11;
int red = 12;
int soilPin = 10;

bool monitorMode = false;

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600);
  pinMode(soilPin, INPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {

  char key = keypad.getKey();

  if (key == '1') {
    monitorMode = true;
    Serial.println("MONITORING STARTED");
  }

  if (key == '2') {

  int soilState = digitalRead(soilPin);

  Serial.println("===== SMART SOIL MONITOR SYSTEM =====");

  Serial.print("System Status: ");
  Serial.println("ACTIVE");

  Serial.print("Soil Reading: ");
  Serial.println(soilState);

  if (soilState == 1) {
    Serial.println("CURRENT STATUS: DRY SOIL");
  } else {
    Serial.println("CURRENT STATUS: WET SOIL");
  }

  Serial.println("=====================================");
}
  //  ALWAYS UPDATE SENSOR WHEN MONITOR MODE IS ON
  if (monitorMode == true) {

    int soilState = digitalRead(soilPin);

    if (soilState == 1) {

      // DRY → RED BLINK
      digitalWrite(green, LOW);

      digitalWrite(red, HIGH);
      delay(300);
      digitalWrite(red, LOW);
      delay(300);

    } else {

      // WET → GREEN BLINK
      digitalWrite(red, LOW);

      digitalWrite(green, HIGH);
      delay(300);
      digitalWrite(green, LOW);
      delay(300);
    }
  }
}