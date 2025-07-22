#include "../exercise.h"
#include <numeric>
#include <iterator>

// READ: `std::accumulate` <https://zh.cppreference.com/w/cpp/algorithm/accumulate>

int main(int argc, char **argv) {
    using DataType = float;
    int shape[]{1, 3, 224, 224};
    int size = std::accumulate(std::begin(shape), std::end(shape), 4, [](int acc, int b) {
        return acc * b;
    });
    ASSERT(size == 602112, "4x1x3x224x224 = 602112");
    return 0;
}
