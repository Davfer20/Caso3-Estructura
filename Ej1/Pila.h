#include "List.h"
#include <iostream>

#ifndef PILA

#define PILA 1

template <class T>
class Pila
{
private:
    List<T> *pilaList;

public:
    Pila()
    {
        pilaList = NULL;
        pilaList = new List<T>();
    }

    void push(T *pDato)
    {
        pilaList->insert(0, pDato);
    }

    T *pop()
    {
        T *result = NULL;
        if (!pilaList->isEmpty())
        {
            result = pilaList->find(0);
            pilaList->remove(0);
        }
        return result;
    }

    bool empty()
    {
        return pilaList->isEmpty();
    }
};

#endif