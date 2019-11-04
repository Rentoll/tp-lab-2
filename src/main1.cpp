#include <iostream>
#include "task1.h"

int main() {
    const int n = 6;
    int arr[n] = {-1, 2, -43, 34, 4, -4};
    msort(arr, n);
    for(int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    const int n2 = 6;
    double arr2[n2] = {-1.4, 0.0, -5.5, 1, 54.45, 54.449999};
    msort(arr2, n2);
    for(int i = 0; i < n2; i++)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;

    const int n3 = 6;
    char* arr3[n3] = {(char*)"dab1", (char*)"dab2", (char*)"d", (char*)"dab", (char*)"dabdabdab", (char*)"dabdab"};
    msort(arr3, n3);
    for(int i = 0; i < n3; i++)
        std::cout << arr3[i] << " ";
    return 0;
}
