int analogPin = A0; // پین آنالوگ برای خواندن ولتاژ
float voltage = 0.0; // متغیر برای ذخیره ولتاژ

void setup() {
  Serial.begin(9600); // شروع ارتباط سریال با نرخ 9600 بیت بر ثانیه
}

void loop() {
  // خواندن مقدار آنالوگ از پتانسیومتر
  int sensorValue = analogRead(analogPin);

  // تبدیل مقدار آنالوگ (0-1023) به ولتاژ (0-5V)
  voltage = sensorValue * (5.0 / 1023.0);

  // چاپ ولتاژ در مانیتور سریال
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(1000); // تاخیر 1 ثانیه قبل از خواندن مجدد
}
