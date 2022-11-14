#include "Lettreclass.h"

using namespace std;


void textversmorse(){  ///fonction permettant de demander un mot et retournant la traduction en Morse
    char text[36] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    std::string morse[36] = {".-","-...","-.-.","-..",".","..-","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    std::string mot;
    int input;
    
    std::cout << "Ecris le mot que tu veux traduire:\n";   ///Pour Arduino,on peut remplacer le cout par Serial.println()
    std::getline(std::cin,mot);
    
    cout << "La traduction est:\n";
 
    for (int i = 0; i < mot.length(); ++i){
        for (int conteur = 0; conteur < 36; conteur++){
            if (mot.at(i) == text[conteur]){
                cout << morse[conteur];
            }
        }
    }
}

int main(){
    
    textversmorse();
    
}