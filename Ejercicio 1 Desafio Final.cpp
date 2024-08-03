#include <iostream>
#include <cstdlib>
#include <ctime>

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int TAMANO = 20;
    int numerosAleatorios[TAMANO];
    int numerosPrimos[TAMANO];
    int contadorPrimos = 0;

    // Generar números aleatorios entre 0 y 99
    srand(time(nullptr));
    for (int i = 0; i < TAMANO; ++i) {
        numerosAleatorios[i] = rand() % 100;
    }

    // Identificar y almacenar los números primos
    for (int i = 0; i < TAMANO; ++i) {
        if (esPrimo(numerosAleatorios[i])) {
            numerosPrimos[contadorPrimos] = numerosAleatorios[i];
            ++contadorPrimos;
        }
    }

    // Mostrar los dos arrays
    std::cout << "Números aleatorios generados:" << std::endl;
    for (int i = 0; i < TAMANO; ++i) {
        std::cout << numerosAleatorios[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Números primos encontrados:" << std::endl;
    for (int i = 0; i < contadorPrimos; ++i) {
        std::cout << numerosPrimos[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
