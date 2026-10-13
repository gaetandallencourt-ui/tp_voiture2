/**
 * \file voiture.h
 * \brief Déclaration de la classe CVoiture
 * \author Gaëtan Dallencourt
 * \version 2.0
 * \date 13/10/2026
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
    
    // Nouveaux attributs pour la géolocalisation et le suivi
    double m_posX;             //!< Position horizontale (en km)
    double m_posY;             //!< Position verticale (en km)
    double m_kilometrageTotal; //!< Distance totale parcourue (en km)

public:
    CVoiture(std::string marque, std::string modele,
             int puissance, std::string carburant);

    void demarrer();
    void arreter();
    void accelerer(int vitesse);
    void ralentir(int vitesse);
    void affiche();

    // Nouvelles méthodes de géolocalisation et de suivi
    void deplacer(double deltaX, double deltaY);
    void afficherPosition() const;

    // Getters et Setters (facultatifs mais demandés)
    double getPosX() const;
    double getPosY() const;
    double getKilometrageTotal() const;
    void setPosX(double posX);
    void setPosY(double posY);
};

#endif // VOITURE_H