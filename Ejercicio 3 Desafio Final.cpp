#include <iostream>

// Función para determinar si un número es positivo
bool esPositivo(int num) {
    return num >= 0;
}

int main() {
    const int TAMANO = 10;
    int numeros[TAMANO];
    int sumaPositivos = 0;
    int sumaNegativos = 0;
    int contadorPositivos = 0;
    int contadorNegativos = 0;

    // Leer los números desde el teclado
    for (int i = 0; i < TAMANO; ++i) {
        std::cout << "Ingresa el número " << i + 1 << ": ";
        std::cin >> numeros[i];

        if (esPositivo(numeros[i])) {
            sumaPositivos += numeros[i];
            ++contadorPositivos;
        } else {
            sumaNegativos += numeros[i];
            ++contadorNegativos;
        }
    }

    // Calcular las medias
    double mediaPositivos = static_cast<double>(sumaPositivos) / contadorPositivos;
    double mediaNegativos = static_cast<double>(sumaNegativos) / contadorNegativos;

    // Mostrar los resultados
    std::cout << "Media de los valores positivos: " << mediaPositivos << std::endl;
    std::cout << "Media de los valores negativos: " << mediaNegativos << std::endl;

    return 0;
}
