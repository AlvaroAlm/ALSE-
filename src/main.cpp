#include <iostream>
#include <vector>
#include "../include/Actuador.h"

int main() {
    std::vector<Actuador> actuadores;
    actuadores.push_back(Actuador("Motor"));
    actuadores.push_back(Actuador("Ventilador"));

    actuadores[0].encender();
    actuadores[0].ajustarPotencia(75);
    actuadores[1].encender();
    actuadores[1].ajustarPotencia(50);

    for (auto& a : actuadores)
        std::cout << a.obtenerEstado() << std::endl;

    return 0;
}
