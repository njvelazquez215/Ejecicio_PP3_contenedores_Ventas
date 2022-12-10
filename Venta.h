#ifndef RECU_2DO_PARCIAL_PP3_VENTA_H
#define RECU_2DO_PARCIAL_PP3_VENTA_H

#include "iostream"
using namespace std;

class Venta {
private:
    string nombreComercialMedicamento;
    int cantidad;
    float importe;
    int codigoVendedor;
    string fecha;
    int hora;
    int nroTicket;
    string obraSocial;

public:
    Venta(string nomCorMedicamento, int cantidad, float importe, int codigoVendedor, string fecha, int hora, int nroTicket, string obraSocial);
    ~Venta();

    string getNomCorMedicamento();
    int getCantidad();
    float getImporte();
    int getCodigoVendedor();
    string getFecha();
    int getHora();
    int getNroTicket();
    string getObraSocial();

    void setAgregarNombreMedicamento(string nombre);

    void agregarMedicamentoParticular();

};

inline string Venta::getNomCorMedicamento() {
    return nombreComercialMedicamento;
}

inline int Venta::getCantidad() {
    return cantidad;
}

inline float Venta::getImporte() {
    return importe;
}

inline int Venta::getCodigoVendedor() {
    return codigoVendedor;
}

inline string Venta::getFecha() {
    return fecha;
}

inline int Venta::getHora() {
    return hora;
}

inline int Venta::getNroTicket() {
    return nroTicket;
}

inline string Venta::getObraSocial() {
    return obraSocial;
}

inline void Venta::setAgregarNombreMedicamento(string nombre) {
    this->nombreComercialMedicamento = nombre;
}

#endif //RECU_2DO_PARCIAL_PP3_VENTA_H
