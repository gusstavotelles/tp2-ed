#include <cstdio> // em C substituir por #include <stdio.h>
#include <iostream>
#include <vector>
#include "headers/civilizacao.hpp" 
#include "Bolha.cpp"
using namespace std;
#define MAX 20


int main() {
    int num_civilizacoes;
    scanf("%d",&num_civilizacoes);
    int i, j;

    vector<Civilizacao>* civilizacoes = new vector<Civilizacao>;
    
    for(i=0; i < num_civilizacoes; i++){
        char nome[MAX] = {};
        int distancia, populacao;
        scanf("%s %d %d", &nome[0], &distancia, &populacao);
        civilizacoes->push_back(Civilizacao(nome, distancia, populacao));
    }

    Bolha(civilizacoes, num_civilizacoes);

    for(j=0; j < num_civilizacoes; j++){
        civilizacoes->at(j).Imprime();
    }

    return 0;
}
