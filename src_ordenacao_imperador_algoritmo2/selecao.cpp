#include "headers/civilizacao.hpp"
#include <vector>
#include <iostream>

void Selecao(std::vector<Civilizacao> *civ, int n)
{
    int i, j, minimo;
    for (i = 0; i < n - 1; i++)
    {
        minimo = i;
        for (j = i + 1; j < n; j++)
        {
            if (civ->at(j).GetDist() < civ->at(minimo).GetDist() || (civ->at(j).GetDist() == civ->at(minimo).GetDist() && (civ->at(j).GetPop() > civ->at(minimo).GetPop())))
            {
                minimo = j;
            }
        }
        if (i != minimo)
        {
            std::swap(civ->at(i), civ->at(minimo));
        }
    }
}