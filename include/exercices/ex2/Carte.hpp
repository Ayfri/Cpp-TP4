#pragma once

#include <iostream>

namespace TP::EX2 {
	enum class Couleur {
		PIQUE,
		COEUR,
		CARREAU,
		TREFLE
	};
	
	class Carte {
	public:
		inline static unsigned NbCreation;
		
		static unsigned &GetNbCreation() noexcept;
		
		friend std::ostream &operator<<(std::ostream &os, const Carte &carte) {
			os << static_cast<int>(carte.a_couleur) << " " << carte.a_valeur;
			return os;
		};
		
		Carte(TP::EX2::Couleur const &, std::string const &) noexcept;
		
		Carte(TP::EX2::Carte &) noexcept;
		
		~Carte();
		
		TP::EX2::Carte &operator=(TP::EX2::Carte &&) noexcept = default;
		
		bool operator==(TP::EX2::Carte const  &) const noexcept;
		
		bool operator!=(TP::EX2::Carte const  &) const noexcept;
		
		void setType(TP::EX2::Couleur const&) noexcept;
		
		void setValeur(std::string const &) noexcept;
	
	private:
		TP::EX2::Couleur a_couleur;
		std::string a_valeur;
	};
}