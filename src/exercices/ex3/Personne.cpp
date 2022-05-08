#include "exercices/ex3/Personne.hpp"

const void TP::EX3::Personne::initialiser(const std::string &nom, const long unsigned &numero, const TP::EX3::Sexe &sexe) noexcept {
	this->a_nom = nom;
	this->a_numero = numero;
	this->a_sexe = sexe;
}

const void TP::EX3::Personne::afficher() const {
	std::cout << "Nom : " << this->a_nom << std::endl;
	std::cout << "Numero : " << this->a_numero << std::endl;
	std::cout << "Sexe : " << this->a_sexe << std::endl;
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
