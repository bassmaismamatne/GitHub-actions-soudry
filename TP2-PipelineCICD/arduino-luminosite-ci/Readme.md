# Projet LED Solaire Arduino – CI/CD

## Description

Programme Arduino qui lit un **capteur de luminosité** et ajuste la luminosité d'une **LED solaire** :

- Forte luminosité → LED éteinte  
- Faible luminosité → LED s’allume proportionnellement  

Ce projet intègre une **pipeline CI/CD** avec GitHub Actions pour :  

- Installer les dépendances  
- Compiler le sketch principal et les tests unitaires  
- Démarrer le projet en simulation  
- Exécuter des tests automatiques  

---

## Langage et outils

- **Langage :** Arduino / C++  
- **Carte cible :** Arduino Uno  
- **Pipeline CI/CD :** GitHub Actions + Arduino CLI  
- **Tests unitaires :** AUnit  

---

## Étapes de la pipeline CI

1. **Récupération du dépôt**  
   GitHub Actions clone automatiquement le projet.

2. **Installation d’Arduino CLI**  
   Télécharge et configure Arduino CLI pour compiler les sketches.

3. **Installation du core Arduino (avr)**  
   Nécessaire pour compiler pour Arduino Uno.

4. **Installation des librairies**  
   Permet de gérer toutes les dépendances Arduino (ex : capteurs, AUnit pour tests).

5. **Compilation du sketch principal**  
   Vérifie que `luminosite.ino` n’a pas d’erreurs.

6. **Compilation des tests unitaires**  
   Compile `test_luminosite.ino` pour vérifier la logique du programme.

7. **Démarrage simulé du projet**  
   Avec `arduino-cli monitor` pour simuler l’exécution sans carte physique.

8. **Test automatique (curl)**  
   Simule un serveur HTTP local et vérifie la communication.

9. **Vérification finale**  
   Affiche un message de succès si toutes les étapes passent.

---

## Exécution manuelle

### 1️⃣ Brancher la carte Arduino

Connecter l’Arduino Uno à votre ordinateur (optionnel si vous utilisez la simulation).

### 2️⃣ Installer Arduino CLI et les librairies

```bash
# Installer Arduino CLI
curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh

# Initialiser Arduino CLI
arduino-cli core update-index
arduino-cli core install arduino:avr

# Installer AUnit pour tests
arduino-cli lib install "AUnit"
