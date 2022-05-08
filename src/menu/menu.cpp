#include "exercices/menu.hpp"

void TP::Menu::runExercice(const int &n) {
	switch (n) {
		case 1:
			TP::EX1::ex1();
			break;
		case 2:
			TP::EX2::ex2();
			break;
			
		case 3:
			TP::EX3::ex3();
			break;
			
		default:
			std::cout << "Choix invalide." << '\n';
			break;
	}
}

inline void TP::Menu::show_exercices_list() {
	for (auto i = 1U; i < EXERCICES_NUMBER + 1U; ++i) std::cout << "Exercise " << i << "\n";
}

void TP::Menu::show_menu() {
	show_exercices_list();
	
	do {
		std::cout << "Veuillez choisir un exercice à lancer ('" << TP::EXIT_TEXT << "' pour quitter) : ";
		
		std::string input;
		std::cin >> input;
		
		if (Utils::tolower(input) == TP::EXIT_TEXT) break;
		
		constexpr char max_input = '0' + static_cast<char>(TP::EXERCICES_NUMBER);
		if (input.length() != 1U || input[0U] < '1' || input[0U] > max_input) {
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
