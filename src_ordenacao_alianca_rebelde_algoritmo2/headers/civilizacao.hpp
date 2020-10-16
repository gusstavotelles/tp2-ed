#ifndef CIVILIZACAO_HPP
#define CIVILIZACAO_HPP
#include <cstddef>
#include <string>
// #define MAX 20

class Civilizacao
{
    public:
        Civilizacao();
        Civilizacao(char n[20], int d, int p);
        int GetDist();
        int GetPop();
        void Mostra();

    private:
        int dist;
        int pop;
        char nome[20];
};
#endif