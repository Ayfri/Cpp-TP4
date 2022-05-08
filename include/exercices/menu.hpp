#pragma once

#include <conio.h>
#include <iostream>
#include "exercices/ex1/ex1.hpp"
#include "exercices/ex2/ex2.hpp"
#include "exercices/ex3/ex3.hpp"
#include "utils/utils.hpp"

namespace TP {
	/**
	 * @brief Nombre d'exercices.
	 */
	static constexpr auto EXERCICES_NUMBER = 3U;
	
	/**
	 * @brief Texte pour quitter.
	 * Texte permettant de quitter le menu de choix d'exercices.
	 */
	static constexpr auto EXIT_TEXT = "exit";
	
	/**
	 * @class Menu
	 * @brief Classe représentant le menu d'exercices.
	 *
	 * Cette classe permet de gérer le menu d'exercices, d'en afficher la liste et de choisir un exercice à lancer.
	 */
	class Menu {
	public:
		/**
			 * Affiche le menu, demande à l'utilisateur de choisir un exercice, exécute l'exercice, affiche à nouveau le menu après.
			 * L'utilisateur peut quitter le programme en écrivant "exit".
			 */
		static void show_menu();
		
	private:
		/**
		 * Prend un entier en entrée et exécute l'exercice correspondant.
		 *
		 * @param n le numéro de l'exercice à exécuter.
		 */
		static void runExercice(const int &n);
		
		/**
		 * Affiche la liste des exercices.
		 */
		static inline void show_exercices_list();
	};
}