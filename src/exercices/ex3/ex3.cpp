#include "exercices/ex3/ex3.hpp"
#include "exercices/ex3/Personne.hpp"

void TP::EX3::ex3() {
	auto personne = TP::EX3::Personne();
	constexpr auto nom = "toto";
	personne.initialiser(nom, 6'78'98'76'54ULL, TP::EX3::Sexe::MASCULIN);
	personne.afficher();
}