# Projet LED Solaire Arduino CI

## Description
Programme Arduino qui lit un **capteur de luminosité** et ajuste la luminosité d'une **LED solaire** :

- Forte luminosité → LED éteinte
- Faible luminosité → LED s’allume proportionnellement

---

## Langage et outils
- **Langage :** Arduino / C++
- **Carte cible :** Arduino Uno
- **Pipeline CI :** GitHub Actions + Arduino CLI

---

## Étapes de la pipeline CI

1. **Récupération du dépôt**  
   GitHub Actions clone le projet automatiquement.

2. **Installation d’Arduino CLI**  
   Télécharge et configure l’Arduino CLI pour compiler les sketches.

3. **Installation du core Arduino (avr)**  
   Nécessaire pour compiler pour Arduino Uno.

4. **Installation des librairies**  
   Permet de gérer toutes les dépendances Arduino (ex: capteurs, écrans…).

5. **Compilation du sketch**  
   Compile `luminosite.ino` pour vérifier qu’il n’y a pas d’erreurs.

6. **Vérification du succès**  
   Affiche un message si la compilation est correcte.

---

## Exécution manuelle

### 1. Brancher la carte Arduino
Connecter l’Arduino Uno à votre ordinateur.

### 2. Ouvrir le sketch dans Arduino IDE
`src/luminosite.ino`

### 3. Sélectionner la carte et le port
- Carte : Arduino Uno  
- Port : celui où est branchée la carte

### 4. Téléverser le sketch
Cliquer sur **Téléverser**

### 5. Observer la LED
La LED réagit à la luminosité détectée par le capteur.

---

## Exemple de sortie CI
