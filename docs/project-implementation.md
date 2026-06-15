
# 🔧 Υλοποίηση του Project — Watt-Fi Academy 2026

> *"Ξεκινήσαμε με ένα σχέδιο στο χαρτί. Τελειώσαμε με κυκλώματα, κώδικα, 3D εκτυπωτή, Raspberry Pi και αρκετές ώρες του τύπου 'αλλά γιατί ΔΕΝ δουλεύει τώρα;'. Αυτό εδώ είναι η ιστορία μας."*

---

## 📌 Γενικές Πληροφορίες

| | |
|---|---|
| **Σχολείο** | Εσπερινό ΕΠΑΛ Αλιάρτου |
| **Τάξεις** | Β' και Γ' Ηλεκτρολόγου |
| **Εκπαιδευτικός** | Κεσσόγλου Τιμολέων, ΠΕ83 — Ηλεκτρολόγος |
| **Διαγωνισμός** | [8ος Πανελλήνιος Διαγωνισμός Ανοιχτών Τεχνολογιών στην Εκπαίδευση — OpenEdTech ΕΛΛΑΚ](https://openedtech.ellak.gr/8th-openedtech/) |
| **Repository** | [github.com/hlektrologostech/Watt-Fi-Academy-2026](https://github.com/hlektrologostech/Watt-Fi-Academy-2026) |
| **ELLAK Page** | [openedtech.ellak.gr/robotics2026/electrohercules-watt-fi-academy/](https://openedtech.ellak.gr/robotics2026/electrohercules-watt-fi-academy/) |

---

## 🎯 Τι θέλαμε να κάνουμε

Η ιδέα ήταν απλή: στο εργαστήριο ηλεκτρολογίας, αντί να γράφουμε τις μετρήσεις σε χαρτιά που χάνονται, να τις **συλλέγουμε αυτόματα** από τα κυκλώματα, να τις στέλνουμε ψηφιακά και να καταλήγουν στην εκπαιδευτική πλατφόρμα MoodleBox — χωρίς ίντερνετ, χωρίς ακριβό εξοπλισμό, με ανοιχτές τεχνολογίες.

Με ακόμα πιο απλά λόγια: θέλαμε να μετατρέψουμε το εργαστήριό μας από **"χαρτί και μολύβι"** σε κάτι που θα έμοιαζε λίγο περισσότερο με **πραγματική μηχανική**.

---

## 🛠️ Βήμα 1 — Σχεδιασμός του κυκλώματος

Το πρώτο πράγμα που κάναμε ήταν να σχεδιάσουμε το κύκλωμα που θα χρησιμοποιούσαμε για τις μετρήσεις τάσης και ρεύματος, βάσει των τεχνικών χαρακτηριστικών (datasheets) των αισθητήρων που επιλέξαμε.

Ακούγεται εύκολο. Δεν ήταν. Αλλά μάθαμε πολλά.

📎 **Χρήσιμα links:**
- [QElectroTech](https://qelectrotech.org/index.php)
- [Voltage Sensor Module](https://www.datasheethub.com/0-to-25v-dc-voltage-sensor-module/)
- [Current Sensor Module](httpshttps://easyelecmodule.com/acs712-hall-current-sensor-module/)

---

## 🖨️ Βήμα 2 — 3D Εκτύπωση θηκών εξοπλισμού

Για να μην κυκλοφορεί το Raspberry Pi και το Arduino ορφανά πάνω στον πάγκο, σχεδιάσαμε και εκτυπώσαμε **θήκες** με 3D εκτυπωτή. Ένα από τα αγαπημένα μας βήματα — γιατί κάτι πήγαινε σωστά από την πρώτη φορά!

📎 **Χρήσιμα links:**
- [Arduino UNO R3 Case](https://www.printables.com/model/204598-arduino-uno-r3-case-with-reset-button/files)
- [RPi Zero DISP 7A case](https://www.printables.com/model/791787-rpi-zero-disp-7a-case)
- [Raspberry Pi Zero 2W — επίσημη σελίδα](https://www.raspberrypi.com/products/raspberry-pi-zero-2-w/)
[![3dprinting001](https://img.youtube.com/vi/JdvB8OSkEuA/maxresdefault.jpg)](https://www.youtube.com/watch?v=JdvB8OSkEuA)  
<small>*click image to [open video](https://www.youtube.com/watch?v=JdvB8OSkEuA)*</small>
---

## 🪛 Βήμα 3 — Στερέωση αισθητήρων σε ξύλινες επιφάνειες

Επειδή χρειαζόμασταν αρκετούς αισθητήρες τάσης και ρεύματος, αποφασίσαμε να τους **στερεώσουμε σε ξύλινες επιφάνειες** ώστε να μπορούμε να τους συνδέουμε εύκολα, σταθερά και ξανά και ξανά χωρίς να πέφτουν τα πάντα κάτω.

Απλή λύση. Πολύ πρακτική. Το συστήνουμε ανεπιφύλακτα.

---

## ⚡ Βήμα 4 — Υλοποίηση πρωτότυπης πλακέτας μετρήσεων

Κατασκευάσαμε **πρωτότυπη πλακέτα** για να οργανώσουμε τη συνδεσμολογία του κυκλώματος και να έχουμε πιο καθαρό αποτέλεσμα από το να έχουμε τα πάντα κρεμαστά στον αέρα με καλώδια να πηγαίνουν παντού.
[![InstallAndSolder](https://img.youtube.com/vi/cSmqkgk_FSA/maxresdefault.jpg)](https://www.youtube.com/watch?v=cSmqkgk_FSA)   

<small>*click image to [open video](https://www.youtube.com/watch?v=cSmqkgk_FSA)*</small>

---

## 🔁 Βήμα 5 — Προβλήματα και αναθεώρηση κυκλώματος

Εδώ ήρθε η πρώτη μεγάλη "έκπληξη". Ο αισθητήρας τάσης που χρησιμοποιούσαμε λειτουργούσε με **διαιρέτη τάσης** με τρόπο που δεν συμβάδιζε με τον αρχικό σχεδιασμό μας. Αναγκαστήκαμε να ξεκινήσουμε σχεδόν από την αρχή — νέο σχέδιο κυκλώματος, νέα συνδεσμολογία.

Το δύσκολο μέρος: έπρεπε να γίνει, και μάλιστα γρήγορα.
Το ωραίο μέρος: μάθαμε πολύ περισσότερα απ' ό,τι αν είχε δουλέψει με την πρώτη.

---

## 🤔 Βήμα 6 — Τελική επιλογή εξοπλισμού

Μετά τα προβλήματα του αισθητήρα, κάναμε μια σημαντική απόφαση:

> Αρχικά σκεφτόμασταν να χρησιμοποιήσουμε **Raspberry Pi** ή **ESP32** για τη συλλογή των δεδομένων. Τελικά επιλέξαμε **Arduino**, γιατί οι αισθητήρες μας χρειάζονταν τροφοδοσία **5V** — και το Arduino παρέχει ακριβώς αυτό, μαζί με τις αναλογικές εισόδους που χρειαζόμασταν.

Μικρή αλλαγή; Ναι. Αλλά σημαντική για τη λειτουργία του συστήματος.

📎 **Χρήσιμα links:**
- [Arduino — επίσημη σελίδα](https://www.arduino.cc)
- [Arduino IDE — Download](https://www.arduino.cc/en/software/)
- [Arduino Documentation](https://docs.arduino.cc)

---

## 🔌 Βήμα 7 — Υλοποίηση του νέου κυκλώματος

Υλοποιήσαμε το βελτιωμένο κύκλωμα στο **breadboard** συνδέοντας τρεις αντιστάσεις σε σειρά και διαβάζοντας τις αντίστοιχες αναλογικές εισόδους μέσω Arduino.

Για πρώτη φορά, οι μετρήσεις έδιναν λογικές τιμές. 🎉

---

## 📦 Βήμα 8 — Εγκατάσταση MoodleBox

Εγκαταστήσαμε την πλατφόρμα **MoodleBox** σε **Raspberry Pi 500** ώστε να έχουμε ένα τοπικό ασύρματο δίκτυο εκπαιδευτικής πλατφόρμας — χωρίς καθόλου ίντερνετ.

**Τι είναι το MoodleBox;** Είναι μια ανοιχτή εκπαιδευτική πλατφόρμα βασισμένη στο Moodle, που τρέχει πάνω σε Raspberry Pi και δημιουργεί δικό της Wi-Fi δίκτυο. Οι μαθητές συνδέονται με τις συσκευές τους και έχουν πρόσβαση σε υλικό, ασκήσεις και δεδομένα — εντελώς τοπικά, χωρίς σύνδεση στο διαδίκτυο.

📎 **Χρήσιμα links:**
- [MoodleBox — επίσημη σελίδα](https://moodlebox.net)
- [MoodleBox — Οδηγός εγκατάστασης 1](https://www.youtube.com/watch?v=OwwHUkaW1L4)
-  [MoodleBox — Οδηγός εγκατάστασης 2](https://www.youtube.com/watch?v=xLTH_6V3Shg)
- [MoodleBox — FAQ](https://moodlebox.net/en/faq/)
- [Raspberry Pi 500 — επίσημη σελίδα](https://www.raspberrypi.com/products/)

---

## 🔴 Βήμα 9 — Εγκατάσταση Node-RED σε Raspberry Pi Zero 2W

Εγκαταστήσαμε το **Node-RED** σε **Raspberry Pi Zero 2W**. Το Node-RED είναι ένα οπτικό περιβάλλον προγραμματισμού ροών (flow-based programming) που μας επιτρέπει να "κατευθύνουμε" τα δεδομένα από το Arduino προς το MoodleBox χωρίς να γράφουμε δεκάδες γραμμές κώδικα.

Φαίνεται σαν να συνδέεις κουτάκια με βέλη. Και είναι τόσο ωραίο όσο ακούγεται.

📎 **Χρήσιμα links:**
- [Node-RED — επίσημη σελίδα](https://nodered.org)
- [Node-RED — Getting Started](https://nodered.org/docs/getting-started/)
- [Node-RED — Εγκατάσταση σε Raspberry Pi](https://nodered.org/docs/getting-started/raspberrypi)
- [Node-RED — Library (flows & nodes)](https://flows.nodered.org)
- [Raspberry Pi Zero 2W — επίσημη σελίδα](https://www.raspberrypi.com/products/raspberry-pi-zero-2-w/)

---

## 💻 Βήμα 10 — Ανάπτυξη κώδικα Arduino

Αναπτύξαμε τον κώδικα για το Arduino ώστε να:
1. διαβάζει τις τιμές από τους αισθητήρες τάσης και ρεύματος,
2. τις επεξεργάζεται,
3. τις αποστέλλει μέσω **σειριακής θύρας (Serial)** στο Node-RED.

```cpp

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
```

📎 **Χρήσιμα links:**
- [Arduino Serial Communication](https://docs.arduino.cc/learn/communication/uart/)
- [Arduino analogRead() — Reference](https://www.arduino.cc/reference/en/language/functions/analog-io/analogread/)

---

## 🔗 Βήμα 11 — Διασύνδεση Node-RED με Arduino

Αναπτύξαμε τη βασική ροή στο Node-RED που:
- **διαβάζει** τα δεδομένα που έρχονται από το Arduino μέσω σειριακής θύρας,
- τα **αποθηκεύει** τοπικά σε αρχείο,
- και τα **προετοιμάζει** για αποστολή στο MoodleBox.

---

## 📡 Βήμα 12 — Ασύρματη διασύνδεση Node-RED με MoodleBox

Συνδέσαμε ασύρματα το Node-RED (Raspberry Pi Zero 2W) με το MoodleBox (Raspberry Pi 500), ολοκληρώνοντας τον βασικό κύκλο μεταφοράς δεδομένων:

<a href="https://github.com/hlektrologostech/Watt-Fi-Academy-2026/blob/main/code/NodeRedFlow.json" target="_blank">αρχείο με όλο τον κώδικα</a> 
[![system](https://img.youtube.com/vi/W-wXeqJ5V8U/maxresdefault.jpg)](https://www.youtube.com/watch?v=W-wXeqJ5V8U)  
<small>*click image to [open video](https://www.youtube.com/watch?v=W-wXeqJ5V8U)*</small>

---

## ✅ Βήμα 13 — Δοκιμές και αποτίμηση

Κάναμε επαναλαμβανόμενες μετρήσεις χρησιμοποιώντας το σύστημα που υλοποιήσαμε. Τα αποτελέσματα ήταν εντυπωσιακά τόσο ως προς τον **ενθουσιασμό των μαθητών** όσο και ως προς την **ταχύτητα καταχώρησης** των πειραματικών δεδομένων.

Καταγράψαμε επίσης τα βασικά προβλήματα που δεν μπορέσαμε να ξεπεράσουμε — με πρωταρχικό την ευαισθησία του αισθητήρα ρεύματος, που δεν ήταν ικανοποιητική για τα ρεύματα των κυκλωμάτων μας. Με αντιστάσεις μεγαλύτερης ισχύος (1W ή 2W) τα αποτελέσματα θα ήταν σίγουρα καλύτερα.

[![Έξυπνο εργαστήριο ηλεκτρολογίας με Arduino, Raspberry Pi & MoodleBox | ElectroHercules](https://img.youtube.com/vi/IQyAFFKZETg/maxresdefault.jpg)](https://www.youtube.com/watch?v=IQyAFFKZETg)  
<small>*click image to [open video](https://www.youtube.com/watch?v=IQyAFFKZETg)*</small>


---

## ⚠️ Τι δεν ολοκληρώθηκε πλήρως

Η ειλικρίνεια είναι μέρος της επιστημονικής μεθόδου. Ορίστε τι παραμένει σε εξέλιξη:

**1. Δεύτερη πλακέτα — παράλληλη συνδεσμολογία**

Η δεύτερη πλακέτα, που αφορά συνδεσμολογία αντιστάσεων **παράλληλα** με τέσσερα αμπερόμετρα και ένα βολτόμετρο, έχει ήδη **κατασκευαστεί υλικά**. Ο εξοπλισμός είναι έτοιμος και στήριξη έχει γίνει. Αυτό που παραμένει είναι η ανάπτυξη του αντίστοιχου **κώδικα** (Arduino + Node-RED) που θα την υποστηρίζει πλήρως.

**2. Αυτοματοποιημένη μεταφορά αρχείου στο MoodleBox**

Η μεταφορά των αρχείων μετρήσεων στο MoodleBox είναι **διαθέσιμη και λειτουργεί**, αλλά όχι ακόμα πλήρως αυτοματοποιημένη. Αυτή τη στιγμή υποστηρίζεται με δύο τρόπους:
- **Χειροκίνητα (manual)** — άμεση μεταφορά από τον χρήστη
- **Μέσω USB stick** — γρήγορη και απλή μεταφορά με ελάχιστες κινήσεις

Ο επόμενος στόχος είναι η πλήρης αυτόματη αποστολή χωρίς καμία χειροκίνητη παρέμβαση.

---

## 📊 Τελική αποτίμηση

Οι μαθητές ενθουσιάστηκαν με την υλοποίηση του project σε πολλαπλά επίπεδα: κατασκευή κουτιών για τα εξαρτήματα, στήριξη πλακέτας, υλοποίηση κυκλωμάτων σε πρωτότυπη διάτρητη πλακέτα.

Αντιλήφθηκαν στην πράξη τη δυσκολία του να μετατρέψεις τη θεωρία σε υλοποίηση, και κατάλαβαν πολύ καλά ότι **άλλο είναι το χαρτί κι άλλο είναι η υλοποίηση** — και σχεδόν ποτέ δεν μπορεί να ολοκληρωθεί ένα project απευθείας χωρίς να περάσει τα κατάλληλα στάδια ανάπτυξης.

Τα προβλήματα που αντιμετωπίσαμε πρόσθεσαν σημαντική γνώση και εμπειρία — τόσο στο διδασκόμενο αντικείμενο όσο και στην επίλυση τεχνικών προβλημάτων.

---

## 🔮 Επόμενα βήματα

- [ ] Ολοκλήρωση κώδικα για τη δεύτερη πλακέτα (παράλληλη συνδεσμολογία, 4 αμπερόμετρα + 1 βολτόμετρο)
- [ ] Πλήρης αυτοματοποίηση μεταφοράς αρχείων στο MoodleBox μέσω δικτύου
- [ ] Βελτίωση ευαισθησίας αισθητήρα ρεύματος (αντιστάσεις 1W–2W)
- [ ] Επέκταση σε περισσότερα κυκλώματα και τύπους μετρήσεων

---

## 🔗 Όλα τα χρήσιμα links μαζεμένα

### Εξοπλισμός

| Εξοπλισμός | Link |
|---|---|


### Λογισμικό

| Λογισμικό | Link |
|---|---|


### Διαγωνισμός

| | Link |
|---|---|
| 8ος Διαγωνισμός OpenEdTech — ΕΛΛΑΚ | https://openedtech.ellak.gr/8th-openedtech/ |

### 3D Εκτύπωση

| | Link |
|---|---|


---

## 🙏 Ευχαριστίες

Ευχαριστούμε τον **ΕΛΛΑΚ** και την οργανωτική επιτροπή του διαγωνισμού για την ευκαιρία που μας έδωσαν να φτιάξουμε κάτι πραγματικό, να αντιμετωπίσουμε πραγματικά προβλήματα και να μάθουμε πραγματικά πράγματα.

Και φυσικά ευχαριστούμε τον καθηγητή μας που μας άφησε να κάνουμε λάθη — γιατί από εκεί μάθαμε τα περισσότερα. 😄

---

*Εσπερινό ΕΠΑΛ Αλιάρτου — Β' & Γ' Ηλεκτρολόγου — 2026*


## Περιγραφή project
Το project αφορά στη δημιουργία ενός συστήματος αυτόματης καταγραφής και ψηφιακής αρχειοθέτησης πειραματικών μετρήσεων ηλεκτρικών κυκλωμάτων, με χρήση αποκλειστικά ανοιχτού λογισμικού και ανοιχτού υλικού (open hardware).

Στο πλαίσιο των εργαστηριακών ασκήσεων Ηλεκτρολογίας, οι μαθητές μέτρησαν τιμές τάσης και ρεύματος σε κυκλώματα που υλοποίησαν οι ίδιοι. Αντί για καταγραφή σε χαρτί, τα δεδομένα συλλέγονταν αυτόματα μέσω Arduino, αποστέλλονταν στο Node-RED (εγκατεστημένο σε Raspberry Pi Zero 2W) και από εκεί στην εκπαιδευτική πλατφόρμα MoodleBox (εγκατεστημένη σε Raspberry Pi 500), χωρίς σύνδεση στο διαδίκτυο — μια πλήρως αυτόνομη και φορητή εκπαιδευτική υποδομή.

Τεχνολογίες και εξοπλισμός
Όλες οι τεχνολογίες που χρησιμοποιήθηκαν είναι ανοιχτές και ελεύθερες:

1. Arduino — συλλογή αναλογικών μετρήσεων από αισθητήρες τάσης και ρεύματος
3. Node-RED — ροή επεξεργασίας και αποστολής δεδομένων
5. MoodleBox — εκπαιδευτική πλατφόρμα τοπικού δικτύου
7. Raspberry Pi Zero 2W & Raspberry Pi 500 — διακομιστές εκτέλεσης
9. 3D εκτύπωση — κατασκευή θηκών προστασίας εξοπλισμού
11. Αισθητήρες τάσης και ρεύματος — στερεωμένοι σε ξύλινες βάσεις για ευκολότερη συνδεσμολογία


Πρωτότυπη πλακέτα (breadboard & PCB) — για την υλοποίηση του κυκλώματος μετρήσεων

### Εκπαιδευτική αξία
Η υλοποίηση του project σε πολλαπλά επίπεδα — σχεδιασμός, κατασκευή, προγραμματισμός, δοκιμή, αποσφαλμάτωση — ενεργοποίησε τους μαθητές ουσιαστικά και τους έβαλε απευθείας σε επαφή με τις πραγματικές συνθήκες τεχνολογικής ανάπτυξης. Μέσα από την ανάγκη να τροποποιήσουν τον αρχικό σχεδιασμό κατά τη διάρκεια υλοποίησης, οι μαθητές βίωσαν τη διαφορά ανάμεσα στη θεωρία και την πράξη, αναπτύσσοντας δεξιότητες επίλυσης προβλημάτων, κριτικής σκέψης και ομαδικής εργασίας.

### Στάδια υλοποίησης
* Σχεδιασμός κυκλώματος βάσει datasheet εξαρτημάτων
<<<<<<< HEAD
* Κατασκευή θηκών με 3D εκτυπωτή για Arduino και Raspberry Pi 

=======
* Κατασκευή θηκών με 3D εκτυπωτή για Arduino και Raspberry 
* Στερέωση αισθητήρων σε ξύλινες επιφάνειες[![InstallAndSolder](https://img.youtube.com/vi/cSmqkgk_FSA/maxresdefault.jpg)](https://www.youtube.com/watch?v=cSmqkgk_FSA)  
<small>*click image to [open video](https://www.youtube.com/watch?v=cSmqkgk_FSA)*</small>

* Υλοποίηση πρωτότυπης πλακέτας μετρήσεων
* Αντιμετώπιση προβλημάτων και αναθεώρηση
* Ανάπτυξη κώδικα Arduino για σειριακή επικοινωνία
* Εγκατάσταση και διαμόρφωση Node-RED και MoodleBox[![system](https://img.youtube.com/vi/W-wXeqJ5V8U/maxresdefault.jpg)](https://www.youtube.com/watch?v=W-wXeqJ5V8U)  
<small>*click image to [open video](https://www.youtube.com/watch?v=W-wXeqJ5V8U)*</small>

* Ασύρματη διασύνδεση των συστημάτων
* Επαναλαμβανόμενες δοκιμές και αποτίμηση αποτελεσμάτων

---

**Τι δεν ολοκληρώθηκε** — και γιατί αξίζει να αναφερθεί
Η ειλικρίνεια είναι μέρος της επιστημονικής μεθόδου. Δεν προλάβαμε να υλοποιήσουμε τη δεύτερη πλακέτα που αφορούσε συνδεσμολογία αντιστάσεων παράλληλα, με τέσσερα αμπερόμετρα και ένα βολτόμετρο. Επίσης, η αυτόματη μεταφόρτωση του αρχείου μετρήσεων απευθείας στο MoodleBox δεν ολοκληρώθηκε με πλήρη επιτυχία. Αυτά αποτελούν τα επόμενα βήματα για τη συνέχεια του project.

### Αποτίμηση
Το project ολοκληρώθηκε σε ικανοποιητικό επίπεδο και επιβεβαίωσε ότι ανοιχτές τεχνολογίες χαμηλού κόστους μπορούν να ενσωματωθούν αποτελεσματικά στο σχολικό εργαστήριο, μετατρέποντας την κλασική εργαστηριακή άσκηση σε μια ολοκληρωμένη εμπειρία STEM με πραγματικά δεδομένα και πραγματική τεχνολογία.
[![Έξυπνο εργαστήριο ηλεκτρολογίας με Arduino, Raspberry Pi & MoodleBox | ElectroHercules](https://img.youtube.com/vi/IQyAFFKZETg/maxresdefault.jpg)](https://www.youtube.com/watch?v=IQyAFFKZETg)  
<small>*click image to [open video](https://www.youtube.com/watch?v=IQyAFFKZETg)*</small>

  [1]: data:image/jpeg;base64,/9j/4AAQSkZJRgABAQAAAQABAAD/4gHYSUNDX1BST0ZJTEUAAQEAAAHIAAAAAAQwAABtbnRyUkdCIFhZWiAH4AABAAEAAAAAAABhY3NwAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQAA9tYAAQAAAADTLQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAlkZXNjAAAA8AAAACRyWFlaAAABFAAAABRnWFlaAAABKAAAABRiWFlaAAABPAAAABR3dHB0AAABUAAAABRyVFJDAAABZAAAAChnVFJDAAABZAAAAChiVFJDAAABZAAAAChjcHJ0AAABjAAAADxtbHVjAAAAAAAAAAEAAAAMZW5VUwAAAAgAAAAcAHMAUgBHAEJYWVogAAAAAAAAb6IAADj1AAADkFhZWiAAAAAAAABimQAAt4UAABjaWFlaIAAAAAAAACSgAAAPhAAAts9YWVogAAAAAAAA9tYAAQAAAADTLXBhcmEAAAAAAAQAAAACZmYAAPKnAAANWQAAE9AAAApbAAAAAAAAAABtbHVjAAAAAAAAAAEAAAAMZW5VUwAAACAAAAAcAEcAbwBvAGcAbABlACAASQBuAGMALgAgADIAMAAxADb/2wBDAAYEBQYFBAYGBQYHBwYIChAKCgkJChQODwwQFxQYGBcUFhYaHSUfGhsjHBYWICwgIyYnKSopGR8tMC0oMCUoKSj/2wBDAQcHBwoIChMKChMoGhYaKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCj/wAARCAIpA74DASIAAhEBAxEB/8QAFQABAQAAAAAAAAAAAAAAAAAAAAj/xAAUEAEAAAAAAAAAAAAAAAAAAAAA/8QAFAEBAAAAAAAAAAAAAAAAAAAAAP/EABQRAQAAAAAAAAAAAAAAAAAAAAD/2gAMAwEAAhEDEQA/AJUAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB//9k=
