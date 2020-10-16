#include "headers/civilizacao.hpp"
#include <vector>
#include <iostream>

void Particao(int Esq, int Dir, int *i, int *j, std::vector<Civilizacao> *civ)
{
    Civilizacao x, w;
    *i = Esq;
    *j = Dir;

    x = civ->at((*i + *j) / 2);
    do
    {
        while (x.GetDist() > civ->at(*i).GetDist() || (x.GetDist() == civ->at(*i).GetDist() && (x.GetPop() < civ->at(*i).GetPop())))
        {
            (*i)++;
        }
        while (x.GetDist() < civ->at(*j).GetDist() || (x.GetDist() == civ->at(*j).GetDist() && x.GetPop() > civ->at(*j).GetPop()))
        {
            (*j)--;
        }
        if (*i <= *j)
        {
            w = civ->at(*i);
            civ->at(*i) = civ->at(*j);
            civ->at(*j) = w;
            (*i)++;
            (*j)--;
        }
    } while (*i <= *j);
}

void Ordena(int Esq, int Dir, std::vector<Civilizacao> *civ)
{
    int i, j;
    Particao(Esq, Dir, &i, &j, civ);
    if (Esq < j)
        Ordena(Esq, j, civ);
    if (i < Dir)
        Ordena(i, Dir, civ);
}
void QuickSort(std::vector<Civilizacao> *civ, int n)
{
    Ordena(0, n - 1, civ);
}
