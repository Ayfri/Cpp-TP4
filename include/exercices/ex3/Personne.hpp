#pragma once

#include <iostream>
#include <string>

namespace TP::EX3 {
	enum class Sexe : unsigned char {
		INCONNU = 0U,
		MASCULIN = 1U,
		FEMININ = 2U
	};
	
	std::ostream& operator<<(std::ostream& os, const Sexe& sexe);
	
	class Personne {
	public:
		Personne();
		
		~Personne();
		
		void initialiser(const std::string &nom, const long unsigned &numero, const Sexe &sexe) noexcept;
		
		void afficher() const;
		
		const std::string &getNom() const noexcept;
		
		const long unsigned &getNumero() const noexcept;
		
		const Sexe &getSexe() const noexcept;
	
	private:
		std::string a_nom;
		long unsigned a_numero;
		Sexe a_sexe;
	};
}