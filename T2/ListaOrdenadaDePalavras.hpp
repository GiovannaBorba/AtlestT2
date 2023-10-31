#ifndef LISTA_ORDENADA_DE_PALAVRAS_HPP
#define LISTA_ORDENADA_DE_PALAVRAS_HPP

#include "Palavra.hpp"
using namespace std;

class ListaOrdenadaDePalavras {
private:
    Palavra* primeiro;
    string palavra;
    bool flag;
    Palavra *head;
    Palavra *tail;
    Palavra *middle;
    Palavra **vet;
    int count;
public:
    ListaOrdenadaDePalavras();
    ~ListaOrdenadaDePalavras();

    void ImprimeLista();
    int size();
    void clear();
    void add(string palavra, int total);
    void remove();
    bool contains(string palavra);
    string lowercase(string palavra);
    int get(int index);
    int pagina(int total, string palavra);
    void OrdenaAlfabetica();
    void OrdenaOcorrencia();
    void CountStopwords();
    bool StopWords(string palavra);
    void Percentual();
    void PesquisaPalavra();
    void PesquinaPagina();
    void exibirLista() const;


};

#endif 