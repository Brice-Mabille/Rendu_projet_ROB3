#ifndef CLIGNOTEMENT_H
#define CLIGNOTEMENT_H

#include "Arduino.h"

class Clignotement   /// Definition de ma classe Clignotement
{

private:
    int millisactuel;

public:
    Clignotement(String x);
    Clignotement();
    void point();                           ///Fonction de clignotement d'un point  
    void tiret();                           ///Fonction de clignotement d'un tiret  
    void espace();                          ///Fonction de clignotement d'un espace  
    void clignotementmillis(String x);        ///// Traitement de pause entre un point et un tiret d'abord avec millis puis avec delay
    void clignotementdelay(String x);
};

#endif