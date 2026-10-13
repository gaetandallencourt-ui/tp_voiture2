/**
 * \file main.cpp
 * \brief Programme principal : scenario de test de CVoiture avec géolocalisation
 * \author Gaëtan Dallencourt
 */

#include <iostream>
#include "voiture.h"

using namespace std;

int main()
{
    // Instanciation de deux véhicules
    CVoiture voiture1("Peugeot", "208", 100, "Essence");
    CVoiture voiture2("Renault", "Zoe", 135, "Electrique");

    cout << "--- ETAT INITIAL ---" << endl;
    voiture1.affiche();
    voiture2.affiche();

    cout << "\n--- SCENARIO DE DEPLACEMENT ---" << endl;
    
    voiture1.demarrer();
    voiture1.accelerer(50);
    voiture1.deplacer(10.0, 5.0); // Déplacement de (10, 5) km
    voiture1.affiche();

    cout << endl;

    voiture2.demarrer();
    voiture2.accelerer(80);
    voiture2.deplacer(3.0, 4.0); // Triangle 3-4-5 -> distance de 5 km
    voiture2.afficherPosition();

    cout << "\n--- DEPLACEMENT SUPPLEMENTAIRE ---" << endl;
    voiture1.deplacer(-2.0, 3.0); // Test avec des valeurs négatives
    voiture1.affiche();

    return 0;
}