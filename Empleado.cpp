#include "Empleado.h"

Empleado::Empleado(string nombre, string apellido, int dni, list<Venta> listaVentas) : listaVentas(listaVentas){
    this->nombre = nombre;
    this->apellido = apellido;
    this->dni = dni;

}

Empleado::~Empleado(){}
