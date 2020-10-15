#include "./headers/civilizacao.hpp"
#include <iostream>
#include <string.h>
#define MAX 20

Civilizacao::Civilizacao() {}

Civilizacao::Civilizacao(char n[MAX], int d, int p) {
    strcpy(this->nome, n);
    this->populacao = p;
    this->distancia = d;
}

int Civilizacao::GetPopulacao() {
    return this->populacao;
}

int Civilizacao::GetDistancia() {
    return this->distancia;
}

void Civilizacao::Imprime() {
    std::cout << this->nome << " " << this->distancia << " " << this->populacao << "\n"; 
}