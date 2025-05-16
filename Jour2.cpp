#include <iostream>
#include <cmath>

int job2() {
    int n;
    std::cin >> n;
    switch(n)
    {
        case 0 : std::cout << "Nul";
        case 1 : 
        case 2 : std :: cout << "Petit";
        break ;
        case 3 :
        case 4 :
        case 5 : std::cout << "Moyen";
        default : std ::cout << "Grand"; 
    }
}


int job3() {
    int i,n, som;
    som =0 ;
    i = 0 ;
    
    do { std::cout << "Donnez un entier";
        std::cin >> n ;
        som += n ;
        i++;
    }
    while (i < 4);
    std::cout << "La somme est :" << som;
}



int job5() {
    int a ;
    std::cout << "Entrez une valeur";
    std::cin >> a ;

    if (a < 10) {
        std::cout << "Non validé" << std::endl;
    } 
    if (a > 10) {
        std::cout << "Validé" << std::endl;
    }

}


int job6() {
    int n, i ;
    i = 0; 

    do { std::cout << "Donnez  un entier:";
        std::cin >> n ;
        i++;
        if (i % 3) {
            std::cout << i << "Est un multiple de 3"<< std::endl;
        }
        if (i % 5) {
            std::cout << i << "Est un multiple de 5"<< std::endl;
        }
    }
    while ( i < n );

}


int job7() {
    int a , b;
    std::cout << "Donnez 2 entier pour définir les bornes";
    std::cin >> a;
    std::cin >> b;

    for (a < b) {
        a ++;
        std::cout << a << std::endl;
    }
}

int job8() {
    int a , b;
    std::cout << "Donnez 2 entier pour définir les bornes";
    std::cin >> a;
    std::cin >> b;

    do { a ++;
        std::cout << a;
    }
    while (a < b);
}

int job9() {
    int a, b, n;
    a = 10;
    b = 30;
    std::cout<< "Entrez un entier";
    std::cin>> n;

    if ( a <= n <= b) {
        std::cout<< "Félicitation vous avez gagné"<<std::endl;
    }
    else {
        std::cout<<"Perdu"<<std::endl;
    }
}


int job10() {
    int n, result ;
    std::cout << "Entrez un entier:";
    std::cin >> n;

    if (n < 0) {
        std::cout<< "Entrez un nombre positif"<<std::endl;
    }
    else {
        result = sqrt(n);
        std::cout<<"La racine carré de"<<n<<"est :"<< result << std::endl;
    }
}

int job11() {
    int n, i, result ;
    i = 1 ;
    result = 1;
    std::cout << "Entrez un entier:";
    std::cin >> n;

    do { i++; result *= i;
        std::cout<<result<<std::endl;
    }
    while (i <= n );
}


int main() {
    return job6();
}
