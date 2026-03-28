#ifndef ACTUADOR_H
#define ACTUADOR_H
#include <string>

/**
 * @brief Clase que representa un actuador.
 */
class Actuador {
private:
    std::string nombre;
    bool estado;
    int nivelPotencia;
public:
    Actuador(std::string nombre);
    void encender();
    void apagar();
    void ajustarPotencia(int nuevoNivel);
    std::string obtenerEstado() const;
};
#endif
