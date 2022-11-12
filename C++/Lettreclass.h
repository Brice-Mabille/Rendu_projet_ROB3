#ifndef STRING_H
#define STRING_H
#include <string>
#endif

#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif

#ifndef LETTRE_H
#define LETTRE_H

class Lettre
{

private:
    char text = 0;
    std::string morse;

public:
    Lettre(char text);
    Lettre();
    void traduction(char text);
    void textversmorse();
};

#endif