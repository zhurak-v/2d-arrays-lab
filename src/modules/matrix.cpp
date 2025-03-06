#include <includes/matrix.hpp>
#include <includes/types.hpp>

int sumNegativeElements(const Matrix& matrix) {
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

int countNegativeElements(const Matrix& matrix) {
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
