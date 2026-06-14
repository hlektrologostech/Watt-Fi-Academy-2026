
//#define BOARD_SELECTOR_PIN 2 // D2: Καθορίζει τον τύπο πλακέτας

void setup() {
  Serial.begin(115200); // Γρήγορη επικοινωνία Serial
 // pinMode(BOARD_SELECTOR_PIN, INPUT_PULLUP); // Εσωτερική αντίσταση pull-up
}

void loop() {
  // Διάβασμα των αναλογικών τιμών (0-1023)
  int s0 = analogRead(A0);
  int s1 = analogRead(A1);
  int s2 = analogRead(A2);
  int s3 = analogRead(A3);
  int s4 = analogRead(A4);

  // Έλεγχος ποια πλακέτα είναι συνδεδεμένη
 // String boardType = "A";
  //if (digitalRead(BOARD_SELECTOR_PIN) == LOW) {
  //  boardType = "B";
 // }

  // Δημιουργία και αποστολή του JSON string μέσω Serial
  Serial.print("{");
  //Serial.print("\"board\":\"" + boardType + "\",");
  Serial.print("\"raw0\":" + String(s0) + ",");
  Serial.print("\"raw1\":" + String(s1) + ",");
  Serial.print("\"raw2\":" + String(s2) + ",");
  Serial.print("\"raw3\":" + String(s3) + ",");
  Serial.print("\"raw4\":" + String(s4));
  Serial.println("}");

  delay(1000); // Αποστολή δεδομένων κάθε 1 δευτερόλεπτο
}