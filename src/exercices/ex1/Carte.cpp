#include <iostream>
#include "exercices/ex1/Carte.hpp"

TP::EX1::Carte::Carte(TP::EX1::Couleur const &couleur, std::string const &valeur) {
	this->a_type = couleur;
	this->a_valeur = valeur;
}

TP::EX1::Carte::Carte(TP::EX1::Carte const &carte) {
	this->a_type = carte.a_type;
	this->a_valeur = carte.a_valeur;
}

void TP::EX1::Carte::setType(TP::EX1::Couleur const &couleur) {
	this->a_type = couleur;
}

void TP::EX1::Carte::setValeur(std::string const &valeur) {
	this->a_valeur = valeur;
}

void TP::EX1::Carte::afficher() const {
	std::cout << "Couleur: " << this->a_type << " " << this->a_valeur << '\n';
}

bool TP::EX1::Carte::equals(TP::EX1::Carte const &carte) const {
	return (this->a_type == carte.a_type && this->a_valeur == carte.a_valeur);
}

void TP::EX1::Carte::affecter(TP::EX1::Carte const &carte) {
	this->a_type = carte.a_type;
	this->a_valeur = carte.a_valeur;
}

TP::EX1::Carte::~Carte() {
	std::cout << "Destruction de la carte " << this->a_type << " " << this->a_valeur << '\n';
}
