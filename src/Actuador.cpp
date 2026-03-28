#include "../include/Actuador.h"

Actuador::Actuador(std::string nombre) : nombre(nombre), estado(false), nivelPotencia(0) {}

void Actuador::encender() { estado = true; }

void Actuador::apagar() { estado = false; }

void Actuador::ajustarPotencia(int nuevoNivel) {
    if (nuevoNivel >= 0 && nuevoNivel <= 100)
        nivelPotencia = nuevoNivel;
}

std::string Actuador::obtenerEstado() const {
    return nombre + ": " + (estado ? "ON" : "OFF");
}
