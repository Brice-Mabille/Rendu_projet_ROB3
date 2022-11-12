
#include "CodeMorse.cpp"



void tiret(){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(10);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    
}
 
void point(){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(2000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    
}

void clignotement(std::string x){
    if (x=="."){
        point();
    
    }else if (x=="-"){
        tiret();
    }
}

void setup(){

    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){

    clignotement(morse[counter]);

}