#ifndef RECU_2DO_PARCIAL_PP3_FARMACIA_H
#define RECU_2DO_PARCIAL_PP3_FARMACIA_H

#include <iostream>
#include "Empleado.h"
#include "Venta.h"
#include <list>

using namespace std;

class Farmacia {
private:
    string nombre;
    list<Empleado> listaEmpleados;
    list<Venta> listaVentas;

public:
    Farmacia(string nombre, list<Empleado> listaEmpleados, list<Venta> listaVentas);
    ~Farmacia();

    void eliminarVenta(int nroTicket);
    void informarVentasPorObraSocial(string obraSocial);

    /*------------- FALTO AGREGAR -----------*/
    void listadoEmpleado(); //punto I
    void borrarEmpleado(); //punto H
    void agregarEmpleado(); //punto G
    void mayorFacturacion(); //punto E
    void medicamentoVendidoSinRepetir(); //punto J

};

#endif //RECU_2DO_PARCIAL_PP3_FARMACIA_H
