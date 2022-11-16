#ifndef STRING_H  ///importation des bibliothèques  
#define STRING_H
#include <String>
#endif

#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif

#ifndef LETTRE_H
#define LETTRE_H

class Lettre   /// Definition de ma classe Lettre
{

private:
    char text = 0;
    String morse;

public:
    Lettre(char text);
    Lettre();
    void traduction(char text);
    void textversmorse();
};

#endif


#ifndef CLIGNOTEMENT_H
#define CLIGNOTEMENT_H

class Clignotement   /// Definition de ma classe Clignotement
{

private:
    String x = 0;
    String morse;

public:
    Clignotement(String x);
    Clignotement();
    void point();
    void tiret();
    void clignotement(String x);
};

#endif

