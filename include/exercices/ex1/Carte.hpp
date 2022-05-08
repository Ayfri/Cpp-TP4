#pragma once

#include <string>
#include <iostream>
#include "Carte.hpp"

/**
 * @namespace Exercices 1.
 * @brief Namespace pour l'exercice 1.
 *
 * L'exercice 1 est un exercice de manipulation de classes avec de multiples méthodes.
 * Cet exercice introduit les classes, constructeurs et propriétés.
 */
namespace TP::EX1 {
	/**
	 * @enum Couleur
	 * @brief Enumération des couleurs de cartes.
	 * @see Carte
	 */
	enum class Couleur {
		
		/*
		 * @brief Pique.
		 *
		 * La couleur de la carte est pique.
		 */
		PIQUE,
		
		/**
		 * @brief Coeur.
		 *
		 * La couleur de la carte est coeur.
		 */
		COEUR,
		/**
		 * @brief Carreau.
		 *
		 * La couleur de la carte est carreau.
		 */
		CARREAU,
		/**
		 * @brief Trèfle.
		 *
		 * La couleur de la carte est trèfle.
		 */
		TREFLE
	};
	
	/**
	 * @class Carte
	 * @brief Classe représentant une carte.
	 *
	 * La classe Carte représente une carte, contenant sa couleur et sa valeur en attributs.
	 */
	class Carte {
	public:
		
		/**
		 * @brief Constructeur.
		 * @param couleur La couleur de la carte.
		 * @param valeur La valeur de la carte.
		 *
		 * Cette méthode constructeur crée une carte avec une valeur et une couleur.
		 */
		Carte(TP::EX1::Couleur const &couleur, std::string valeur) noexcept;
		
		/**
		 * @brief Copy constructeur.
		 * @param carte La carte à copier.
		 *
		 * Cette méthode constructeur crée une carte à partir d'une autre carte.
		 */
		Carte(TP::EX1::Carte const &carte) noexcept = default;
		
		/**
		 * @brief Destructeur.
		 *
		 * Cette méthode destructeur détruit une carte.
		 */
		~Carte();
		
		/**
		 * @brief Définit le type.
		 * @param couleur La nouvelle couleur de la carte à utiliser.
		 *
		 * Cette méthode permet de définir la couleur de la carte.
		 * @see TP::EX2::Carte::a_couleur
		 */
		void setType(TP::EX1::Couleur const &couleur) noexcept;
		
		/**
		 * @brief Définit la valeur.
		 * @param valeur La nouvelle valeur de la carte à utiliser.
		 *
		 * Cette méthode permet de définir la valeur de la carte.
		 * @see TP::EX2::Carte::a_valeur
		 */
		void setValeur(std::string const &valeur) noexcept;
		
		/**
		 * @brief Affiche la carte.
		 *
		 * Cette méthode affiche la carte dans la console.
		 */
		void afficher() const;
		
		/**
		 * @brief Compare deux cartes.
		 * @param carte La carte à comparer.
		 * @return true Si les cartes sont égales.
		 *
		 * Cette méthode compare deux cartes.
		 */
		bool equals(TP::EX1::Carte const &carte) const noexcept;
		
		/**
		 * @brief Affecte la carte.
		 * @param carte La carte à affecter à celle actuelle.
		 *
		 * Cette méthode affecte une carte à celle actuelle.
		 */
		void affecter(TP::EX1::Carte const &carte) noexcept;
	
	private:
		
		/**
		 * @brief Couleur de la carte.
		 */
		TP::EX1::Couleur a_couleur;
		
		/**
		 * @brief Valeur de la carte.
		 */
		std::string a_valeur;
	};
}
