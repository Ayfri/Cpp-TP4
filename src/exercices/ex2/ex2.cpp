#include "exercices/ex2/ex2.hpp"

void TP::EX2::ex2() {
	std::cout << "Jeu de cartes." << '\n';
	TP::EX2::Carte c1(TP::EX2::Couleur::PIQUE, "As");
	std::cout << c1 << '\n';
	
	TP::EX2::Carte c2(c1);
	std::cout << c2 << '\n';
	
	c2.setType(TP::EX2::Couleur::COEUR);
	c2.setValeur("Queen");
	std::cout << c2 << '\n';
	
	if (c1 != c2) {
		std::cout << "Les cartes sont égales." << '\n';
	} else {
		std::cout << "Problème : Les cartes ne sont pas égales." << '\n';
	}
	std::cout << "Affichage de GetNbCreation() : " << TP::EX2::Carte::GetNbCreation() << '\n';
}