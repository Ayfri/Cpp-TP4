#include "exercices/ex3/Personne.hpp"

void TP::EX3::Personne::initialiser(const std::string &nom, const long unsigned &numero, const TP::EX3::Sexe &sexe) noexcept {
	this->a_nom = nom;
	this->a_numero = numero;
	this->a_sexe = sexe;
}

void TP::EX3::Personne::afficher() const {
	std::cout << "Affichage d'une personne :" << '\n';
	std::cout << "\tNom : " << this->a_nom << '\n';
	std::cout << "\tNumero : " << this->a_numero << '\n';
	std::cout << "\tSexe : " << this->a_sexe << '\n';
}

const std::string &TP::EX3::Personne::getNom() const noexcept {
	return this->a_nom;
}

const long unsigned &TP::EX3::Personne::getNumero() const noexcept {
	return this->a_numero;
}

const TP::EX3::Sexe &TP::EX3::Personne::getSexe() const noexcept {
	return this->a_sexe;
}

TP::EX3::Personne::~Personne() {
	std::cout << "Destruction d'une instance de la classe Personne." << '\n';
}

TP::EX3::Personne::Personne() {
	std::cout << "Construction d'une instance de la classe Personne." << '\n';
}

std::ostream &TP::EX3::operator<<(std::ostream &os, const TP::EX3::Sexe &sexe) {
	switch (sexe) {
		case TP::EX3::Sexe::MASCULIN:
			os << "Homme";
			break;
		case TP::EX3::Sexe::FEMININ:
			os << "Femme";
			break;
		case TP::EX3::Sexe::INCONNU:
			os << "Inconnu";
			break;
	}
	return os;
}
