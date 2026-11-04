/**
 * \file roue.cpp
 * \brief Définition des méthodes de la classe CRoue
 * \author Gaëtan Dallencourt
 */

#include "roue.h"   // <-- INDISPENSABLE : sans cette ligne, CRoue n'existe pas
#include <iostream>

using namespace std; // OK uniquement dans un .cpp

// Constructeur par défaut (sans liste d'initialisation)
CRoue::CRoue()
{
    m_diametre = 16.0;
    m_garniture = "4 saisons";
    m_marque = "Inconnue";
    m_pression = 2.5;
}

// Constructeur avec paramètres : affectations dans le corps, PAS de liste d'initialisation
CRoue::CRoue(double diametre, string garniture, string marque, double pression)
{
    m_diametre = diametre;
    m_garniture = garniture;
    m_marque = marque;
    m_pression = pression;
}

void CRoue::affiche() const
{
    cout << "  - Roue " << m_marque << " : diametre " << m_diametre
         << " pouces, garniture " << m_garniture
         << ", pression " << m_pression << " bars" << endl;
}

// Getters et Setters
double CRoue::getDiametre() const { return m_diametre; }
string CRoue::getGarniture() const { return m_garniture; }
string CRoue::getMarque() const { return m_marque; }
double CRoue::getPression() const { return m_pression; }

void CRoue::setDiametre(double diametre) { m_diametre = diametre; }
void CRoue::setGarniture(string garniture) { m_garniture = garniture; }
void CRoue::setMarque(string marque) { m_marque = marque; }
void CRoue::setPression(double pression) { m_pression = pression; }