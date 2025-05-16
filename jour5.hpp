#include <string>

class Joueur {
private:
    int x;
    int y;
    std::string nom;

public:
    Joueur(int posX = 0, int posY = 0);
    Joueur(std::string nom, int posX, int posY);

    int getX() const;
    int getY() const;
    std::string getNom() const;

    void setX(int x);
    void setY (int y );
    void setNom( const std::string& nom);

    void afficherPosition() const;
    void deplacer(int dx, int dy);
};



