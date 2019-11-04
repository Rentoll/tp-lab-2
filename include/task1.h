#ifndef TASK1_H
#define TASK1_H

#include <cstring>

template <class T>
bool compare(T &a, T &b) {
    return a < b;
}

template<>
bool compare(char* &a, char* &b) {
    return strlen(a) < strlen(b);
}


template <class T>
void msort(T array[], size_t n) {
    if (n < 2) {
        return;
    }
    msort(array, n/2);
    msort((array + n/2), (n - n/2));
    int left = 0, right = 0;
    T *tmp = new T[n];
    while(left < (n/2) && right < (n - n/2) ){
        if(compare(array[left], array[(n/2) + right])){
            tmp[left + right] = array[left];
            left++;
        }
        else {
            tmp[left + right] = array[n/2 + right];
            right++;
        }
    }

    while (left < (n/2)){
        tmp[left + right] = array[left];
        left++;
    }
    while ((n/2 + right) < n){
        tmp[left + right] = array[n/2 + right];
        right++;
    }

    for (size_t i = 0; i < n; i++)
        array[i] = tmp[i];
}
#endif
