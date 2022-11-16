#include "CodeMorse.hpp"

CodeMorse::CodeMorse(){};

void CodeMorse::textversmorse(){  ///fonction permettant de demander un mot et retournant la traduction en Morse
    char text[36] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    String morse[36] = {".-","-...","-.-.","-..",".","..-","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    
    Serial.println("Ecris le mot que tu veux traduire:\n");
    Serial.println(mot);
    
      Serial.println("La traduction est:\n");
 
      for (int i = 0; i < mot.length(); ++i){
          for (int j = 0; j < 36; j++){
              if (mot.charAt(i) == text[j]){
                  Serial.print(morse[j]);
              }
          }
      }
  
}
