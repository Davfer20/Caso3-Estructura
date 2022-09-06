#include <Noded.h>
#include <iostream>

#ifndef PILA

#define PILA 1

template <class T>
class Pila
{
private:
    Node<T> *first;
    Node<T> *last;

public:
    Pila()
    {
        this->first = NULL;
        this->last = NULL;
    }

    void addPila(T *pDato)
    {
        Node<T> *nodePila = new Node<T>(pDato);
        if (last == NULL)
        {
            this->first = nodePila this->last = nodePila;
        }
        else
        {
            this->last->next = nodePila;
            this->last = last->next;
        }
    }

    Node<T> *sacarPila()
    {
        if (!empty())
        {
            Node<T> *actual = this->first;
            if (actual->next == NULL)
            {
                this->first = NULL;
                this->last = NULL;
                return actual;
            }
            else
            {
                while (actual->next->next != NULL)
                    actual = actual->next;
                Node *deleted = actual->next;
                actual->next = NULL;
                this->last = actual;
                return deleted
            }
        }
    }
};

#endif