/*#include<iostream>
using namespace std;

void pop1(int *arr ,int  size) {
	int temp = 0;
	for (int i = 0; i < size-1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main232() {
	const int size = 10;
	int arr[size] = { 10,9,8,7,6,5,4,3,2,1 };
	pop1(arr,size);
	for (int i = 0; i < 10; i++) {
		cout<<arr[i]<<" ";
	}
	system("pause");
	return 0;
}*/