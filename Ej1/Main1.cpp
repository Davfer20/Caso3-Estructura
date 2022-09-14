#include "Conversion.h"
#include "Postfijo.h"

using namespace std;
#include <iostream>

int main()
{

    string input;
    cout << "Ingrese la expresion infija a convertir en postfija: ";
    getline(cin, input);

    // Se evalua el string en tokens. Los mete en una lista
    ScanerTipo<string> *operacion = new ScanerTipo<string>(input);
    cout << operacion->decodeScaner() << endl;

    // Se hace el procedimiento de cambio pero la sintaxis no me dejo
    Postfijo<string> *postfijo = new Postfijo<string>;
    (string("12(23+33)*3"));
}
