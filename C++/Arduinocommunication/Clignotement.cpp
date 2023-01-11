#include "Clignotement.hpp"

Clignotement::Clignotement(){};   ///Constructeur


void Clignotement::tiret() {   ///Fonction permettant de communiquer un tiret avec Arduino avec DELAY
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1500);                              ///1,5 secondes pour un tiret
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);                              ///pause de 1 seconde pour la lettre suivante
}

void Clignotement::point() {   ///Fonction permettant de communiquer un point avec Arduino avec DELAY
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);                               ///0,5 secondes pour un point
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);                              ///pause de 1 seconde pour la lettre suivante
}

void Clignotement::espace() {   ///Fonction permettant de communiquer un point avec Arduino avec DELAY                               ///0,5 secondes pour un point
  digitalWrite(LED_BUILTIN, LOW);
  delay(3000);                              ///pause de 1 seconde pour la lettre suivante
}

void Clignotement::clignotementdelay(String x) {   ///Fonction permettant de communiquer un tiret ou un point selon le mot demandé avec Arduino avec DELAY
  for (int i = 0; i < x.length(); i++) {
    if (x.charAt(i) == '.') {                      ///Selon un point, un tiret ou un espace, on appelle la fonction correspondante
      point();
    }else if (x.charAt(i) == '-'){
      tiret();
    }else if (x.charAt(i) == '/'){
      espace();
    }
  }
}

void Clignotement::clignotementmillis(String x) {   ///Fonction permettant de communiquer un tiret ou un point selon le mot demandé avec Arduino avec MILLIS
  for (int i = 0; i < x.length();i++) {
    if (x.charAt(i)=='.'){
      millisactuel = millis();                       ///On démarre le chronomètre
      while ((millis()- millisactuel) < 500){       ///si le temps actuel moins le départ est inférieur à 0,5 seconde, on allume la led jusqu'à 1,5 secondes pour un point
        digitalWrite(LED_BUILTIN, HIGH);
      }
      while ((millis()-millisactuel) < 1500){
        digitalWrite(LED_BUILTIN, LOW);
      }
    }
    else if (x.charAt(i)=='-'){
      millisactuel = millis();                        //////si le temps actuel moins le départ est inférieur à 2 secondes, on allume la led jusqu'à 3 secondes pour un tiret
      while ((millis()- millisactuel) < 2000){
        digitalWrite(LED_BUILTIN, HIGH);
      }
      while ((millis()-millisactuel) < 3000){
        digitalWrite(LED_BUILTIN, LOW);
      }
    }
    else if (x.charAt(i)=='/'){
      millisactuel = millis();                        //////si le temps actuel moins le départ est inférieur à 5 secondes, on maintient le led éteinte pour marquer l'espace
      while ((millis()-millisactuel) < 3500){
        digitalWrite(LED_BUILTIN, LOW);
      }
    }
  }
}