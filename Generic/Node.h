#include <iostream>
#ifndef NODE

#define NODE 1

using namespace std;

template <class T>
class Node
{
private:
    T *data;
    int priority;
    Node *prev;
    Node *next;

public:
    Node()
    {
        data = NULL;
        next = NULL;
        prev = NULL;
        priority = 0;
    }

    Node(T *pData)
    {
        this->data = pData;
        this->priority = 0;
        prev = NULL;
        next = NULL;
    }

    Node(T *pData, int pPriority)
    {
        this->data = pData;
        this->priority = pPriority;
        prev = NULL;
        next = NULL;
    }

    T *getData()
    {
        return data;
    }

    int getPriority()
    {
        return priority;
    }

    Node *getNext()
    {
        return next;
    }

    Node *getPrevious()
    {
        return prev;
    }

    void setNext(Node *pValue)
    {
        this->next = pValue;
    }

    void setPrevious(Node *pValue)
    {
        this->prev = pValue;
    }
};

#endif