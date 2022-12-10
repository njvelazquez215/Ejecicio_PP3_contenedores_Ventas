#include "Venta.h"

Venta::Venta(string nomCorMedicamento, int cantidad, float importe, int codigoVendedor, string fecha, int hora, int nroTicket, string obraSocial) {
    this->nombreComercialMedicamento = nomCorMedicamento;
    this->cantidad = cantidad;
    this->importe = importe;
    this->codigoVendedor = codigoVendedor;
    this->fecha = fecha;
    this->hora = hora;
    this->nroTicket = nroTicket;
    this->obraSocial = obraSocial;
}

Venta::~Venta() {}

void Venta::agregarMedicamentoParticular() {
    string nombre;
    cout << "Ingrese el nombre del medicamento: ";
    cin >> nombre;
    this->setAgregarNombreMedicamento(nombre);
}


