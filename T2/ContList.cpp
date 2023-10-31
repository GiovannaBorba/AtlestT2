#include "ContList.hpp"

ContList::ContList() : head(nullptr), tail(nullptr) {}

void ContList::add(int pg)
{
    Ocorrencia *n = new Ocorrencia(1, pg);
    Ocorrencia *aux = nullptr;

    if (find(pg, aux))
    {
        aux->cont++;
    }
    else
    {
        if (!head || pg < head->pag)
        {
            n->next = head;
            head = n;
            if (!tail)
            {
                tail = n;
            }
        }
        else
        {
            Ocorrencia *ptr = head;
            while (ptr->next && ptr->next->pag < pg)
            {
                ptr = ptr->next;
            }
            n->next = ptr->next;
            ptr->next = n;

            if (!n->next)
            {
                tail = n;
            }
        }
    }
}

bool ContList::find(int pg, Ocorrencia *&aux)
{
    Ocorrencia *ptr = head;
    while (ptr)
    {
        if (ptr->pag == pg)
        {
            aux = ptr;
            return true;
        }
        ptr = ptr->next;
    }
    return false;
}

void ContList::print(int cond)
{
    Ocorrencia *ptr = head;
    switch (cond)
    {
    case 0:
        while (ptr != nullptr)
        {

            cout << ptr->pag;
            if (ptr->next)
                cout << ", ";
            ptr = ptr->next;
        }
        break;

    case 1:
        ptr = head;
        while (ptr != nullptr)
        {
            cout << endl << ptr->toString();
            ptr = ptr->next;
        }
        cout << endl;
        break;

    case 2:

        break;

    default:

        break;
    }
}
