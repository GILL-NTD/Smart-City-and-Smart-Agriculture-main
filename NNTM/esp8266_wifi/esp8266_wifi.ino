#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "Milano";
const char* password = "Khong34972chin13chin";
const char* serverURL = "http://192.168.1.100:5000/api/predict";

HardwareSerial mySerial(1);

void setup() {
  Serial.begin(115200);
  mySerial.begin(9600, SERIAL_8N1, 16, 23); // RX = 16, TX = 23

  WiFi.begin(ssid, password);
  Serial.println("Kết nối WiFi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nĐã kết nối WiFi!");
  Serial.println(WiFi.localIP());
}

void loop() {
  if (mySerial.available()) {
    String sensorData = mySerial.readStringUntil('\n');
    Serial.println("Dữ liệu cảm biến từ UNO: " + sensorData);

    HTTPClient http;
    http.begin(serverURL);
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");

    int code = http.POST("data=" + sensorData);
    if (code == 200) {
      String volume = http.getString();
      Serial.println("Nhận lại volume: " + volume);
      mySerial.println(volume);
    } else {
      Serial.println("Lỗi gửi HTTP");
    }

    http.end();
  }
}
