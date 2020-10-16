#include "headers/civilizacao.hpp"
#include <vector>
#include <iostream>

void Selecao(std::vector<Civilizacao> *civ, int n)
{
    int i, j, Min;
    for (i = 0; i < n - 1; i++)
    {
        Min = i;
        for (j = i + 1; j < n; j++)
        {
            if (civ->at(j).GetDist() < civ->at(Min).GetDist() || (civ->at(j).GetDist() == civ->at(Min).GetDist() && (civ->at(j).GetPop() > civ->at(Min).GetPop())))
            {
                Min = j;
            }
        }
        if (i != Min)
        {
            std::swap(civ->at(i), civ->at(Min));
        }
    }
}