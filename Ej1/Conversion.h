#include "../Generic/List.h"
#include <ctype.h>
#include <iostream>

using namespace std;
template <class T>

class ScanerTipo
{
private:
    string operacion;
    List<string> *infijaList;

public:
    ScanerTipo(string pString)
    {
        this->operacion = pString;
        infijaList = new List<string>();
    }

    string decodeScaner() //"(113+5)*2"
    {
        for (int i = 0; i < operacion.size(); i++)
        {
            if (isdigit(operacion[i]) == true) // Determina si es numero
            {
                string suma = "";
                suma += operacion[i];
                try
                {
                    while (isdigit(operacion[i + 1]) != false)
                    {
                        suma += operacion[i + 1];

                        //  Esto es si un numero tiene mas de un caracter
                        i++;
                    }
                }
                catch (string suma)
                {
                    suma = suma;
                }
                string *ptrSuma;
                ptrSuma = &suma;
                infijaList->enque(ptrSuma, 0);
            }
            else
            {
                string suma(1, operacion[i]);
                string *ptrSuma;
                ptrSuma = &suma;
                infijaList->enque(ptrSuma, 0);

                // Aca puedo ordenarlos o solo imprimirlos

                // cout << operacion[i] << endl;
            };
            cout << *infijaList->dequeue() << endl;
        }

        return 0;
    }
};
