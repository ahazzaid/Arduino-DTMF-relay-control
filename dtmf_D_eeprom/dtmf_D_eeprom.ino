#include <EEPROM.h>

#define D0 2
#define D1 3
#define D2 4
#define D3 5
#define RELAY 13

void setup() {
  pinMode(D0, INPUT);
  pinMode(D1, INPUT);
  pinMode(D2, INPUT);
  pinMode(D3, INPUT);
  pinMode(RELAY, OUTPUT);
  Serial.begin(9600);

  // Read saved relay state from EEPROM
  byte savedState = EEPROM.read(0);
  digitalWrite(RELAY, savedState);
  if (savedState == HIGH) {
    Serial.println("Relay ON (restored)");
  } else {
    Serial.println("Relay OFF (restored)");
  }
}

void loop() {
  int value = readDTMF();
  if (value == 2) {
    digitalWrite(RELAY, HIGH);              // Turn ON relay
    EEPROM.update(0, HIGH);                 // Save to EEPROM
    Serial.println("Relay ON");
  } else if (value == 3) {
    digitalWrite(RELAY, LOW);               // Turn OFF relay
    EEPROM.update(0, LOW);                  // Save to EEPROM
    Serial.println("Relay OFF");
  }
  delay(200); // debounce delay
}

int readDTMF() {
  int binaryValue = digitalRead(D3) << 3 | digitalRead(D2) << 2 | digitalRead(D1) << 1 | digitalRead(D0);
  return binaryValue;
}
