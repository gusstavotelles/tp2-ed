#include <cstdio> 
#include <iostream>
#include <vector>
#include "headers/civilizacao.hpp" 
#include "mergeSort.cpp"
using namespace std;

int main() {
    int num_civilizacoes;
    scanf("%d",&num_civilizacoes);
    int i, j;

    vector<Civilizacao>* civilizacoes = new vector<Civilizacao>;
    
    for(i=0; i < num_civilizacoes; i++){
        char nome[15] = {};
        int distancia, populacao;
        scanf("%s %d %d", &nome[0], &distancia, &populacao);
        civilizacoes->push_back(Civilizacao(nome, distancia, populacao));
    }

    MergeSort(civilizacoes);

    for(j=0; j < num_civilizacoes; j++){
        civilizacoes->at(j).Imprime();
    }

    return 0;
}
