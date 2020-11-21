#include "utils.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

int randint(int max) {
    int result;
    std::srand(
        std::time(nullptr));  // use current time as seed for random generator

    do {
        result = 1 + std::rand() /
                         ((RAND_MAX + 1u) / max);  // Note: 1+rand()%max is biased
    } while (result > max);

    return result;
}
