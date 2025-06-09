void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);  // Built-in LED for demo
}

void loop() {
  if (Serial.available()) {
    String cmd = Serial.readStringUntil('\n');
    cmd.trim();

    if (cmd == "KITCHEN_LAMP_ON") {
      digitalWrite(13, HIGH); // Turn on LED
    } else if (cmd == "KITCHEN_LAMP_OFF") {
      digitalWrite(13, LOW);  // Turn off LED
    }
  }
}
