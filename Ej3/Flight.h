#include <iostream>
#include <string>
#include <ctime>
#include <cmath>

using namespace std;

class Flight
{

private:
    time_t flightTime;
    string aerolinea;
    string numVuelo;
    int cantidadPasajeros;
    int prioridad;
    int hora;
    int minutos;
    int segundos;

public:
    Flight(int pPrioridad, int pHour, int pMinutes, int pSegundos, string pAerolina, string pVuelo, int pCantidadPasajeros)
    {
        this->prioridad = pPrioridad;
        this->aerolinea = pAerolina;
        this->numVuelo = pVuelo;
        this->cantidadPasajeros = pCantidadPasajeros;
        this->hora = pHour;
        this->minutos = pMinutes;
        this->segundos = pSegundos;
    }

    int getPrioridad()
    {
        return prioridad;
    }

    int getHora()
    {
        return hora;
    }

    int getMinutos()
    {
        return minutos;
    }

    int getSegundos()
    {
        return segundos;
    }

    string getAerolinea()
    {
        return aerolinea;
    }

    string getVuelo()
    {
        return numVuelo;
    }

    int getPasajeros()
    {
        return cantidadPasajeros;
    }

    void changeFlightTime(int pHora, int pMinutos, int pSegundos)
    {
        this->hora = pHora;
        this->minutos = pMinutos;
        this->segundos = pSegundos;
    }

    char flightTimeString()
    {
        time_t ttime = time(NULL);
        return ttime;
    }

    int getIntTimeValue() // Conviete la hora en un numero de prioridad
    {
        time_t now = time(0);
        struct tm tstruct = *localtime(&now);

        float value = tstruct.tm_hour + tstruct.tm_min / 60.0 + tstruct.tm_sec / 3600.0;
        int res = round(value);
        return res;
    }
};