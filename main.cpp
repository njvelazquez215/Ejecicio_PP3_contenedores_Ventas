#include <iostream>
#include "Venta.h"
#include "Empleado.h"
#include <list>
#include "Farmacia.h"

using namespace std;

int main() {

    Venta venta1("Paracetamol", 2, 100, 123, "12/12/2022", 1200, 1,"si");
    Venta venta2("", 3, 200, 123, "12/12/2022", 1200, 2,"no");

    venta1.agregarMedicamentoParticular(); //punto b

    Venta venta3("Mejoralito", 3, 100, 155, "12/12/2022", 1200, 3,"si");
    Venta venta4("Paracetamol", 5, 150, 155, "12/12/2022", 1200, 4,"si");

    list<Venta> listaVentas1;
    listaVentas1.push_back(venta1);
    listaVentas1.push_back(venta2);

    list<Venta> listaVentas2;
    listaVentas2.push_back(venta3);
    listaVentas2.push_back(venta4);

    Empleado empleado1("Juan", "Perez", 12345678, listaVentas1);
    Empleado empleado2("Maria", "Gomez", 87654321, listaVentas2);

    list<Empleado> listaEmpleados;
    listaEmpleados.push_back(empleado1);
    listaEmpleados.push_back(empleado2);

    /* Esto no estava en las primeras fotos que te mandamos
     * ---------------------------------------------------*/

    Venta venta5("Paracetamol", 10, 500, 123, "12/12/2022", 1200, 5,"si");
    list<Venta> listaIndividual; //para punto F
    listaIndividual.push_back(venta5);

    list<Venta> listaVentaTotal;
    listaVentaTotal.push_back(venta1);
    listaVentaTotal.push_back(venta2);
    listaVentaTotal.push_back(venta3);
    listaVentaTotal.push_back(venta4);
    /* ---------------------------------------------------*/

    Farmacia farmacia1("Farmacia 1", listaEmpleados, listaVentaTotal);

    farmacia1.eliminarVenta(4); //punto c

    farmacia1.informarVentasPorObraSocial("si"); //punto d

    /*------------- FALTO AGREGAR -----------*/
    farmacia1.listadoEmpleado(); //punto I
    farmacia1.borrarEmpleado(); //punto H
    farmacia1.agregarEmpleado(); //punto G

    farmacia1.mayorFacturacion(); //punto E
    farmacia1.medicamentoVendidoSinRepetir(); //punto J


    return 0;
}
