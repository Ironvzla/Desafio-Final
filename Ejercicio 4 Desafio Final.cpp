#include <iostream>
#include <string>
#include <iomanip> // Para formatear la salida

const int NUM_ESTUDIANTES = 10;
const int NUM_CORTES = 3;

// Función para calcular la nota final
double calcularNotaFinal(double notasCortes[NUM_CORTES]) {
    // Asumiendo que los cortes tienen pesos diferentes:
    return 0.3 * notasCortes[0] + 0.4 * notasCortes[1] + 0.3 * notasCortes[2];
}

int main() {
    std::string nombres[NUM_ESTUDIANTES];
    double notasCortes[NUM_ESTUDIANTES][NUM_CORTES];
    double notasFinales[NUM_ESTUDIANTES];

    // Leer los nombres de los estudiantes
    for (int i = 0; i < NUM_ESTUDIANTES; ++i) {
        std::cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        std::cin >> nombres[i];

        // Leer las notas de los cortes
        for (int j = 0; j < NUM_CORTES; ++j) {
            std::cout << "Ingrese la nota del corte " << j + 1 << " para " << nombres[i] << ": ";
            std::cin >> notasCortes[i][j];
        }

        // Calcular nota final
        notasFinales[i] = calcularNotaFinal(notasCortes[i]);
    }

    // Mostrar la tabla
    std::cout << std::setw(15) << "Estudiante" << std::setw(15) << "Corte 1" << std::setw(15)
              << "Corte 2" << std::setw(15) << "Corte 3" << std::setw(15) << "Nota Final"
              << std::endl;
    for (int i = 0; i < NUM_ESTUDIANTES; ++i) {
        std::cout << std::setw(15) << nombres[i];
        for (int j = 0; j < NUM_CORTES; ++j) {
            std::cout << std::setw(15) << notasCortes[i][j];
        }
        std::cout << std::setw(15) << notasFinales[i] << std::endl;
    }

    return 0;
}

