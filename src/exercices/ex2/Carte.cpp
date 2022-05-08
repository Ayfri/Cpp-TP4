#include "exercices/ex2/Carte.hpp"

#include <utility>

static std::string show_color(const TP::EX2::Couleur &color) {
	switch (color) {
		case TP::EX2::Couleur::PIQUE:
			return "Pique";
		case TP::EX2::Couleur::COEUR:
			return "Coeur";
		case TP::EX2::Couleur::TREFLE:
			return "Trèfle";
		case TP::EX2::Couleur::CARREAU:
			return "Carreau";
		
		default:
			return "";
	}
}

unsigned &TP::EX2::Carte::GetNbCreation() noexcept {
	return TP::EX2::Carte::NbCreation;
}

TP::EX2::Carte::Carte(TP::EX2::Couleur const &couleur, std::string valeur) noexcept: a_couleur(couleur), a_valeur(std::move(valeur)) {
	std::cout << "Création d'une carte." << '\n';
	TP::EX2::Carte::NbCreation++;
}

TP::EX2::Carte::Carte(TP::EX2::Carte &carte) noexcept: a_couleur(carte.a_couleur), a_valeur(carte.a_valeur) {
	std::cout << "Création d'une carte." << '\n';
	TP::EX2::Carte::NbCreation++;
}

TP::EX2::Carte::~Carte() {
	std::cout << "Destruction d'une carte." << '\n';
	TP::EX2::Carte::NbCreation--;
}

bool TP::EX2::Carte::operator==(TP::EX2::Carte const &carte) const noexcept {
	return (this->a_couleur == carte.a_couleur && this->a_valeur == carte.a_valeur);
}

bool TP::EX2::Carte::operator!=(TP::EX2::Carte const &carte) const noexcept {
	return (this->a_couleur != carte.a_couleur || this->a_valeur != carte.a_valeur);
}

void TP::EX2::Carte::setType(TP::EX2::Couleur const &couleur) noexcept {
	this->a_couleur = couleur;
}

void TP::EX2::Carte::setValeur(std::string const &valeur) noexcept {
	this->a_valeur = valeur;
}

std::ostream &TP::EX2::operator<<(std::ostream &os, const TP::EX2::Carte &carte) {
	os << "Couleur : " << show_color(carte.a_couleur) << ", Valeur : " << carte.a_valeur;
	return os;
}
