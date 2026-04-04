#include "WiFi.h"

void setup() {

  Serial.begin(115200);

  Serial.println();
  Serial.println("ESP32 WiFi Network Analyzer");

  WiFi.mode(WIFI_STA);
  WiFi.disconnect();

  delay(1000);
}

void loop() {

  Serial.println("Scanning for nearby WiFi networks...");

  int networkCount = WiFi.scanNetworks();

  if (networkCount == 0) {

    Serial.println("No networks found");

  } else {

    Serial.print(networkCount);
    Serial.println(" networks detected\n");

    for (int i = 0; i < networkCount; i++) {

      Serial.print("Network ");
      Serial.print(i + 1);
      Serial.print(" : ");

      Serial.print(WiFi.SSID(i));

      Serial.print(" | Signal Strength: ");
      Serial.print(WiFi.RSSI(i));
      Serial.print(" dBm");

      Serial.print(" | Channel: ");
      Serial.print(WiFi.channel(i));

      Serial.print(" | Encryption: ");

      wifi_auth_mode_t encryption = WiFi.encryptionType(i);

      switch (encryption) {

        case WIFI_AUTH_OPEN:
          Serial.println("Open");
          break;

        case WIFI_AUTH_WEP:
          Serial.println("WEP");
          break;

        case WIFI_AUTH_WPA_PSK:
          Serial.println("WPA");
          break;

        case WIFI_AUTH_WPA2_PSK:
          Serial.println("WPA2");
          break;

        case WIFI_AUTH_WPA_WPA2_PSK:
          Serial.println("WPA/WPA2");
          break;

        default:
          Serial.println("Unknown");
      }
    }
  }

  Serial.println("-------------------------------");

  delay(5000);
}
