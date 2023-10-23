#include "pokemon.h"
#include <iostream>

Attaque::Attaque(const std::string& _nom, const std::string& _description, int _degats)
    : nom(_nom), description(_description), degats(_degats) {}

Pokemon::Pokemon(const std::string& _nom, int _vie, const std::string& _type)
    : nom(_nom), vie(_vie), type(_type) {}

void Pokemon::ajouterAttaque(const Attaque& attaque) {
    attaques.push_back(attaque);
}

void Pokemon::afficherInfo() const {
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Vie : " << vie << std::endl;
    std::cout << "Type : " << type << std::endl;
    std::cout << "Attaques : " << std::endl;
    for (const Attaque& attaque : attaques) {
        std::cout << "- " << attaque.nom << " (" << attaque.description << ", degats : " << attaque.degats << ")" << std::endl;
    }
    std::cout << std::endl;
}
