#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

String emotion = "";

void setup() {

  Serial.begin(9600);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    while(true);
  }

  display.clearDisplay();
  display.display();
}

void drawHappy() {

  display.clearDisplay();

  // Face
  display.drawCircle(64, 32, 25, WHITE);

  // Eyes
  display.fillCircle(54, 24, 3, WHITE);
  display.fillCircle(74, 24, 3, WHITE);

  // Smile
  display.drawLine(54, 42, 64, 48, WHITE);
  display.drawLine(64, 48, 74, 42, WHITE);

  display.display();
}

void drawSad() {

  display.clearDisplay();

  // Face
  display.drawCircle(64, 32, 25, WHITE);

  // Eyes
  display.fillCircle(54, 24, 3, WHITE);
  display.fillCircle(74, 24, 3, WHITE);

  // Sad mouth
  display.drawLine(54, 48, 64, 42, WHITE);
  display.drawLine(64, 42, 74, 48, WHITE);

  display.display();
}

void drawAngry() {

  display.clearDisplay();

  // Face
  display.drawCircle(64, 32, 25, WHITE);

  // Angry eyebrows
  display.drawLine(48, 20, 58, 24, WHITE);
  display.drawLine(80, 20, 70, 24, WHITE);

  // Eyes
  display.fillCircle(54, 28, 3, WHITE);
  display.fillCircle(74, 28, 3, WHITE);

  // Angry mouth
  display.drawLine(54, 45, 74, 45, WHITE);

  display.display();
}

void loop() {

  if (Serial.available()) {

    emotion = Serial.readStringUntil('\n');

    emotion.trim();

    Serial.println(emotion);

    if (emotion == "Happy") {
      drawHappy();
    }

    else if (emotion == "Sad") {
      drawSad();
    }

    else if (emotion == "Angry") {
      drawAngry();
    }
  }
}