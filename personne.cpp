#include "etudiant.hpp"
#include <iostream>

void Personne::afficherInfos() const {
    std::cout << "Nom : " << nom <<"Point de vie : "<< vie << "Défense : "<<def<<std::endl; 
}

void Personne::setNom (const std::string& nouveauNom){
    this->nom = nouveauNom;
}

void Personne::setVie (int vie) {
    this->vie = nouveauPv;
}

void Personne::setDefense (float def) {
    this->def = nouveauDef;
}