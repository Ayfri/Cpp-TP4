#include <../libs/SDL-Menu/src/Menu/Menu.h>
#include <iostream>

#include "exercices/menu.hpp"

#ifdef _WIN32
#include <windows.h>

#endif

int main(int argc, char *argv[]) {
	
	// fixe les accents dans les consoles sous windows
#ifdef _WIN32
	SetConsoleOutputCP(65001U);
#endif

//	TP::Menu::show_menu();
	
	std::cout << "Bienvenue dans le TP 4 !" << '\n';
	
	const auto use_graphic_interface = TP::Menu::menu_choose_use_graphical_interface();
	
	if (use_graphic_interface) {
		TP::Menu::show_graphical_menu();
	} else {
		TP::Menu::show_menu();
	}
	
	return 0;
}