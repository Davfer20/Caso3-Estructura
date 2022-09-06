#include "Queue.h"
#include "Pila.h"

using namespace std;

int main()
{
    Queue<string> *colaNombres = new Queue<string>();

    Pila<int> *pila1 = new Pila<int>();

    colaNombres->enqueue(new string("el primer mensaje que meto"));
    colaNombres->enqueue(new string("el segundo mensaje que meto"));
    colaNombres->enqueue(new string("el tercero mensaje que meto"));

    int datosPila[] = {0, 4, 7};

    pila1->addPila(&datosPila[0]);
    pila1->addPila(&datosPila[1]);
    pila1->addPila(&datosPila[2]);

    int i = 0;
    while (i < 3)
    {
        cout << pila1->sacarPila()->getData() << endl;
        i++;
    }

    // numbersqueue->enqueue(&infija[0]);
    // numbersqueue->enqueue(&infija[1]);
    // numbersqueue->enqueue(&infija[2]);

    // while (!numbersqueue->isEmpty())
    // {
    //     numbersqueue->dequeue();
    // }

    while (!colaNombres->isEmpty())
    {
        cout << *colaNombres->dequeue() << endl;
    }
}