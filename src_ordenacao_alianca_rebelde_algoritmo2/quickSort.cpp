
#include <vector>
#include <iostream>

#include "headers/civilizacao.hpp"

void Particao(int esq, int dir, int *i, int *j, std::vector<Civilizacao> *civ)
{
    Civilizacao x, w;
    *i = esq;
    *j = dir;

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

void Ordena(int esq, int dir, std::vector<Civilizacao> *civ)
{
    int i, j;
    Particao(esq, dir, &i, &j, civ);
    if (esq < j)
        Ordena(esq, j, civ);
    if (i < dir)
        Ordena(i, dir, civ);
}
void QuickSort(std::vector<Civilizacao> *civ, int n)
{
    Ordena(0, n - 1, civ);
}
