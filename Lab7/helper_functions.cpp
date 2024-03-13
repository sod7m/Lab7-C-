#include "helper_functions.h"
#include "stack.h"

#include <cstdlib>
#include <ctime>

double calculateAverageMaxStackSize(double u, double n) {
    srand(time(nullptr)); // генератор випадкових чисел

    double totalStackSize = 0;
    int trials = 1000; // Кількість спроб

    for (int i = 0; i < trials; ++i) {
        Stack stack;
        int maxStackSize = 0;

        while ((double)rand() / RAND_MAX <= u) { 
            stack.push(1);
            maxStackSize = std::max(maxStackSize, (int)stack.size()); // оновлення макс розміру стеку
        }

        while (!stack.isEmpty() && (double)rand() / RAND_MAX <= n) { // якщо стек не порожній значення істинне через !, ! = не
            stack.pop();
        }

        totalStackSize += maxStackSize; // оновлення макс розміру стеку
    }

    return totalStackSize / trials;
}
