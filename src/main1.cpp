#include <iostream>
#include "task1.h"

int main() {
    int n = 6;
    int arr[n] = {9, 1, 4, 5, -1, -45};
    std::cout << "original array: ";
    for(int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl << "sorted array: ";
    msort(arr, n);
    for(int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl << "===========================" << std::endl;

    int n2 = 6;
    double arr2[n2] = {0.0, 14.1442, 14.1443, -1, -12.43, 5.99999999999} ;
    std::cout << "original array: ";
    for(int i = 0; i < n2; i++)
        std::cout << arr2[i] << " ";
    std::cout << std::endl << "sorted array: ";
    msort(arr2, n);
    for(int i = 0; i < n2; i++)
        std::cout << arr2[i] << " ";
    std::cout << std::endl << "===========================" << std::endl;

    int n3 = 6;
    char* arr3[n3] {(char*)"dabdabdab", (char*)"dabdab", (char*)"dab", (char*)"dabdab", (char*)"lol", (char*)"kek"};
    std::cout << "original array: ";
    for(int i = 0; i < n3; i++)
        std::cout << arr3[i] << " ";
    std::cout << std::endl << "sorted array: ";
    msort(arr3, n3);
    for(int i = 0; i < n3; i++)
        std::cout << arr3[i] << " ";
    std::cout << std::endl << "===========================" << std::endl;
    return 0;
}
