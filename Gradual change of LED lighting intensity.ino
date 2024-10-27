int ledPin = 9; // پین LED
int brightness = 0; // شدت روشنایی
int fadeAmount = 5; // مقدار افزایش یا کاهش شدت روشنایی

void setup() {
  pinMode(ledPin, OUTPUT); // تنظیم پین LED به عنوان خروجی
}

void loop() {
  // افزایش شدت روشنایی از 0 به 255
  for (brightness = 0; brightness <= 255; brightness += fadeAmount) {
    analogWrite(ledPin, brightness); // تنظیم شدت روشنایی LED
    delay(10); // تاخیر 10 میلی ثانیه
  }

  // کاهش شدت روشنایی از 255 به 0
  for (brightness = 255; brightness >= 0; brightness -= fadeAmount) {
    analogWrite(ledPin, brightness); // تنظیم شدت روشنایی LED
    delay(10); // تاخیر 10 میلی ثانیه
  }
}
