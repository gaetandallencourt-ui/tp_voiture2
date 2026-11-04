/**
 * \file voiture.cpp
 * \brief Définition des méthodes de la classe CVoiture
 * \author Gaëtan Dallencourt
 */

#include "voiture.h"
#include <iostream>
#include <cmath> // Nécessaire pour std::sqrt

using namespace std;  // OK uniquement dans un .cpp

// Constructeur (initialise aussi la position à (0,0) et le kilométrage à 0)
CVoiture::CVoiture(string marque, string modele, int puissance, string carburant)
    : m_marque(marque), m_modele(modele), m_carburant(carburant),
      m_puissance(puissance), m_vitesse(0), m_posX(0.0), m_posY(0.0), m_kilometrageTotal(0.0)
{
}

void CVoiture::demarrer()
{
    cout << ">> La voiture " << m_marque << " " << m_modele << " demarre." << endl;
}

void CVoiture::arreter()
{
    m_vitesse = 0;
    cout << ">> La voiture s'arrete." << endl;
}

void CVoiture::accelerer(int vitesse)
{
    m_vitesse += vitesse;
    cout << ">> Acceleration de " << vitesse << " km/h." << endl;
}

void CVoiture::ralentir(int vitesse)
{
    if (vitesse >= m_vitesse)
        m_vitesse = 0;
    else
        m_vitesse -= vitesse;
    cout << ">> Ralentissement de " << vitesse << " km/h." << endl;
}

void CVoiture::affiche()
{
    cout << "-----------------------------" << endl;
    cout << " Marque    : " << m_marque    << endl;
    cout << " Modele    : " << m_modele    << endl;
    cout << " Puissance : " << m_puissance << " ch" << endl;
    cout << " Carburant : " << m_carburant << endl;
    cout << " Vitesse   : " << m_vitesse   << " km/h" << endl;
    cout << " Position  : (" << m_posX << " ; " << m_posY << ") km" << endl;
    cout << " Kilometrage: " << m_kilometrageTotal << " km" << endl;
    cout << "-----------------------------" << endl;
}

// Implémentation des nouvelles méthodes

void CVoiture::deplacer(double deltaX, double deltaY)
{
    m_posX += deltaX;
    m_posY += deltaY;

    // Calcul de la distance parcourue via le théorème de Pythagore : d = racine(deltaX^2 + deltaY^2)
    double distance = sqrt(deltaX * deltaX + deltaY * deltaY);
    m_kilometrageTotal += distance;

    cout << ">> Deplacement effectue (deltaX = " << deltaX << " km, deltaY = " << deltaY << " km)." << endl;
}

void CVoiture::afficherPosition() const
{
    cout << ">> Position actuelle de la " << m_marque << " " << m_modele 
         << " : X = " << m_posX << " km, Y = " << m_posY 
         << " (Total parcouru : " << m_kilometrageTotal << " km)" << endl;
}

// Getters et Setters
double CVoiture::getPosX() const { return m_posX; }
double CVoiture::getPosY() const { return m_posY; }
double CVoiture::getKilometrageTotal() const { return m_kilometrageTotal; }
void CVoiture::setPosX(double posX) { m_posX = posX; }
void CVoiture::setPosY(double posY) { m_posY = posY; }