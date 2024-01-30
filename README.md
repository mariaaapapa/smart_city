# smart_city
Έργο του 2ου ΕΝ.Ε.Ε.ΓΥ.-Λ. για τον διαγωνισμό

Το όνομα της ομάδας μας είναι Special Team Educated in Modeling (S.T.E.M.)@eneegyl και εκπροσωπούμε το 2ο ΕΝ.Ε.Ε.ΓΥ.-Λ. Ανατολικής Θεσσαλονίκης. Το έργο μας ονομάζεται «Smart City» και φιλοδοξεί στην προσομοίωση μιας σύγχρονης πόλης, μέσω της δημιουργίας μακέτας. Μια πόλη, η οποία θα παρέχει προτάσεις βιωσιμότητας, πράσινης ενέργειας, με σαφή προσανατολισμό στην οικολογία και τον πολιτισμό.

Συγκεκριμένα η μακέτα θα απαρτίζεται από τα παρακάτω στοιχεία:

1. Θερμοκήπιο με αυτόματο πότισμα, αισθητήρα στάθμης νερού σε δεξαμενή, αισθητήρα υγρασίας-θερμοκρασίας και ηλεκτροδότηση με ανεμογεννήτρια.

Σκοπός είναι αρχικά να κατασκευαστεί μινιατούρα θερμοκηπίου. Στο πρώτο στάδιο θα φτιαχτεί αυτόματο πότισμα. Συγκεκριμένα, μέσα στο θερμοκήπιο θα υπάρχουν φυτά σε χώμα και μέσα στο χώμα θα τοποθετηθεί αισθητήρας υγρασίας εδάφους. Ο αισθητήρας θα βαθμονομηθεί κατάλληλα και μέσω ενός Arduino, όταν το έδαφος είναι ξηρό, θα ενεργοποιείται αντλία νερού τοποθετημένη σε δεξαμενή με νερό, ώστε να ποτίζεται, μέσω σωλήνα, το χώμα.
Στα τείχη της παραπάνω δεξαμενής νερού θα υπάρχει αισθητήρας στάθμης νερού, επίσης κατάλληλα βαθμονομημένος και συνδεμένος με το Arduino. Όταν είτε η στάθμη του νερού είναι πολύ χαμηλή είτε υπάρχει κίνδυνος υπερχείλισης, θα ανάβουν τα κατάλληλα LED και θα χτυπάει buzzer, για να ενημερώσουν για τον κίνδυνο.
Επιπλέον, μέσα στο θερμοκήπιο θα υπάρχει αισθητήρας υγρασίας-θερμοκρασίας, συνδεμένος και πάλι στο Arduino. Οι τιμές της υγρασίας και της θερμοκρασίας του θερμοκήπιο θα φαίνονται με οθόνη LCD, συνδεμένη και αυτή στο Arduino.
Τέλος, η ηλεκτροδότηση του θερμοκηπίου θα γίνεται με χρήση ανεμογεννήτριας. Συγκεκριμένα, σε έναν κινητηράκι των 12V θα τοποθετηθούν πτερύγια που προσομοιώνουν αυτά της ανεμογεννήτριας και θα συνδεθούν LED, τα οποία θα ανάβουν με την περιστροφή των πτερυγίων.

3. Σχολείο με ανιχνευτή φωτιάς, φανάρια με μπάρα προστασίας και ηλεκτροδότηση με φωτοβολταϊκό πάνελ.
   
Στην μακέτα θα τοποθετηθεί μικρό κτίριο σχολείου. Πάνω στο κτίριο θα τοποθετηθεί αρχικά αισθητήρας φωτιάς συνδεμένος με Arduino. Όταν θα εντοπίζεται φωτιά θα αναβοσβήνει LED και ταυτόχρονα θα χτυπάει buzzer για να ενημερώσουν για τον κίνδυνο.  Στη συνέχεια, στην σκεπή του κτιρίου θα τοποθετηθεί φωτοβολταικό πάνελ, το οποίο θα φορτίζει καθόλη τη διάρκεια της ημέρας μια επαναφορτιζόμενη μπαταρία και θα είναι συνδεμένο με LEDs. Μέσω του φωτοβολταικού συστήματος θα είναι δυνατή η ηλεκτροδότηση του κτιρίου ανά πάσα στιγμή.
Το κομμάτι του σχολείου θα ολοκληρωθεί με την τοποθέτηση φαναριών έξω από αυτό. Συγκεκριμένα, τα φανάρια-LED θα συνδεθούν με το Arduino, θα ανάβουν αρχικά σε προκαθορισμένους χρόνους και με τη βοήθεια ενός σερβοκινητήρα, όταν το φανάρι είναι κόκκινο, θα κατεβαίνει μία μπάρα, που θα εμποδίζει τη διέλευση αυτοκινήτων από τον δρόμο. Με την πίεση, όμως, ενός μπουτόν, θα παρακάμπτεται η προγραμματισμένη λειτουργία των φαναριών, θα ανάβει για προκαθορισμένο χρόνο το κόκκινο φανάρι, με ταυτόχρονο κατέβασμα της μπάρας, ώστε να διευκολυνθεί η διέλευση πεζών.

4. Μουσείο κλασικών συνθετών
   
Ένα ακόμα κτίριο της μακέτας θα είναι το μουσείο κλασικών συνθετών. Η σκεπή του κτιρίου θα είναι αποσπώμενη και μέσα σε αυτό θα τοποθετηθούν αντιπροσωπευτικές εικόνες γνωστών κλασικών συνθετών. Στην εξωτερική επιφάνεια του κτιρίου θα επικολληθεί barcode που το σκανάρισμα του θα οδηγεί σε ιστοσελίδα, η οποία θα φτιαχτεί από την ομάδα μας. Η ιστοσελίδα μας θα παρέχει πληροφορίες για τους συνθέτες, καθώς και ηχητικά αποσπάσματα έργων που τους εκπροσωπεύουν.

5. Ηλεκτροδότηση μακέτας
   
Περιμετρικά της μακέτας θα τοποθετηθούν LED, που θα προσομοιώνουν τον νυχτερινό φωτισμό της πόλης. Η φωταγώγηση της πόλης θα γίνεται μέσω φωτοβολταϊκού πάνελ, το οποίο θα φορτίζει κατά τη διάρκεια της ημέρας επαναφορτιζόμενη μπαταρία. Καθώς όμως, η φωταγώγηση θα γίνεται κατά τη διάρκεια της νύχτας, το φωτοβολταϊκο πάνελ θα είναι συνδεμένο με αισθητήρα φωτός. Έτσι, κατά τη διάρκεια της ημέρας το φωτοβολταϊκό θα φορτιζει την μπαταρία και τα LED  θα είναι σβηστά, ενώ κατά τη διάρκεια της νύχτας, τα LED θα αναβουν, κάνοντας χρήση της ενέργειας της φορτισμένης μπαταρίας.



Απαραίτητα Υλικά:

1xWater Level Sensor for Arduino

1x Soil Hygrometer / Moisture Detection Module (for Arduino)

1x 5v Relay Module for Arduino

1x Mini Water Pump Submersible

1x Σωληνάκι Διάφανο 1m για Mini Water Pump

1x DHT11 Module (Digital Humidity & Temperature Sensor)

1x LCD 16x2 with IIC/I2C/TWI SPI

1x 5V Active Buzzer

1x Servo Micro Motor 9G SG90

1x Pushbutton Switch

1x LED Traffic Light Display Module 5V

1x Flame Detection Sensor (for Arduino)

5x LED  5mm

2x Board UNO R3 ATmega328P DIP for Arduino IDE

2x USB cable Type A to B

4x BreadBoard

1x Hobby Motor 12V DC 6900rpm

1x Έλικας Ανεμογεννήτριας 21 εκ

2x Λαμπάκια Ηλιακά LED με Αισθητήρα Φωτός

Dupont Jumper Cable 10cm M-M

Dupont Jumper Cable 30cm M-M

Dupont Jumper Cable 20cm M-F

Μονόκλωνο Καλώδιο 4μέτρα

Terminal Block 2p 2.54mm

Αντιστάσεις

Δίοδος

Διάφορα Αλώσιμα για Μακέτα

Εκτιμώμενο κόστος: 125€
