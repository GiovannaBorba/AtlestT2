#ifndef ContList_
#define ContList_
#include "Ocorrencia.hpp"
#include <iostream>

using namespace std;

class ContList
{
private:
    Ocorrencia *head;
    Ocorrencia *tail;

public:
    ContList();
    void add(int pg);
    bool find(int pg, Ocorrencia *&aux);
    void print(int cond);
};

#endif