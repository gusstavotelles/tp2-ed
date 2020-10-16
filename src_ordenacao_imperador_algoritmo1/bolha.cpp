#include "headers/civilizacao.hpp"
#include <vector>
#include <iostream>

void Bolha(std::vector<Civilizacao> *civ, int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            if (civ->at(j).GetDist() < civ->at(j - 1).GetDist() || (civ->at(j).GetDist() == civ->at(j - 1).GetDist() && (civ->at(j).GetPop() > civ->at(j - 1).GetPop())))
            {
                std::swap(civ->at(j), civ->at(j - 1));
            }
        }
    }
}