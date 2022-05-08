#pragma once

#include <iostream>

/**
 * @namespace Exercices 2.
 * @brief Namespace pour l'exercice 2.
 *
 * L'exercice 2 est un exercice de manipulation de classes avec de multiples méthodes.
 * Cet exercice introduit les méthodes friend et de la surcharge d'opérateurs.
 */
namespace TP::EX2 {
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
		 * @brief Récupère le nombre de cartes créées.
		 *
		 * Cette méthode statique retourne le nombre de cartes créées.
		 */
		static unsigned &GetNbCreation() noexcept;
		
		/**
		 * @brief Définit l'opérateur <<.
		 * @param os Le flux de sortie.
		 * @param carte La carte à afficher.
		 * @return La carte affichée.
		 *
		 * Cette méthode statique affiche une carte sur un flux de sortie.
		 */
		friend std::ostream &operator<<(std::ostream &os, const Carte &carte);
		
		/**
		 * @brief Constructeur.
		 * @param couleur La couleur de la carte.
		 * @param valeur La valeur de la carte.
		 *
		 * Cette méthode constructeur crée une carte avec une valeur et une couleur et incrémente le nombre de carte créées.
		 */
		Carte(TP::EX2::Couleur const &couleur, std::string valeur) noexcept;
		
		/**
		 * @brief Copy constructeur.
		 * @param carte La carte à copier.
		 *
		 * Cette méthode constructeur crée une carte à partir d'une autre carte et incrémente le nombre de carte créées.
		 */
		Carte(TP::EX2::Carte &carte) noexcept;
		
		/**
		 * @brief Destructeur.
		 *
		 * Cette méthode destructeur détruit une carte et décrémente le nombre de carte créées.
		 */
		~Carte();
		
		/**
		 * @brief Définit l'opérateur =.
		 * @param carte La carte à copier.
		 * @return La carte copiée.
		 *
		 * Cette méthode permet de copier une carte.
		 */
		TP::EX2::Carte &operator=(TP::EX2::Carte &&carte) noexcept = default;
		
		/**
		 * @brief Définit l'opérateur ==.
		 * @param carte La carte à comparer.
		 * @return true si les cartes sont égales, false sinon.
		 *
		 * Cette méthode permet de comparer deux cartes.
		 */
		bool operator==(TP::EX2::Carte const &carte) const noexcept;
		
		/**
		 * @brief Définit l'opérateur !=.
		 * @param carte La carte à comparer.
		 * @return true si les cartes ne sont pas égales, false sinon.
		 *
		 * Cette méthode permet de comparer deux cartes.
		 * @see operator==
		 */
		bool operator!=(TP::EX2::Carte const &carte) const noexcept;
		
		/**
		 * @brief Définit le type.
		 * @param couleur La nouvelle couleur de la carte à utiliser.
		 *
		 * Cette méthode permet de définir la couleur de la carte.
		 * @see TP::EX2::Carte::a_couleur
		 */
		void setType(TP::EX2::Couleur const &couleur) noexcept;
		
		/**
		 * @brief Définit la valeur.
		 * @param valeur La nouvelle valeur de la carte à utiliser.
		 *
		 * Cette méthode permet de définir la valeur de la carte.
		 * @see TP::EX2::Carte::a_valeur
		 */
		void setValeur(std::string const &valeur) noexcept;
	
	private:
		/**
		 * @brief Nombre de cartes créées.
		 *
		 * Cette propriété statique contient le nombre de cartes créées.
		 */
		inline static unsigned NbCreation;
		
		/**
		 * @brief Couleur de la carte.
		 */
		TP::EX2::Couleur a_couleur;
		
		/**
		 * @brief Valeur de la carte.
		 */
		std::string a_valeur;
	};
}