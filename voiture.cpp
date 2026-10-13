/**
 * \file voiture.cpp
 * \brief Définition des méthodes de la classe CVoiture
 * \author Gaëtan Dallencourt
 */

#include "voiture.h"
#include <iostream>

using namespace std;  // OK uniquement dans un .cpp

// Constructeur (remplace la méthode init())
CVoiture::CVoiture(string marque, string modele, int puissance, string carburant)
    : m_marque(marque), m_modele(modele), m_carburant(carburant),
      m_puissance(puissance), m_vitesse(0)
{
}

void CVoiture::demarrer()
{
    cout << ">> La voiture demarre." << endl;
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
    cout << "-----------------------------" << endl;
}