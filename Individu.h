/**
 * @file Individu.h
 * @author Philippe Lopistéguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @version 0.1
 * @date 12/08/2022
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief La classe Individu permet de représenter une personne à partir de son nom et de son prénom
 * 
 * @details au dela de décrire un Individu par son nom et son prénom, la classe Individu permet de repésenter également
 * la Voiture qu'il conduit.
 * 
 * La Voiture conduite par l'Individu est représentée par un pointeur vers un objet de la classe Voiture. 
 * 
 * @warning Un Individu peut conduire au plus une Voiture
 */
class Individu
{
    // ATTRIBUTS
  public:
  /**
   * @brief Le nom de l'individu
   * 
   */
    string nom;
    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;
    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture;

    // MÉTHODES
  public:
    // Constructeur
    /**
     * @brief Construit un objet Individu à partir de son nom (premier parametre)
     * et de son prénom (deuxieme parametre)
     * 
     */
    Individu(string = "", string = "");
    // destructeur
    /**
     * @brief Détruit un objet Individu
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Affiche l'identité de l'individu
     * 
     * @return string de la forme (nom + prénom)
     * 
     * @bug un espace de trop dans le return
     * 
     * @todo ajouter un parametre permettant de choisir un affichage du type nom,prénom ou prénom,nom
     */
    string toString();        
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief Définit la Voiture conduite par l'Individu
     * 
     * @param [in] voiture Représente un pointeur vers l'objet Voiture conduite par l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H