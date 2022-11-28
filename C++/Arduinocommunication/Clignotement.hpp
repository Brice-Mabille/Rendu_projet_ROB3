#ifndef CLIGNOTEMENT_H
#define CLIGNOTEMENT_H

#include "Arduino.h"

class Clignotement   /// Definition de ma classe Clignotement
{

private:
    String morse;
    int millisactuel;

public:
    Clignotement(String x);
    Clignotement();
    void clignotementmillis(String x);
    void point();
    void tiret();
    void clignotementdelay(String x);
};

#endif