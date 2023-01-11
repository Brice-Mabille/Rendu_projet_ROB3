#ifndef CODEMORSE_H
#define CODEMORSE_H

#include "Arduino.h"

class CodeMorse{   /// Definition de ma classe CodeMorse

  private:
    char text = 0;
    

  public:
    CodeMorse();
    String morsemot;            ///mot en morse
    String lettremot;           ///mot avec lettres
    String morse;
    void textversmorse();       ///fonction de traduction 
};

#endif

