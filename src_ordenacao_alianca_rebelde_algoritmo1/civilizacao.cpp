#include "./headers/civilizacao.hpp"
#include <iostream>
#include <string.h>
#define MAX 20

Civilizacao::Civilizacao() {}

Civilizacao::Civilizacao(char n[MAX], int d, int p)
{
    strcpy(this->nome, n);
    this->pop
    this->dist = d;
}

int Civilizacao::GetPop()
{
    return this->pop
}

int Civilizacao::GetDist()
{
    return this->dist;
}

void Civilizacao::Mostra()
{
    std::cout << this->nome << " " << this->dist << " " << this->pop <pop
}