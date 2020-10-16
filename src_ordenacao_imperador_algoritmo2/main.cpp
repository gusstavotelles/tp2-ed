#include <cstdio> // em C substituir por #include <stdio.h>
#include <iostream>
#include <vector>
#include "headers/civilizacao.hpp"
#include "selecao.cpp"
using namespace std;
#define MAX 20

int main()
{
    int qtdCiv;
    scanf("%d", &qtdCiv);
    int i, j;

    vector<Civilizacao> *civ = new vector<Civilizacao>;

    for (i = 0; i < qtdCiv; i++)
    {
        char nome[MAX] = {};
        int dist, pop;
        scanf("%s %d %d", &nome[0], &dist, &pop);
        civ->push_back(Civilizacao(nome, dist, pop));
    }

    Selecao(civ, qtdCiv);

    for (j = 0; j < qtdCiv; j++)
    {
        civ->at(j).Mostra();
    }

    return 0;
}
