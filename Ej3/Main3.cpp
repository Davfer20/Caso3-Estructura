#include "Flight.h"
#include "../Generic/List.h"
#include <stdlib.h>
#include <random>

#include <iostream>

string aerolines[6] = {"American Airlines", "Spirit", "JetBlue", "Frontier", "Allegiant", "Emirates"};
string numerosVuelo[6] = {"VIN2230", "W2DUAD", "124JBA", "AA114", "TY6969", "DXR2D2"};

int randomGeneral(int min, int max)
{
    const int range_from = min;
    const int range_to = max;
    std::random_device rand_dev;
    std::mt19937 generator(rand_dev());
    std::uniform_int_distribution<int> distr(range_from, range_to);

    return distr(generator);
}

int horaLimites(string pTiempo) // Del tiempo 12:10 toma los primeros 2
{
    string numeroInicio = pTiempo.substr(0, 2);
    int min = stoi(numeroInicio);
    return min;
}

int minutoLimites(string pTiempo)
{
    string numeroInicio = pTiempo.substr(3, 4);
    int min = stoi(numeroInicio);
    return min;
}

int segundosLimites(string pTiempo)
{
    string numeroInicio = pTiempo.substr(6, 7);
    int min = stoi(numeroInicio);
    return min;
}

int getIntTimeValue(int pHora, int pMinutos, int pSegundos) // Conviete la hora en un numero de prioridad
{
    int resultado, retraso = 0;
    retraso = randomGeneral(0, 17);
    resultado = (pHora * 60 * 60) + (pMinutos * 60) + pSegundos + retraso;
    return resultado;
}

void fillFlights(List<Flight> *pLista, int repeticiones, string pStartHour, string pEndHour)
{
    for (int i = 0; i < repeticiones; i++)
    {
        int prioridad, hora, minutos, segundos, minHora, maxHora, minMin, maxMin, minSeg, maxSeg = 0;
        minHora = horaLimites(pStartHour);
        maxHora = horaLimites(pEndHour);
        minMin = minutoLimites(pStartHour);
        maxMin = minutoLimites(pEndHour);
        minSeg = segundosLimites(pStartHour);
        maxSeg = segundosLimites(pEndHour);

        hora = randomGeneral(minHora, maxHora);
        minutos = randomGeneral(minMin, maxMin);
        segundos = randomGeneral(minSeg, maxSeg);

        prioridad = getIntTimeValue(hora, minutos, segundos);

        int aerolinea = randomGeneral(0, 5);
        string marcaAvion = aerolines[aerolinea];

        int vueloPoci = randomGeneral(0, 5);
        string vuelo = numerosVuelo[vueloPoci];

        int pasajeros = randomGeneral(0, 20);

        Flight *avionNuevo = new Flight(prioridad, hora, minutos, segundos, marcaAvion, vuelo, pasajeros);
        pLista->enque(avionNuevo, prioridad);
    }
}

int main()
{
    List<Flight> *aviones = new List<Flight>();
    fillFlights(aviones, 4, "01:00:30", "03:20:45"); // Se pone cantidad de repeticiones y horas limites
    int size = aviones->getSize();
    int contador = 0;
    // Aca se altera con 2 pistas de prioridad
    for (int i = 0; i < size; i++)
    {
        if (contador == 1)
        {
            Flight *currentPlane = aviones->dequeue();
            cout << "---------------Creacion De Avion Nuevo--------------------" << endl;
            cout << "-------------------------Pista1---------------------------" << endl;
            cout << "Prioridad: " << currentPlane->getPrioridad() << endl;
            cout << "Hora: " << currentPlane->getHora() << endl;
            cout << "Minutos: " << currentPlane->getMinutos() << endl;
            cout << "Aerolinea: " << currentPlane->getAerolinea() << endl;
            cout << "Numero de vuelo: " << currentPlane->getVuelo() << endl;
            cout << "Cantidad de Pasajeros: " << currentPlane->getPasajeros() << endl;
            contador--;
        }
        else
        {
            Flight *pista2 = aviones->dequeue();
            cout << "---------------Creacion De Avion Nuevo--------------------" << endl;
            cout << "-------------------------Pista2---------------------------" << endl;
            cout << "Prioridad: " << pista2->getPrioridad() << endl;
            cout << "Hora: " << pista2->getHora() << endl;
            cout << "Minutos: " << pista2->getMinutos() << endl;
            cout << "Aerolinea: " << pista2->getAerolinea() << endl;
            cout << "Numero de vuelo: " << pista2->getVuelo() << endl;
            cout << "Cantidad de Pasajeros: " << pista2->getPasajeros() << endl;
            contador++;
        }
    }
}
