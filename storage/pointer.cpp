#include <iostream>
using namespace std;

void func(int *arr) {
	for (int i = 0; i < 10;i++) {
		cout << *(arr+i)<<" ";
	}
}

int main() {
	
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	func(arr);

	return 0;
}
