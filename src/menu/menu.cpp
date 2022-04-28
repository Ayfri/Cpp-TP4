#include "exercices/menu.hpp"

void TP::Menu::runExercice(const int &n) {
	switch (n) {
		case 1:
			TP::EX1::ex1();
			break;
		case 2:
//			Test_Fonction();
			break;
		default:
			std::cout << "Choix invalide." << std::endl;
			break;
	}
}

inline void TP::Menu::show_exercices_list() {
	for (auto i = 1U; i < EXERCICES_NUMBER; ++i) std::cout << "Exercise " << i << "\n";
}

void TP::Menu::show_menu() {
	show_exercices_list();
	
	do {
		std::cout << "Veuillez choisir un exercice à lancer : ";
		
		std::string input;
		std::cin >> input;
		
		if (Utils::tolower(input) == EXIT_TEXT) break;
		
		if (input.length() != 1U || input[0U] < '1' || input[0U] > '5') {
			std::cout << "Numéro d'exercice invalide." << '\n';
			continue;
		}
		
		const auto &exercise = std::stoi(input);
		
		runExercice(exercise);
		std::cout << "Tapez ENTRÉE pour continuer." << '\n';
		getch();
		
		show_exercices_list();
	} while (true);
}
