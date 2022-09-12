#include "Conversion.h"

using namespace std;

int main()
{
    string frase = "(113+5)*2";

    ScanerTipo<string> *infija = new ScanerTipo<string>(frase);
    infija->decodeScaner();
}
