#include "CodeMorse.hpp"   ///Importation des fichiers
#include "Clignotement.hpp"

CodeMorse cm;           ///abréviation pour pouvoir faire référence au classe lors d'appel de fonction
Clignotement cl;

void setup() {   ///Téléversement du code pour le clignotement sur la Arduino

  Serial.begin(9600);      ///activation du moniteur et de la led interne de la carte Arduino
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

if (Serial.available()){                /// Appel des fonctions pour la traduction et le clignotement de la phrase ajoutée dans le moniteur
      cm.lettremot = Serial.readString();
      cm.textversmorse();
      cl.clignotementmillis(cm.morsemot);       ///fonction avec millis
      //cl.clignotementdelay(cm.morsemot);      ///fonction avec delay
}
}
