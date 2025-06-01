#include <SoftwareSerial.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11
#define RELAY_PIN 7
#define SOIL_PIN A0
#define LIGHT_PIN A1

DHT dht(DHTPIN, DHTTYPE);
SoftwareSerial espSerial(10, 11); // RX = D10 ← TX ESP32

void setup() {
  Serial.begin(9600);
  espSerial.begin(9600);
  dht.begin();
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);
}

void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();
  int soil = analogRead(SOIL_PIN);
  int light = analogRead(LIGHT_PIN);

  String data = "TEMP=" + String(temp) + ",HUM=" + String(hum) + ",SOIL=" + String(soil) + ",LIGHT=" + String(light);
  Serial.println(data);
  espSerial.println(data);

  if (espSerial.available()) {
    String input = espSerial.readStringUntil('\n');
    float volume = input.toFloat();
    Serial.print("Nhận volume: ");
    Serial.println(volume);

    if (volume > 5.0) {
      digitalWrite(RELAY_PIN, HIGH);
      delay(volume * 1000);
      digitalWrite(RELAY_PIN, LOW);
    }
  }

  delay(5000);
}
