#include "headers/civilizacao.hpp"
#include <vector>
#include <iostream>

void Merge(std::vector<Civilizacao> *civilizacoesLeft, std::vector<Civilizacao> *civilizacoesRight, int nl, int nr, std::vector<Civilizacao> *civ)
{

    int i = 0;
    int j = 0;
    int k = 0;
    while (i < nl && j < nr)
    {
        if (civilizacoesLeft->at(i).GetDist() < civilizacoesRight->at(j).GetDist() || (civilizacoesLeft->at(i).GetDist() == civilizacoesRight->at(j).GetDist() && (civilizacoesLeft->at(i).GetPop() > civilizacoesRight->at(j).GetPop())))
        {
            civ->at(k) = civilizacoesLeft->at(i);
            i++;
        }
        else
        {
            civ->at(k) = civilizacoesRight->at(j);
            j++;
        }
        k++;
    }
    // Complemeta com os elementos que faltaram na esquerda
    while (i < nl)
    {
        civ->at(k) = civilizacoesLeft->at(i);
        i++;
        k++;
    }
    // Complemeta com os elementos que faltaram na direita
    while (j < nr)
    {
        civ->at(k) = civilizacoesRight->at(j);
        j++;
        k++;
    }
}

void MergeSort(std::vector<Civilizacao> *civ)
{
    if (civ->size() <= 1)
        return;
    int mid = civ->size() / 2;

    std::vector<Civilizacao> *civilizacoesLeft = new std::vector<Civilizacao>;
    std::vector<Civilizacao> *civilizacoesRight = new std::vector<Civilizacao>;

    for (int i = 0; i < mid; i++)
    {
        civilizacoesLeft->push_back(civ->at(i));
    }
    for (size_t j = 0; j < civ->size() - mid; j++)
    {
        civilizacoesRight->push_back(civ->at(mid + j));
    }

    MergeSort(civilizacoesLeft);
    MergeSort(civilizacoesRight);
    Merge(civilizacoesLeft, civilizacoesRight, civilizacoesLeft->size(), civilizacoesRight->size(), civ);
}