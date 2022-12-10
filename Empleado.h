#ifndef RECU_2DO_PARCIAL_PP3_EMPLEADO_H
#define RECU_2DO_PARCIAL_PP3_EMPLEADO_H

#include "iostream"
#include "Venta.h"
#include <list>
using namespace std;

class Empleado {
private:
    string nombre;
    string apellido;
    int dni;
    list<Venta> listaVentas;


public:
    Empleado(string nombre, string apellido, int dni, list<Venta> listaVentas);
    ~Empleado();

    string getNombre();
    string getApellido();
    int getDni();
    list<Venta> *getListaVentas();

};

inline string Empleado::getNombre() {
    return nombre;
}

inline string Empleado::getApellido() {
    return apellido;
}

inline int Empleado::getDni() {
    return dni;
}

inline list<Venta> *Empleado::getListaVentas() {
    return &listaVentas;
}

#endif //RECU_2DO_PARCIAL_PP3_EMPLEADO_H
