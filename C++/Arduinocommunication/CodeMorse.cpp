#include "CodeMorse.hpp"

CodeMorse::CodeMorse(){};       ///Constructeur

void CodeMorse::textversmorse(){  ///fonction permettant de demander un mot et retournant la traduction en Morse
    char text[83] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','1','2','3','4','5','6','7','8','9','0','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',' '};                        ///chaque lettre ou chiffre a sa propre traduction en Morse qu'on définit en tant que liste de caractère et string
    String morse[83] = {".-/","-.../","-.-./","-../","./","..-/","--./","..../","../",".---/","-.-/",".-../","--/","-./","---/",".--./","--.-/",".-./",".../","-/","..-/","...-/",".--/","-..-/","-.--/","--../",".----/","..---/","...--/","....-/","...../","-..../","--.../","---../","----./","-----/",".-/","-.../","-.-./","-../","./","..-/","--./","..../","../",".---/","-.-/",".-../","--/","-./","---/",".--./","--.-/",".-./",".../","-/","..-/","...-/",".--/","-..-/","-.--/","--../","/"};
    
    Serial.println("Ecris le mot que tu veux traduire:\n");         ///On demande à l'utilisateur d'écrire un mot ou phrase à traduire
    Serial.println(lettremot);
    
    Serial.println("La traduction est:\n");
    
 
    for (int i = 0; i < lettremot.length(); ++i){       ///On traduit lettre par lettre le mot ou phrase demandée
        for (int j = 0; j < 83; j++){
            if (lettremot.charAt(i) == text[j]){
              Serial.print(morse[j]);             ///On retourne la traduction de chaque lettre une par une dans le moniteur
              morsemot = morsemot + morse[j];
            }
        }
    }
  
}
