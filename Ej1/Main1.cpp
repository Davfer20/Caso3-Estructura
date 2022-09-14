#include "Conversion.h"

using namespace std;
#include <iostream>

int main()
{
    string frase = "(113+54)*22";
    // string input;
    // cout << "Ingrese la expresion infija a convertir en postfija: ";
    // getline(cin, input);

    ScanerTipo<string> *operacion = new ScanerTipo<string>(frase);
    cout << operacion->decodeScaner() << endl;
}
