#include "../Generic/Pila.h"
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
        infijaList = new List<T>();
    }

    string decodeScaner()
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
                        suma += operacion[i];
                        i++;
                    }
                }
                catch (int suma)
                {
                    suma = suma;
                }

                cout << suma << endl;
            }
        }
        return 0;
    }
};
