#include "./headers/civilizacao.hpp"
#include <iostream>
#include <string.h>
#define MAX 20

Civilizacao::Civilizacao() {}

Civilizacao::Civilizacao(char n[MAX], int _dist, int _pop)
{
    strcpy(this->nome, n);
    this->pop = _pop;
    this->dist = _dist;
}

int Civilizacao::GetPop()
{
    return this->pop;
}

int Civilizacao::GetDist()
{
    return this->dist;
}

void Civilizacao::Mostra()
{
    std::cout << "Nome: " << this->nome << ", Distancia: " << this->dist << ", Populacao: " << this->pop << "\n";
    std::cout << "Nome: " << this->nome << ", Distancia: " << this->dist << ", Populacao: " << this->pop << "\n";
}