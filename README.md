# smart_city
**Έργο του 2ου ΕΝ.Ε.Ε.ΓΥ.-Λ. για τον διαγωνισμό**

Το όνομα της ομάδας μας είναι Special Team Educated in Modeling (S.T.E.M.)@eneegyl και εκπροσωπούμε το 2ο ΕΝ.Ε.Ε.ΓΥ.-Λ. Ανατολικής Θεσσαλονίκης. Το έργο μας ονομάζεται «Smart City» και φιλοδοξεί στην προσομοίωση μιας σύγχρονης πόλης, μέσω της δημιουργίας μακέτας. Μια πόλη, η οποία παρέχει προτάσεις βιωσιμότητας, πράσινης ενέργειας, με σαφή προσανατολισμό στην οικολογία και τον πολιτισμό.

Συγκεκριμένα η μακέτα απαρτίζεται από τα παρακάτω στοιχεία:

**1. Θερμοκήπιο με αυτόματο πότισμα, αισθητήρα στάθμης νερού σε δεξαμενή, αισθητήρα υγρασίας-θερμοκρασίας**
  
Αρχικά κατασκευάστηκε μινιατούρα θερμοκηπίου. Στο πρώτο στάδιο υλοποιήθηκε κύκλωμα αυτόματου ποτίσματος. Συγκεκριμένα, μέσα στο θερμοκήπιο υπάρχει φυτό σε χώμα και μέσα στο χώμα τοποθετήθηκε αισθητήρας υγρασίας εδάφους. Ο αισθητήρας βαθμονομήθηκε κατάλληλα και μέσω ενός Arduino Uno, όταν το έδαφος είναι ξηρό, ενεργοποιείται αντλία νερού τοποθετημένη σε δεξαμενή, ώστε να ποτίζεται, μέσω σωλήνα, το χώμα.
Στα τείχη της παραπάνω δεξαμενής νερού τοποθετήθηκε αισθητήρας στάθμης νερού, επίσης κατάλληλα βαθμονομημένος και συνδεμένος με Arduino Uno. Όταν η στάθμη του νερού είναι πολύ χαμηλή ανάβει LED και χτυπάει buzzer, για να ενημερώσουν για τον κίνδυνο.
Επιπλέον, μέσα στο θερμοκήπιο υπάρχει αισθητήρας υγρασίας-θερμοκρασίας, συνδεμένος και πάλι σε Arduino Uno. Οι τιμές της υγρασίας και της θερμοκρασίας του θερμοκηπίου φαίνονται σε οθόνη LCD, συνδεμένη και αυτή στο Arduino.


**2. Σχολείο με ανιχνευτή φωτιάς, φανάρια με μπάρα προστασίας και ηλεκτροδότηση με φωτοβολταϊκό πάνελ**
   
Στην μακέτα τοποθετήθηκε κτίριο σχολείου. Πάνω στο κτίριο αρχικά εγκαταστάθηκε αισθητήρας φωτιάς συνδεμένος με Arduino Uno. Όταν εντοπίζεται φωτιά ανάβει LED και ταυτόχρονα χτυπάει buzzer για να ενημερώσουν για τον κίνδυνο. Στη συνέχεια, στην σκεπή του κτιρίου τοποθετήθηκε φωτοβολταικό πάνελ, το οποίο φορτίζει καθόλη τη διάρκεια της ημέρας μια επαναφορτιζόμενη μπαταρία και είναι συνδεμένο με σειρά από LED. Μέσω του φωτοβολταικού συστήματος είναι δυνατή η ηλεκτροδότηση του κτιρίου ανά πάσα στιγμή.
Το κομμάτι του σχολείου ολοκληρώθηκε με την τοποθέτηση φαναριών και μπάρας διέλευσης πεζών με σερβοκινητήρα έξω από αυτό. Συγκεκριμένα, τα φανάρια-LED και ο σερβοκινητήρας συνθέθηκαν με Arduino Uno και τοποθετήθηκε μπουτόν για τον έλεγχό τους. Αρχικά ανάβει μόνο το πράσινο LED, ενώ με την πίεση του μπουτόν κατεβαίνει η μπάρα και ανάβουν σε προκαθορισμένο χρόνο το κίτρινο και κόκκινο φανάρι.

**3. Μουσείο κλασικών συνθετών και ηλεκτροδότηση με ανεμογεννήτρια**
   
Ένα ακόμα κτίριο της μακέτας είναι το μουσείο κλασικών συνθετών. Η σκεπή του κτιρίου είναι αποσπώμενη και μέσα σε αυτό τοποθετήθηκαν πάνελ με αντιπροσωπευτικές εικόνες γνωστών κλασικών συνθετών και πληροφορίες για το έργο τους. Το μουσείο παρέχει την δυνατότητα ηχητικού οδηγού. Με την πίεση κατάλληλων κουμπιών αναπαράγονται μουσικά αποσπάσματα από έργα των συνθετών, καθώς και ηχητικές πληροφορίες για τη βιογραφία τους. Για το σκοπό αυτό χρησιμοποιήθηκε, εκτός διαγωνιστικού μέρους, πλακέτα touch board Arduino της Bare Conductive, που παρέχει τη δυνατότητα αναπαραγωγής ήχων, πιέζοντας σε αγώγιμα σημεία, συνδεμένα σε κατάλληλη είσοδο της πλακέτας. Στην εξωτερική επιφάνεια του κτιρίου επικολλήθηκε QR code, το σκανάρισμά του οποίου οδηγεί στην ιστοσελίδα του μουσείου, κατασκευασμένη από την ομάδα μας.
Η ηλεκτροδότηση του μουσείου έγινε με χρήση ανεμογεννήτριας. Συγκεκριμένα, σε κινητήρα των 12V τοποθετήθηκαν πτερύγια, που προσομοιώνουν αυτά της ανεμογεννήτριας, η περιστροφή των οποίων οδηγεί σε φωταγώγηση της περιοχής με σειρά από LED.

**4. Πάρκο**
   
Τέλος, στην μακέτα κατασκευάστηκε πάρκο πολιτιστικού ενδιαφέροντος, όπου με τη βοήθεια της πλακέτας touch board Arduino της Bare Conductive, η πίεση κατάλληλων κουμπιών οδηγεί στην αναπαραγωγή ηχογραφημένων πληροφοριών για την Έξυπνη Πόλη, σε ήχους περιβάλλοντος και χαλαρωτική μουσική. Η φωταγώγηση του πάρκου γίνεται μέσω φωτοβολταϊκού πάνελ με αισθητήρα φωτός, το οποίο φορτίζει κατά τη διάρκεια της ημέρας μια επαναφορτιζόμενη μπαταρία και ανάβει σειρά από LED μόνο κατά τη διάρκεια της νύχτας.

Ακολουθούν σύνδεσμοι με τα videos που συνοδεύουν το έργο μας:
<br>[Ξενάγηση στην Έξυπνη Πόλη](https://youtu.be/e4sk_O5HffA)
<br>[Παρουσίαση του project](https://youtu.be/ALhfqT-JCKI)
<br>[Προγραμματισμός](https://youtu.be/kaSLtZpC0Kk)


**Εκπαιδευτικοί στόχοι του έργου**

Στόχοι του έργου ήταν οι μαθητές:

-Να συνειδητοποιήσουν καίρια ζητήματα που απασχολούν την σύγχρονη πραγματικότητα και να προτείνουν λύσεις βασισμένες στην τεχνολογία

-Να ερευνήσουν και να ανακαλύψουν τρόπους ενίσχυσης της βιωσιμότητας της πόλης, εξασφαλίζοντας ένα θετικό οικολογικό – πολιτιστικό αποτύπωμα

-Να ενισχύσουν τις ψηφιακές τους δεξιότητες, μέσω πειραματικής άσκησης, εξερευνώντας τις δυνατότητες που παρέχονται

-Να εξασκηθούν στη χρήση λογισμικών

-Να ενισχύσουν τις ικανότητες τεχνικής σχεδίασης και της εφαρμογής της, για τη δημιουργία κατασκευών

-Να αποκτήσουν θετικές στάσεις ως προς τις νέες τεχνολογίες 

-Να κινητοποιήσουν τη δημιουργική-συνθετική σκέψη τους, καθώς και την κριτική τους ικανότητα

-Να αναπτύξουν συνεργατική μάθηση (ομαδοσυνεργατική μάθηση)

-Να αποκτήσουν πολιτιστική συνείδηση και έκφραση, δημιουργώντας μουσικό μουσείο


**Απαραίτητα Υλικά**

Water Level Sensor for Arduino

Soil Hygrometer / Moisture Detection Module (for Arduino)

5v Relay Module for Arduino

Mini Water Pump Submersible

Σωληνάκι Διάφανο 1m για Mini Water Pump

DHT11 Module (Digital Humidity & Temperature Sensor)

LCD 16x2 with IIC/I2C/TWI SPI


5V Active Buzzer

Servo Micro Motor 9G SG90

Pushbutton Switch

LED Traffic Light Display Module 5V

Flame Detection Sensor (for Arduino)

LED  5mm



Board UNO R3 ATmega328P DIP for Arduino IDE

Mini BreadBoard

Hobby Motor 12V DC 6900rpm

Έλικας Ανεμογεννήτριας 21 εκ

Λαμπάκια Ηλιακά LED με Αισθητήρα Φωτός

Dupont Jumper Cables

Terminal Blocks

Αντιστάσεις

Δίοδος

Διάφορα Αλώσιμα για Μακέτα

Κόστος: 158,50 €


Εκτός διαγωνιστικού μέρους: Πλακέτα Touch Board Bare Conductive
