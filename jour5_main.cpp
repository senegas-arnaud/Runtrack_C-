#include <iostream>
#include "jour5.hpp"

int main() {
    Joueur joueur(0,0);

    joueur.afficherPosition();

    joueur.deplacer(5,0);
    joueur.afficherPosition();

    joueur.deplacer(0,3);
    joueur.afficherPosition();

    Joueur j2(10, 5);                   
    Joueur j3("Arnaud", 3, 7);  

    j2.afficherPosition();
    j3.afficherPosition();
    j3.setNom("Luc");
    j3.setY(30);
    std::cout << j3.getNom() << " est positionné en :" << j3.getX() <<","<<j3.getY()<<std::endl;

    return 0;

}