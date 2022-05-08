#pragma once

#include <iostream>
#include <string>

/**
 * @namespace Exercice 3
 * @brief Namespace pour l'exercices 3.
 *
 * L'exercice3 est un exercice de manipulation de classes.
 * Il permet de créer une classe Personne, de lui affecter des valeurs, de les afficher et de détruire la classe.
 */
namespace TP::EX3 {
	/**
	 * @enum Sexe
	 * @brief Enumération des Sexes disponibles.
	 *
	 * Les sexes disponibles sont utilisées pour la structure personne pour définir le sexe d'une personne.
	 * Elle est sous-jacente du type `unsigned char`.
	 *
	 * @see Personne
	 */
	enum class Sexe : unsigned char {
		
		/**
		 * @brief Inconnu
		 *
		 * Le sexe de la personne repeat_length'est pas connu.
		 */
		INCONNU = 0U,
		/**
		 * @brief Masculin
		 *
		 * Le sexe de la personne est un homme.
		 */
		MASCULIN = 1U,
		
		/**
		 * @brief Féminin
		 *
		 * Le sexe de la personne est une femme.
		 */
		FEMININ = 2U
	};
	
	std::ostream &operator<<(std::ostream &os, const Sexe &sexe);
	
	/**
	 * @class Personne
	 * @brief Classe représentant une personne.
	 *
	 * La classe représente une personne avec son nom, son numéro de téléphone et son sexe.
	 */
	class Personne {
	public:
		/**
		 * @brief Créé une nouvelle personne.
		 *
		 * Créé une nouvelle personne avec aucune données.
		 */
		Personne();
		
		/**
		 * @brief Détruit une personne.
		 *
		 * Détruit une personne.
		 */
		~Personne();
		
		/**
		 * @brief Initialise une personne.
		 * @param nom Le nom de la personne.
		 * @param numero Le numéro de téléphone de la personne.
		 * @param sexe Le sexe de la personne.
		 *
		 * Initialise une personne avec les données passées en paramètre.
		 */
		void initialiser(const std::string &nom, const long unsigned &numero, const Sexe &sexe) noexcept;
		
		/**
		 * @brief Affiche une personne.
		 *
		 * Affiche une personne dans la console en affichant son nom, son numéro de téléphone et son sexe.
		 */
		void afficher() const;
		
		/**
		 * @brief Retourne le nom de la personne.
		 * @return Le nom de la personne.
		 *
		 * Retourne le nom de la personne.
		 * @see TP::EX3::Personne::a_nom
		 */
		const std::string &getNom() const noexcept;
		
		/**
		 * @brief Retourne le numéro de téléphone de la personne.
		 * @return Le numéro de téléphone de la personne.
		 *
		 * Retourne le numéro de téléphone de la personne.
		 * @see TP::EX3::Personne::a_numero
		 */
		const long unsigned &getNumero() const noexcept;
		
		/**
		 * @brief Retourne le sexe de la personne.
		 * @return Le sexe de la personne.
		 *
		 * Retourne le sexe de la personne.
		 * @see TP::EX3::Personne::a_sexe
		 * @see TP::EX3::Sexe
		 */
		const Sexe &getSexe() const noexcept;
	
	private:
		/**
		 * @brief Nom de la personne.
		 *
		 * Le nom de la personne est une chaîne de caractères.
		 */
		std::string a_nom;
		
		/**
		 * @brief Numéro de la personne.
		 *
		 * Le numéro de la personne est un entier positif.
		 */
		long unsigned a_numero;
		
		/**
		 * @brief Sexe de la personne.
		 *
		 * Le sexe de la personne est un valeur de l'enumération `Sexe`.
		 */
		Sexe a_sexe;
	};
}