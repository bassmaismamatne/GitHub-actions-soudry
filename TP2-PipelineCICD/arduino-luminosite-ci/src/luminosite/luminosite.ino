int capteur_luminosite = A2;
int LED_solaire = 9;

void setup() {
  Serial.begin(9600);                       // ouverture du moniteur série
  pinMode(capteur_luminosite, INPUT);       // port d'entrée capteur de luminosité
  pinMode(LED_solaire, OUTPUT);             // port de sortie LED solaire
}

void loop() {
  int lecture = analogRead(capteur_luminosite);          // lecture du capteur
  lecture = map(lecture, 0, 1002, 0, 255);             // transformation en 0-255

  if (lecture > 230) {
    digitalWrite(LED_solaire, LOW);
  } else {
    analogWrite(LED_solaire, 255 - lecture);
  }
  Serial.println(lecture);
}
