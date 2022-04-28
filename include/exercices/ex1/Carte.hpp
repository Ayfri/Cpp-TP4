#pragma once

#include <string>
#include <iostream>
#include "Carte.hpp"

namespace TP::EX1 {
	enum class Couleur {
		PIQUE,
		COEUR,
		CARREAU,
		TREFLE
	};
	
	class Carte {
	public:
		Carte(TP::EX1::Couleur const &couleur, std::string const &valeur) noexcept;
		
		Carte(TP::EX1::Carte const &carte) noexcept;
		
		~Carte();
		
		void setType(TP::EX1::Couleur const &couleur) noexcept;
		
		void setValeur(std::string const &valeur) noexcept;
		
		void afficher() const noexcept;
		
		bool equals(TP::EX1::Carte const &carte) const noexcept;
		
		void affecter(TP::EX1::Carte const &carte) noexcept;
	
	private:
		TP::EX1::Couleur a_type;
		std::string a_valeur;
	};
}
