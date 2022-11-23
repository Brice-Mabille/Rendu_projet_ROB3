#include "Clignotement.hpp"

Clignotement::Clignotement(){};


void Clignotement::LEDHIGH() {   ///Fonction permettant d'allumer la led avec Arduino
  int millisactuel = millis();
  digitalWrite(LED_BUILTIN, HIGH);
}

void Clignotement::LEDLOW() {   ///Fonction permettant d'éteindre la led avec Arduino
  digitalWrite(LED_BUILTIN, LOW);
}

void Clignotement::tempsattente(char y){
  if (y=='.'){
    int tempsattent = 1000;
  }else if (y=='-'){
    int tempsattent = 2000;
  }
}

void Clignotement::clignotementmillis(String x) {   ///Fonction permettant de communiquer un tiret ou un point selon le mot demandé avec Arduino
  for (int i = 0; i < x.length();) {
    if (x.charAt(i) == '.') {
      tempsattente(x.charAt(i));
      LEDHIGH();
      if ((millis()-millisactuel)>tempsattent){
        LEDLOW();
        int etatactuel = LOW;
        millisactuel = millis();
      }
      if (etatactuel == LOW && (millis()-millisactuel)>500){
        i++;
      }
    }
  }
}

void Clignotement::tiret() {   ///Fonction permettant de communiquer un tiret avec Arduino
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void Clignotement::point() {   ///Fonction permettant de communiquer un point avec Arduino
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void Clignotement::clignotementdelay(String x) {   ///Fonction permettant de communiquer un tiret ou un point selon le mot demandé avec Arduino
  for (int i = 0; i < x.length(); i++) {
    if (x.charAt(i) == '.') {
      point();
    }else if (x.charAt(i) == '-'){
      tiret();
    }
  }
}