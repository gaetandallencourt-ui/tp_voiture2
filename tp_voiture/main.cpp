/**
 * \file main.cpp
 * \brief Programme principal : scenario de test de CVoiture
 * \author Gaëtan Dallencourt
 */

#include <iostream>
#include "voiture.h"

using namespace std;

int main()
{
    // Instanciation via le constructeur
    CVoiture maVoiture("Peugeot", "208", 100, "Essence");

    maVoiture.affiche();          // Etat initial
    maVoiture.demarrer();
    maVoiture.accelerer(50);
    maVoiture.affiche();          // 50 km/h
    maVoiture.ralentir(20);
    maVoiture.affiche();          // 30 km/h
    maVoiture.arreter();
    maVoiture.affiche();          // Etat final : 0 km/h

    return 0;
}