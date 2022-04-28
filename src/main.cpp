#include "exercices/menu.hpp"

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
	// fixe les accents dans les consoles sous windows
	SetConsoleOutputCP(65001U);
#endif
	
	TP::Menu::show_menu();
	return 0;
}