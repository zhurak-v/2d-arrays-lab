#include <includes/random.hpp>
#include <random>

void fillRandomMatrix(std::vector<std::vector<int>>& matrix, int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(min, max);

    for (auto& row : matrix) {
        for (auto& el : row) {
            el = dist(gen);
        }
    }
}
