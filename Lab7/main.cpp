#include <iostream>
#include "stack.h"
#include "helper_functions.h"

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double u = 0.6; // Імовірність додавання елементу
    double n = 0.7; // Імовірність видалення елементу

    double averageMaxStackSize = calculateAverageMaxStackSize(u, n);

    std::cout << "Середній максимальний розмір стека: " << averageMaxStackSize << std::endl;

    return 0;
}