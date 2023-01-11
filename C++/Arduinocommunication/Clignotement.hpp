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
    void point();                             
    void tiret();
    void espace();
    void clignotementmillis(String x);        ///// Traitement de pause entre un point et un tiret
    void clignotementdelay(String x);
};

#endif