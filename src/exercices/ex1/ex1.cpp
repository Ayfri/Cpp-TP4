#include "exercices/ex1/Carte.hpp"
#include "exercices/ex1/ex1.hpp"

void TP::EX1::ex1() {
	std::cout << "Jeu de cartes." << '\n';
	const TP::EX1::Carte c1(TP::EX1::Couleur::PIQUE, "As");
	c1.afficher();
	
	auto c2(c1);
	c2.afficher();
	c2.setType(TP::EX1::Couleur::TREFLE);
	c2.setValeur("Queen");
	c2.afficher();
	
	TP::EX1::Carte c3(TP::EX1::Couleur::PIQUE, "2");
	c2.affecter(c3);
	c2.afficher();
	c3.afficher();
	
	if (c1.equals(c2)) {
		std::cout << "Les cartes sont égales." << '\n';
	} else {
		std::cout << "Problème : Les cartes ne sont pas égales" << '\n';
		c1.afficher();
		c2.afficher();
	}
}
