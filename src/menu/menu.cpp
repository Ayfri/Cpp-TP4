#include <sstream>
#include "exercices/menu.hpp"
#include "../../libs/SDL-Menu/src/Menu/Menu.h"

void TP::Menu::runExercice(const int &n) {
	if (n < 0 || n > TP::EXERCICES_NUMBER) {
		std::cout << "Choix invalide." << '\n';
		return;
	}
	
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
			return;
	}
}

inline void TP::Menu::show_exercices_list() {
	for (auto i = 1U; i < TP::EXERCICES_NUMBER + 1U; ++i) std::cout << "Exercise " << i << "\n";
}

void TP::Menu::show_menu() {
	std::cout << "Liste des exercices :" << '\n';
	TP::Menu::show_exercices_list();
	
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

static auto repeat(const std::string &s, const unsigned &n) {
	std::stringstream ss;
	for (auto i = 0U; i < n; ++i) ss << s;
	return ss.str();
}

static auto add_print_before_running_exercice(const std::function<void()> &function, const int &exercice_number) {
	return [&function, &exercice_number]() {
		constexpr auto repeat_length = 10U;
		std::cout << repeat("=", repeat_length) << " Lancement de l'exercice " << exercice_number << " : " << repeat("=", repeat_length) << '\n';
		function();
	};
}

void TP::Menu::show_graphical_menu() {
	auto menu = new ::Menu(
			"tp4 poo - ynov aix",
			std::vector<std::string>{"roy pierre", "borello benjamin"},
			std::vector<std::function<void()>>{
					add_print_before_running_exercice(TP::EX1::ex1, 1),
					add_print_before_running_exercice(TP::EX2::ex2, 2),
					add_print_before_running_exercice(TP::EX3::ex3, 3),
			}
	);
	
	bool running = true;
	
	// MAIN LOOP
	while (running) {
		// EVENTS
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
				case SDL_QUIT:
					running = false;
					break;
				case SDL_MOUSEBUTTONDOWN:
					menu->updateButtons(true);
					break;
				default:
					break;
			}
		}
		
		menu->updateButtons(false);
		
		// DRAW
		menu->run();
	}
	
	// CLEAN UP
	delete menu;
	SDL_Quit();
}

bool TP::Menu::menu_choose_use_graphical_interface() {
	do {
		std::cout << "Utiliser le menu graphique ? (o/n) : ";
		
		std::string input;
		std::cin >> input;
		
		if (Utils::tolower(input) == TP::YES) return true;
		if (Utils::tolower(input) == TP::NO) return false;
		
		std::cout << "Choix invalide." << '\n';
	} while (true);
}
