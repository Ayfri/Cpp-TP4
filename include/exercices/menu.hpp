#pragma once

#include <conio.h>
#include <iostream>
#include "exercices/ex1/ex1.hpp"
#include "exercices/ex2/ex2.hpp"
#include "exercices/ex3/ex3.hpp"
#include "utils/utils.hpp"

namespace TP {
	static constexpr auto EXERCICES_NUMBER = 3U;
	static constexpr auto EXIT_TEXT = "exit";
	
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