#include <includes/matrix.hpp>

int sumNegativeElements(const std::vector<std::vector<int>>& matrix) {
    int sum = 0;
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            if (matrix[i][j] < 0) {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int countNegativeElements(const std::vector<std::vector<int>>& matrix) {
    int count = 0;
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            if (matrix[i][j] < 0) {
                count++;
            }
        }
    }
    return count;
}
