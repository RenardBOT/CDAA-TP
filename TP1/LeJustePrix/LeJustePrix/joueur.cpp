#include "joueur.h"
#include <iostream>

Joueur::Joueur(QObject *parent) : QObject(parent){

}

void Joueur::joue(){
    std::cout << "entre un nombre stp frr" << std::endl;
    unsigned int userInput;
    std::cin >> userInput;
    emit propose(userInput);
}

void Joueur::gagne(){
    this->running = false;
    emit sortie();
}
