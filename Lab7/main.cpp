#include <iostream>
#include "stack.h"
#include "helper_functions.h"

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double u = 0.6; // ��������� ��������� ��������
    double n = 0.7; // ��������� ��������� ��������

    double averageMaxStackSize = calculateAverageMaxStackSize(u, n);

    std::cout << "������� ������������ ����� �����: " << averageMaxStackSize << std::endl;

    return 0;
}