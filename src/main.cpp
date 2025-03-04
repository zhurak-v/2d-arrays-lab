#include <iostream>
#include <vector>
#include <iomanip>
#include <includes/matrix.hpp>
#include <includes/random.hpp>

int main() {
    int m, n;
    std::cout << "Please type count of rows (m): ";
    std::cin >> m;
    std::cout << "Please type count of columns (n): ";
    std::cin >> n;

    std::vector<std::vector<int>> U(m, std::vector<int>(n));
    fillRandomMatrix(U, -100, 100);

    std::cout << "Matrix:\n";
    for (const auto& row : U) {
        for (int el : row) {
            std::cout << std::setw(5) << el << " ";
        }
        std::cout << std::endl;
    }

    int sum = sumNegativeElements(U);
    int count = countNegativeElements(U);

    std::cout << "Sum of all negative elements: " << sum << std::endl;
    std::cout << "Count of all negative elements: " << count << std::endl;

    return 0;
}
