#include "Palavra.hpp"
#include "Ocorrencia.hpp"
//#include "ContList.hpp"
#include <iostream>

using namespace std;
Palavra::Palavra() : next(nullptr), palavra(""), indices(new ContList()), quant(1), primeiraOcorrencia(0){}
Palavra::Palavra(std::string w) : next(nullptr), palavra(w), indices(new ContList()), quant(1) {}

bool Palavra::operator>(Palavra &nw) const
{
    //cout << "DEU CERTO " << endl;
    if (this->quant == nw.quant)
    {
        return (this->palavra > nw.palavra);
    }

    return (this->quant > nw.quant);
}

int Palavra::PrimeiraOcorrencia(int total){
        int pag = total / 2500 + 1;
        this->primeiraOcorrencia = pag;
        this->indices->add(pag);
        return primeiraOcorrencia;
}


