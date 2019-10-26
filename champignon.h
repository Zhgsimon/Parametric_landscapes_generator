#ifndef CHAMPIGNON_H_INCLUDED
#define CHAMPIGNON_H_INCLUDED

#include "plantes.h"
#include "triangle.h"
#include "ellipse.h"
#include "cercle.h"

/// Déclaration d'un type "Champignon" qui hérite de la classe "Plantes"
///Champignon est composé de la classe Triangle, Ellipse et Cercle
class Champignon: public Plantes
{
    ///Methodes : déclaration
public:
    Champignon(std::mt19937& rg);

    void afficher() const;
    void dessiner(Svgfile& svgout);

    void Translater(double coeff);
    void TranslaterX(double consta);
    void TranslaterY(double consta);

    void Zoom(double coeff);

    virtual void VarColFonc(Heure& heure);
    ~Champignon();

    ///Attributs : déclaration
private:
    Cercle m_tete;
    Ellipse m_bas;
    Triangle m_tige;
};


#endif // CHAMPIGNON_H_INCLUDED
