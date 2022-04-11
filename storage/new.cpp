#include <iostream>
using namespace std;

int get_max(int *arr,int size) {
	int max = *arr;
	for (int i = 1; i < size;i++) {
		if (max < *(arr + i)) max = *(arr + i);
	}
	return max;
}

int main() {
	
	int size = 5;
	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	
	cout<<"Max : " << get_max(arr, size);

	delete[] arr;

	return 0;
}