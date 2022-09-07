#include "Node.h"
#include <iostream>

#ifndef PILA

#define PILA 1

template <class T>
class Pila
{
private:
    Node<T> *first;
    Node<T> *last;
    Node<T> *errase;
    int quantity;

public:
    Pila()
    {
        this->first = NULL;
        this->last = NULL;
        this->errase = NULL;
        this->quantity = 0;
    }

    void addPila(T *pDato)
    {
        Node<T> *nodePila = new Node<T>(pDato);
        if (last == NULL)
        {
            this->first = nodePila;
            this->last = nodePila;
        }
        else
        {
            this->last->setNext(nodePila);
        }
        quantity++;
    }

    Node<T> *sacarPila()
    {
        if (!empty())
        {
            quantity--;
            Node<T> *actual = this->first;
            if (actual->getNext() == NULL)
            {
                this->first = NULL;
                this->last = NULL;
                return actual;
            }
            else
            {
                while (actual->getNext()->getNext() != NULL)
                    actual = actual->getNext();
                this->last = actual->getData();

                this->errase = actual->getNext();
                actual->getNext() = NULL;
                return errase;
            }
        }
    }

    bool empty()
    {
        return !quantity;
    }
};

#endif