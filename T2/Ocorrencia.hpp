#ifndef Ocorrencia_
#define Ocorrencia_
#include <iostream>
#include <sstream>
using namespace std;

class Ocorrencia
{
public:
    int cont,pag;
    Ocorrencia *next;
    Ocorrencia(int c, int p);
    string toString();

};

#endif