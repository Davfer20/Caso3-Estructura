#include "../Generic/Pila.h"
#include <ctype.h>
#include <iostream>

#ifndef POSTFIJO
#define POSTFIJO

// Este fue una prueba pero no me sirvio por varias cosas
using namespace std;
template <class T>
class Postfijo
{
private:
    bool isOperator(char);
    int precedence(char);
    string operacion;
    Pila<string> *infijaList;

public:
    Postfijo(string pOperacion)
    {
        this->isOperator = false;
        this->precedence = false;
        this->operacion = pOperacion;
    }

    bool isOperator(char p)
    {
        if (isdigit(p) != true)
        {
            return true;
        }
        return false;
    }

    int precedence(char p)
    {
        if (p == '+' or p == '-')
        {
            return 1;
        }
        else if (p == '*' or p == '/')
        {
            return 2;
        }
        else if (p == '^')
        {
            return 3;
        }
        else
        {
            return 0;
        }
    }

    string decodeScaner(string pOperacion) //"(113+5)*2"
    {
        string postfijo;
        Pila<char> *operadores = new Pila<char>();
        char operador;

        for (int i = 0; i < pOperacion.size(); i++)
        {
            try
            {

                if (isOperator(operacion[i])) // Verificar si el simbolo es operador
                {
                    while (!operadores->empty() && (operador = operadores->top() != '(') && precedence(operacion[i] <= precedence(operador)))
                    {
                        postfijo += operacion[i];
                        operadores->pop();
                    }
                    operadores->push(opeacion[i]);
                }

                else if (operacion[i] == '(')
                {
                    operadores->push(operacion[i])
                }
                else if (operacion[i] == ')')
                {
                    while ((operador = operadores->top()) != '(')
                    {
                        postfijo += operador;
                        operadores->pop();
                    }
                    operadores.pop();
                }
                else
                {
                    postfijo += operacion[i];
                }
            }
            catch ()
            {
                cout << "La operacion infija tiene una sintaxis invalida" << endl;
                return "";
            }
        }
        while (!operadores->empty())
        {
            Postfijo += operadores->Top();
            operadores->pop();
        }
        return postfijo

            return 0;
    }
};

#endif
