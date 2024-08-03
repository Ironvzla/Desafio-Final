#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int FILAS = 4;
    const int COLUMNAS = 5;
    int matriz[FILAS][COLUMNAS];
    int sumaFilas[FILAS] = {0};
    int sumaColumnas[COLUMNAS] = {0};
    int sumaTotal = 0;

    // Generar números aleatorios entre 0 y 9
    srand(time(nullptr));
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            matriz[i][j] = rand() % 10;
            sumaFilas[i] += matriz[i][j];
            sumaColumnas[j] += matriz[i][j];
        }
    }

    // Calcular la suma total
    for (int i = 0; i < FILAS; ++i) {
        sumaTotal += sumaFilas[i];
    }

    // Mostrar la matriz y las sumas
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            std::cout << matriz[i][j] << "\t";
        }
        std::cout << "Suma fila " << i + 1 << ": " << sumaFilas[i] << std::endl;
    }

    for (int j = 0; j < COLUMNAS; ++j) {
        std::cout << "----\t";
    }
    std::cout << std::endl;

    for (int j = 0; j < COLUMNAS; ++j) {
        std::cout << sumaColumnas[j] << "\t";
    }
    std::cout << "Suma total: " << sumaTotal << std::endl;

    return 0;
}
