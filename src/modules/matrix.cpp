#include <includes/matrix.hpp>

int sumNegativeElements(const std::vector<std::vector<int>>& matrix) {
    int sum = 0;
    for (const auto& row : matrix) {
        for (int el : row) {
            if (el < 0) {
                sum += el;
            }
        }
    }
    return sum;
}

int countNegativeElements(const std::vector<std::vector<int>>& matrix) {
    int count = 0;
    for (const auto& row : matrix) {
        for (int el : row) {
            if (el < 0) {
                count++;
            }
        }
    }
    return count;
}
