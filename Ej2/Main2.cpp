#include "Stack2.h"
#include <iostream>

using namespace std;

int main()
{
    Stack2<int> *newQueue = new Stack2<int>();

    int datosPila[] = {2, 4, 7, 5, 6}; // 2,4,7,5,6

    newQueue->enque(&datosPila[0]);
    newQueue->enque(&datosPila[1]);
    newQueue->enque(&datosPila[2]);
    newQueue->enque(&datosPila[3]);
    newQueue->enque(&datosPila[4]);
    newQueue->enque(&datosPila[3]);

    cout << *newQueue->dequeue() << endl;
    cout << *newQueue->dequeue() << endl;
    cout << *newQueue->dequeue() << endl;
    cout << *newQueue->dequeue() << endl;
    cout << *newQueue->dequeue() << endl;
}