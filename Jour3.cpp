#include <iostream>
#include <string>
#include <cctype>

int job1() {
    std::string texte = "vive la plateforme !";

    for (char &c : texte) {
        c = std::toupper(static_cast<unsigned char>(c));
    }

    std::cout << texte << std::endl;

    return 0;
}


bool estVoyelle(char c) {
    c = std::tolower(static_cast<unsigned char>(c));
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}
int job2() {
    std::string texte = "vive la plateforme !";
    std::string resultat = "";

    for (char c : texte){
        if (!estVoyelle(c)) {
            resultat += c;
        }
    }
    std::cout << resultat << std::endl;

    return 0;
}

int job3() {
    std::string chaine1, chaine2;

    std::cout << "Entrez votre 1er chaine de caractères :";
    std::getline(std::cin, chaine1);

    std::cout << "Entrez votre 2eme chaine de caractères :";
    std::getline(std::cin, chaine2);

    if (chaine1 == chaine2){
        return 0;
    }
    else {
        return 1;
    }
}

int job4() {
    std::string texte = "Vive la plateforme !";
    int taille = texte.length();  

    std::cout << "La taille est " << taille << std::endl;

    return 0;
}


int job6() {
    const int entier = 10;
    int T[entier];
    int compteur = 0;

    std::cout << "Entrez 10 entiers :" << std::endl;
    for (int i =0 ; i < entier; i++) {
        std::cout << "Entier" << i+1 << ":";
        std::cin >> T[i];

        if (T[i] >= 5) {
            compteur ++;
        }
    }
    std::cout << "Nombre d'entiers supérieur à 5 :" << compteur << std::endl;

    return 0;
}


int job7() {
    const int entier = 10;
    int T[entier];
    int max;
    max = T[0];

    std::cout << "Entrez 10 entiers :" << std::endl;
    for (int i =0 ; i < entier; i++) {
        std::cout << "Entier" << i+1 << ":";
        std::cin >> T[i];
    }


    for ( int i = 1; i < entier ; i++) {
        if (T[i++] > max) {
            max = T[i];  
        }
    
    std::cout<< "L'entier le plus grand du tableau est : "<< max << std::endl;
    return 0;
        
    }
}    

int job8() {
    const int taille = 100;
    char tab[taille];
    
    std::string chaine;

    std::cout << "Entrez une chaine de caractères :";
    std::cin.getline(tab, taille);
    
    int i = 0;
    while (tab[i] != '\0') {
        std::cout << "tab["<<i<<"] =" << tab[i] << std::endl;
        i++;
    }
    std::cout << "tab[" << i << "] = '\\0' (fin de chaîne)" << std::endl;

    return 0;

}


int main() {
    return job8();
}