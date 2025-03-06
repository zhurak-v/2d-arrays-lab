#include <random>
#include <includes/random.hpp>
#include <includes/types.hpp>

void fillRandomMatrix(Matrix& matrix, int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(min, max);

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            matrix[i][j] = dist(gen);
        }
    }
}
