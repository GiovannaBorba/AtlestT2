#ifndef PALAVRA_HPP
#define PALAVRA_HPP
#include "ContList.hpp"

using namespace std;

#include <string>

/*class ListaOrdenadaDePalavras; // Declarando a classe ListaOrdenadaDePalavras para amizade
class ListaDeOcorrencia;

class Palavra {
public:
    string palavra;
    Palavra* next;
    int primeiraOcorrencia;
    ListaDeOcorrencia* listaDeOcorrencia;
    friend class ListaOrdenadaDePalavras; // Permitindo que a classe ListaOrdenadaDePalavras acesse membros privados
    friend class ListaDeOcorrencia;

    Palavra();
    Palavra(const string& palavra);
    Palavra(const string& palavra, ListaDeOcorrencia* lista);
    int PrimeiraOcorrencia(int total);
    int obtemPrimeiraOcorrencia();
    string getPalavra();
    string definePalavra(string palavra);
    void defineOcorrencia(Palavra* palavra, int total);
    ListaDeOcorrencia* getListaDeOcorrencia();
    void setListaDeOcorrencia(ListaDeOcorrencia* lista);
    void imprimeOcorrencia();
//private:
};*/


//TESTE GERAL
class Palavra
{
public:
    Palavra *next;
    int quant;
    std::string palavra;
    ContList *indices;
    int primeiraOcorrencia;

    Palavra();
    Palavra(std::string w);

    bool operator>(Palavra &nw)const;
    int PrimeiraOcorrencia(int total);
};

#endif