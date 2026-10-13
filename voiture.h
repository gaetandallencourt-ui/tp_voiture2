/**
 * \file voiture.h
 * \brief Déclaration de la classe CVoiture
 * \author Gaëtan Dallencourt
 * \version 1.0
 * \date 05/10/2026
 */

#ifndef VOITURE_H
#define VOITURE_H

#include <string>

class CVoiture
{
private:
    std::string m_marque;      //!< Marque du véhicule
    std::string m_modele;      //!< Modèle du véhicule
    std::string m_carburant;   //!< Type de carburant
    int m_puissance;           //!< Puissance (ch)
    int m_vitesse;             //!< Vitesse courante (km/h)

public:
    CVoiture(std::string marque, std::string modele,
             int puissance, std::string carburant);

    void demarrer();
    void arreter();
    void accelerer(int vitesse);
    void ralentir(int vitesse);
    void affiche();
};

#endif // VOITURE_H