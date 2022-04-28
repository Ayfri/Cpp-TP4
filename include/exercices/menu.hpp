#pragma once

#include <conio.h>
#include <iostream>
#include "exercices/ex1/ex1.hpp"
#include "utils/utils.hpp"

static constexpr auto EXERCICES_NUMBER = 4U;
static constexpr auto EXIT_TEXT = "exit";

namespace TP {
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