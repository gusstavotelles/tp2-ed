#include <cstdio>
#include <iostream>
#include <vector>
// arquivos
#include "headers/civilizacao.hpp"
#include "quickSort.cpp"

using namespace std;
#define MAX 20

int main()
{
    int qtdCiv;
    scanf("%d", &qtdCiv);
    vector<Civilizacao> *civ = new vector<Civilizacao>;

    for (int i = 0; i < qtdCiv; i++)
    {
        char nome[MAX] = {};
        int dist, pop;
        scanf("%s %d %d", &nome[0], &dist, &pop);
        civ->push_back(Civilizacao(nome, dist, pop));
    }

    QuickSort(civ, qtdCiv);

    for (int j = 0; j < qtdCiv; j++)
    {
        civ->at(j).Mostra();
    }
    return 0;
}
