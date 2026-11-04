/**
 * \file roue.h
 * \brief Déclaration de la classe CRoue
 * \author Gaëtan Dallencourt
 * \version 1.0
 * \date 04/11/2026
 */

#ifndef ROUE_H
#define ROUE_H
#include <string>

class CRoue
{
private:
    double m_diametre;        //!< Diamètre de la roue (en pouces)
    std::string m_garniture; //!< Garniture : "4 saisons" ou "Hiver"
    std::string m_marque;    //!< Marque de la roue (pneu)
    double m_pression;       //!< Pression (en bars)

public:
    // Constructeur par défaut (nécessaire pour le tableau dans CVoiture)
    CRoue();

    // Constructeur avec paramètres (SANS liste d'initialisation)
    CRoue(double diametre, std::string garniture, std::string marque, double pression);

    // Affichage
    void affiche() const;

    // Getters et Setters
    double getDiametre() const;
    std::string getGarniture() const;
    std::string getMarque() const;
    double getPression() const;

    void setDiametre(double diametre);
    void setGarniture(std::string garniture);
    void setMarque(std::string marque);
    void setPression(double pression);
};

#endif // ROUE_H