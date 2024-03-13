#include "helper_functions.h"
#include "stack.h"

#include <cstdlib>
#include <ctime>

double calculateAverageMaxStackSize(double u, double n) {
    srand(time(nullptr)); // ��������� ���������� �����

    double totalStackSize = 0;
    int trials = 1000; // ʳ������ �����

    for (int i = 0; i < trials; ++i) {
        Stack stack;
        int maxStackSize = 0;

        while ((double)rand() / RAND_MAX <= u) { 
            stack.push(1);
            maxStackSize = std::max(maxStackSize, (int)stack.size()); // ��������� ���� ������ �����
        }

        while (!stack.isEmpty() && (double)rand() / RAND_MAX <= n) { // ���� ���� �� ������� �������� ������� ����� !, ! = ��
            stack.pop();
        }

        totalStackSize += maxStackSize; // ��������� ���� ������ �����
    }

    return totalStackSize / trials;
}
