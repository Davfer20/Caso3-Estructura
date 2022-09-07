#include "Queue.h"
#include "Pila.h"
#include "Conversion.h"

using namespace std;

int main()
{
    // string frase = "(10+5)*2";

    Pila<int> *pila1 = new Pila<int>();

    int datosPila[] = {2, 4, 7};

    pila1->push(&datosPila[0]);
    pila1->push(&datosPila[1]);
    pila1->push(&datosPila[2]);

    while (!pila1->empty())
    {
        cout << *pila1->pop() << endl;
    }
}