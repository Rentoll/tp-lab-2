#include <iostream>
#include <cstring>
#include "task3.h"


template<class T>T change(T val) {
	return val + 1;
}

template<>char* change(char* val) {
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i] + 1;
	return val;
}

int main() {
	const size_t n = 6;
	char arr[n]{ '1', '2', '3', '4', '5', '6' };
	map<char, n>(arr, change);
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
