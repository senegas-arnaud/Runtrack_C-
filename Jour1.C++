#include <iostream>


int string() {
    std::cout << "Hello World" << std::endl;
    return 0;
}

int strings() {
    int N;

    std::cout << "Entrez un nombre entier (N) : ";
    std::cin >> N;

    while (N != 0) {
        std::cout << "Hello World" << std::endl;
        N--;  
    }

    return 0;
}


int somme() {
    double a, b, somme;

    std::cout << "Entrez le premier nombre : ";
    std::cin >> a;

    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> b;

    somme = a + b;

    std::cout << "La somme de " << a << " et " << b << " est : " << somme << std::endl;

    return 0;
}

int multi() {
    double a, b, produit;

    std::cout << "Entrez le premier nombre : ";
    std::cin >> a;

    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> b;

    produit = a * b;

    std::cout << "Le produit de " << a << " et " << b << " est : " << produit << std::endl;

    return 0;
}


int table() {
    int nombre;

    std::cout << "Entrez un entier pour afficher sa table de multiplication : ";
    std::cin >> nombre;

    std::cout << "Table de multiplication de " << nombre << " :" << std::endl;

    for (int i = 1; i <= 10; ++i) {
        std::cout << nombre << " x " << i << " = " << (nombre * i) << std::endl;
    }

    return 0;
}



int pair_impair() {
    int nombre;

    std::cout << "Entrez un entier : ";
    std::cin >> nombre;

    if (nombre % 2 == 0) {
        std::cout << nombre << " est un nombre pair." << std::endl;
    } else {
        std::cout << nombre << " est un nombre impair." << std::endl;
    }

    return 0;
}

int bissextile() {
    int annee;

    std::cout << "Entrez une année : ";
    std::cin >> annee;

    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        std::cout << annee << " est une année bissextile." << std::endl;
    } else {
        std::cout << annee << " n'est pas une année bissextile." << std::endl;
    }

    return 0;
}


int grand(){
    int a , b , c;

    std::cout << "Entrez le 1er nombre : ";
    std::cin >> a;

    std::cout << "Entrez le 2eme nombre : ";
    std::cin >> b;
    
    std::cout << "Entrez le 3eme nombre : ";
    std::cin >> c;

    if (a > b && a > c ) {
        std::cout << a << "Est le plus grand nombre." << std::endl; 
    } 
    if (b > a && b > c ) {
        std::cout << b << "Est le plus grand nombre." << std::endl; 
    } 
    if (c > a && c > b ) {
        std::cout << c << "Est le plus grand nombre." << std::endl; 
    }

}


int tva() {
    int prix_ht;

    std::cout << "Entrez le prix hors taxes :";
    std::cin >> prix_ht;
    
    int prix_ttc = prix_ht - (prix_ht * 15 / 100);

    std::cout << "Le prix TTC du produit est : " << prix_ttc << std::endl;
    
    return 0;

}


int echange_valeur() {
    int n, m;

    std::cout << "Valeur initiale de n : ";
    std::cin >> n;

    std::cout << "Valeur initiale de m : ";
    std::cin >> m;

    int* ptrN = &n;
    int* ptrM = &m;

    std::cout << "Avant l'échange :" << std::endl;
    std::cout << "n = " << n << ", m = " << m << std::endl;

    int temp = *ptrN;
    *ptrN = *ptrM;
    *ptrM = temp;

    std::cout << "Après l'échange :" << std::endl;
    std::cout << "n = " << n << ", m = " << m << std::endl;

    return 0;
}

int moyenne() {
    int nombre, somme;

    for (int i = 1; i <= 5 ; ++i ) {
        std::cout << "Entrez un nombre" << i << ":";
        std::cin >> nombre;
        somme += nombre;
    }

    int moyenne = somme / 5 ;
    std::cout<< "La moyenne des 5 nombres est :"<< moyenne << std::endl;

    return 0;
}

int main() {
    return moyenne();
}
