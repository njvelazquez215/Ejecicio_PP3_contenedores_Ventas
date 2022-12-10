#include "Farmacia.h"

Farmacia::Farmacia(string nombre, list<Empleado> listaEmpleados, list<Venta> listaVentas) : listaEmpleados(listaEmpleados), listaVentas(listaVentas) {
    this->nombre = nombre;
}

Farmacia::~Farmacia() {}

void Farmacia::eliminarVenta(int nroTicket) {
    for (list<Venta>::iterator it = listaVentas.begin(); it != listaVentas.end(); it++) {
        if (it->getNroTicket() == nroTicket) {
            listaVentas.erase(it);
            break;
        }
    }
}

void Farmacia::informarVentasPorObraSocial(std::string obraSocial) {
    float cantidad = 0;
    for (list<Venta>::iterator it = listaVentas.begin(); it != listaVentas.end(); it++) {
        if (it->getObraSocial() == "si") {
            cantidad++;
        }
    }
    float total = listaVentas.size();
    cantidad = cantidad/total;
    cout << "El porcentaje de ventas por obra social es: " << cantidad << endl;
}

/*------------- FALTO AGREGAR -----------*/ //PARA EL PUNTO I
void Farmacia::listadoEmpleado() {
    for (list<Empleado>::iterator it = listaEmpleados.begin(); it != listaEmpleados.end(); it++) {
        cout << "Nombre: " << it->getNombre() << endl;
        cout << "Apellido: " << it->getApellido() << endl;
        cout << "DNI: " << it->getDni() << endl;
        cout << "------------------------" << endl;
    }
}

void Farmacia::borrarEmpleado() {
    int dni;
    cout << "Ingrese el DNI del empleado a borrar: ";
    cin >> dni;
    for (list<Empleado>::iterator it = listaEmpleados.begin(); it != listaEmpleados.end(); it++) {
        if (it->getDni() == dni) {
            listaEmpleados.erase(it);
            break;
        }
    }
}

void Farmacia::agregarEmpleado() {
    string nombre, apellido;
    int dni;
    cout << "Ingrese el nombre del empleado: ";
    cin >> nombre;
    cout << "Ingrese el apellido del empleado: ";
    cin >> apellido;
    cout << "Ingrese el DNI del empleado: ";
    cin >> dni;
    Empleado empleado(nombre, apellido, dni, listaVentas);
    listaEmpleados.push_back(empleado);
}

void Farmacia::mayorFacturacion() {
    float mayor = 0;
    float total = 0;
    int nroTicket = 0;
    for (list<Venta>::iterator it = listaVentas.begin(); it != listaVentas.end(); it++) {
        total = 0;
        total = it->getImporte() * it->getCantidad();
        if (total > mayor) {
            mayor = total;
            nroTicket = it->getNroTicket();
        }
    }
    cout << "La venta con mayor facturacion es el ticket nro: " << nroTicket << " con un total de " << mayor << endl;
}

void Farmacia::medicamentoVendidoSinRepetir() {
    string medicamento;
    int cantidad = 0;
    string sinRepetir = "";
    for (list<Venta>::iterator it = listaVentas.begin(); it != listaVentas.end(); it++) {
        medicamento = it->getNomCorMedicamento();
        for (list<Venta>::iterator it2 = listaVentas.begin(); it2 != listaVentas.end(); it2++) {
            if (it2->getNomCorMedicamento() == medicamento) {
                cantidad++;
            }
        }
        if (cantidad == 1) {
            sinRepetir = it->getNomCorMedicamento();
        }
    }
    cout << "El medicamento sin repetir es: " << sinRepetir << endl;
}
