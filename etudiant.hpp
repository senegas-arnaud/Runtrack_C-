#include <string>



class Etudiant {
    private : 
        std::string nom;
        std::string prenom;
        int age;
        int matricule;

    public :
    Etudiant(const std::string& nom, const std::string&prenom, int age, int matricule);

};

class Personne {
    private : 
        std::string nom;
        int vie;
        float def;

    public:
    Personne(const std::string& nom, int vie, float def): nom(nom), vie(vie), def(def){}

    void afficherInfos() const;
    void setNom(const std::string& nouveauNom);
    void setVie(int nouveauPV);
    void setDefense(float nouveauDef);
};