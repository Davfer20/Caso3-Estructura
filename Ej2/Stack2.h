#include "../Generic/List.h"
#include <iostream>

#ifndef STACK2

#define STACK2 1

template <class T>
class Stack2
{
private:
    List<T> *pilaList;
    List<T> *pilaList2;

public:
    Stack2()
    {
        pilaList = NULL;
        pilaList = new List<T>();

        pilaList2 = NULL;
        pilaList2 = new List<T>();
    }

    void enque(T *pDato)
    {
        pilaList->insert(0, pDato);
    }

    T *dequeue()
    {
        T *result = NULL;
        while (!pilaList->isEmpty())
        {
            result = pilaList->find(0);
            pilaList2->insert(0, result);
            pilaList->remove(0);
        }
        result = pilaList2->find(0);
        pilaList2->remove(0);
        return result;
    }

    bool empty()
    {
        return pilaList->isEmpty();
    }
};

#endif