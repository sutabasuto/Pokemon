
#define POKEMON_H

#include <string>
#include <vector>

struct Attaque {
    std::string nom;
    std::string description;
    int degats;
    Attaque(const std::string& _nom, const std::string& _description, int _degats);
};

struct Pokemon {
    std::string nom;
    int vie;
    std::string type;
    std::vector<Attaque> attaques;
    Pokemon(const std::string& _nom, int _vie, const std::string& _type);
    void ajouterAttaque(const Attaque& attaque);
    void afficherInfo() const;
};
