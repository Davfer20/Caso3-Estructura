#include <iostream>
#include <ctime>
#include <string>
#include <stdlib.h>
#include <random>
#include "../Generic/List.h"

using namespace std;

int minutosRandom(string pStartHour, string pEndHour)
{
    string numeroInicio = pStartHour.substr(3, 4);
    string numeroFinal = pEndHour.substr(3, 4); // Toma los valores de hora del string
    int min = stoi(numeroInicio);
    int max = stoi(numeroFinal); // Convierte el string a entero

    srand(time(NULL)); // Inicializa numeros aleatorios
    int minFinal = rand();
    minFinal = min + rand() % (max + 1 - min);
    return minFinal;
}

int inclideAirline()
{
    int max;
    max = 5;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        int a = (0 + rand() % (max + 1 - 0));
        cout << "The random number is: " << a << endl;
    }
}

int randomGeneral(int min, int max)
{
    const int range_from = min;
    const int range_to = max;
    std::random_device rand_dev;
    std::mt19937 generator(rand_dev());
    std::uniform_int_distribution<int> distr(range_from, range_to);

    std::cout << distr(generator) << '\n';
}

// int main()
// {
//     List<int> *nuevaLista = new List<int>();
//     int datosPila[] = {2, 4, 7, 5, 6}; // 2,4,7,5,6

//     datosPila->enque(&datosPila[0]);
//     datosPila->enque(&datosPila[1]);
//     datosPila->enque(&datosPila[2]);
//     datosPila->enque(&datosPila[3]);
//     datosPila->enque(&datosPila[4]);
// }
