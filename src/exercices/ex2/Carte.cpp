#include "exercices/ex2/Carte.hpp"

unsigned &TP::EX2::Carte::GetNbCreation() noexcept {
	return TP::EX2::Carte::NbCreation;
}

TP::EX2::Carte::Carte(TP::EX2::Couleur const &couleur, std::string const &valeur) noexcept {
	this->a_couleur = couleur;
	this->a_valeur = valeur;
	TP::EX2::Carte::NbCreation++;
}

TP::EX2::Carte::Carte(TP::EX2::Carte &carte) noexcept {
	this->a_couleur = carte.a_couleur;
	this->a_valeur = carte.a_valeur;
	TP::EX2::Carte::NbCreation++;
}

TP::EX2::Carte::~Carte() {
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
/*

std::ostream &TP::EX2::operator<<(std::ostream &os, const TP::EX2::Carte &carte) {
	os << static_cast<int>(carte.a_couleur) << " " << carte.a_valeur;
	return os;
}
*/
