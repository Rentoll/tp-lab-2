#include <iostream>
#include "task2.h"

template<class T>
T gen(){
    return 0;
}

int main() {
    const int n = 10;
    int* arr;
    arr = createArr<int, n>(&gen);
    for (size_t i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    return 0;
}
