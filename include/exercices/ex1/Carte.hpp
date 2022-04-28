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
	
	template<typename T>
	std::ostream &operator<<(typename std::enable_if<std::is_enum<T>::value, std::ostream>::type &stream, const T &e) {
		return stream << static_cast<typename std::underlying_type<T>::type>(e);
	}
	
	class Carte {
	public:
		Carte(TP::EX1::Couleur const &couleur, std::string const &valeur);
		
		Carte(TP::EX1::Carte const &carte);
		
		~Carte();
		
		void setType(TP::EX1::Couleur const &couleur);
		
		void setValeur(std::string const &valeur);
		
		void afficher() const;
		
		bool equals(TP::EX1::Carte const &carte) const;
		
		void affecter(TP::EX1::Carte const &carte);
	
	private:
		TP::EX1::Couleur a_type;
		std::string a_valeur;
	};
}
