#ifndef PLAN_H_INCLUDED
#define PLAN_H_INCLUDED

#include <vector>
#include <iterator>
#include "util.h"
#include "svgfile.h"
#include "couleur.h"
#include <algorithm>
#include "environnement.h"

///La classe Plan est compos�e de D'environnements(Arbres, fleur, ciel ...) stock�s dans un vecteur Environnement*
class Plan
{
    ///M�thodes : D�claration
public:
    Plan();

    void afficher() const;
    void dessiner(Svgfile& svgout);

    void remplirEnvironnement(std::vector<Environnement*>& objets);
    void viderEnvironnement();

    void trier();

    ///Attributs : D�claration
private:
    std::vector<Environnement*> m_objets;
};

#endif // PLAN_H_INCLUDED
