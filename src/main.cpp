#include <iostream>
#include <iomanip>
#include <includes/types.hpp>
#include <includes/matrix.hpp>
#include <includes/random.hpp>

int main() {
    int m, n;
    std::cout << "Please type count of rows (m): ";
    std::cin >> m;
    std::cout << "Please type count of columns (n): ";
    std::cin >> n;

    Matrix U(m, MatrixRow(n)); 
    fillRandomMatrix(U, -100, 100);

    std::cout << "== Matrix was filled a random numbers ==" << std::endl;

    std::cout << "Matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << std::setw(5) << U[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int sum = sumNegativeElements(U);
    int count = countNegativeElements(U);

    std::cout << "Sum of all negative elements: " << sum << std::endl;
    std::cout << "Count of all negative elements: " << count << std::endl;

    return 0;
}
