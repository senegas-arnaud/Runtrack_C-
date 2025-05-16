#include "jour5.hpp"
#include <iostream>

Joueur::Joueur(int posX, int posY) : x(posX), y(posY) {
    this ->x = posX;
    this ->y = posY;
}

Joueur::Joueur(std::string nom, int posX, int posY) : x(posX), y(posY), nom(nom) {
    this ->x = posX;
    this ->y = posY;
    this ->nom = nom;
}

int Joueur::getX() const {
    return this->x;
}

int Joueur::getY() const {
    return this->y;
}

std::string Joueur::getNom() const {
    return this->nom;
}

void Joueur::setX(int x) {
    this->x = x;
}

void Joueur::setY(int y) {
    this->y = y;
}

void Joueur::setNom(const std::string& nom) {
    this->nom = nom;
}

void Joueur::afficherPosition() const {
    std::cout << "Position du joueur "<< this->nom <<" : (" << this->x << "," << this->y << ")" << std::endl;
}

void Joueur::deplacer(int dx, int dy) {
    this->x += dx;
    this->y += dy;
}
