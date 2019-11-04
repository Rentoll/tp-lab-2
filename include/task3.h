#ifndef TASK3_H
#define TASK3_H
template<class T, size_t size>
void map(T arr[], T(*change)(T)) {
	for (size_t i = 0; i < size; i++) {
		arr[i] = change(arr[i]);
	}
}

#endif
