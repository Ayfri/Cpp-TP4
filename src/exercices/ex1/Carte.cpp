#include <iostream>
#include <utility>
#include "exercices/ex1/Carte.hpp"

static std::string show_color(const TP::EX1::Couleur &color) {
	switch (color) {
		case TP::EX1::Couleur::PIQUE:
			return "Pique";
		case TP::EX1::Couleur::COEUR:
			return "Coeur";
		case TP::EX1::Couleur::TREFLE:
			return "Trèfle";
		case TP::EX1::Couleur::CARREAU:
			return "Carreau";
		
		default:
			return "";
	}
}

TP::EX1::Carte::Carte(TP::EX1::Couleur const &couleur, std::string valeur) noexcept: a_couleur(couleur), a_valeur(std::move(valeur)) {
	std::cout << "Création d'une carte." << '\n';
}

void TP::EX1::Carte::setType(TP::EX1::Couleur const &couleur) noexcept {
	this->a_couleur = couleur;
}

void TP::EX1::Carte::setValeur(std::string const &valeur) noexcept {
	this->a_valeur = valeur;
}

void TP::EX1::Carte::afficher() const {
	std::cout << "Couleur : " << show_color(this->a_couleur) << ", Valeur : " << this->a_valeur << '\n';
}

bool TP::EX1::Carte::equals(TP::EX1::Carte const &carte) const noexcept {
	return (this->a_couleur == carte.a_couleur && this->a_valeur == carte.a_valeur);
}

void TP::EX1::Carte::affecter(TP::EX1::Carte const &carte) noexcept {
	this->a_couleur = carte.a_couleur;
	this->a_valeur = carte.a_valeur;
}

TP::EX1::Carte::~Carte() {
	std::cout << "Destruction d'une carte." << '\n';
}
