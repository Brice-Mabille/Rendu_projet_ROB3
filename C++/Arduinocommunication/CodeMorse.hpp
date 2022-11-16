#include "Arduino.h"


#ifndef CODEMORSE_H
#define CODEMORSE_H

class CodeMorse{   /// Definition de ma classe Lettre

  private:
    char text = 0;
    

  public:
    CodeMorse();
    String morse;
    void traduction(char text);
    void textversmorse();
};

#endif


#ifndef CLIGNOTEMENT_H
#define CLIGNOTEMENT_H

class Clignotement   /// Definition de ma classe Clignotement
{

private:
    String morse;

public:
    Clignotement(String x);
    Clignotement();
    void point();
    void tiret();
    void clignotement(String x);
};

#endif

