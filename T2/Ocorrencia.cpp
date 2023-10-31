#include "Ocorrencia.hpp"

Ocorrencia::Ocorrencia(int c, int p) : cont(c), pag(p), next(nullptr) {}

string Ocorrencia::toString()
{
    stringstream ss;
    ss << cont << " vezes na pagina " << pag;
    return ss.str();
}