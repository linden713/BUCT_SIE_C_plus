/*#include<iostream>
using namespace std;

void pop(int* arr, int  size) {
	int temp = 0;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void swap_num(int *num1,int*num2){
	int temp = 0;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;


}
int main() {
	const int size = 5;
	int arr;
	int* p=&arr;
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
	pop(p, size);
	for (int i = 0; i < size; i++) {
		cout << p[i];
	}
	int num1 = 1;
	int num2 = 2;
	swap_num(&num1, &num2);
	cout << num1 << " " << num2;

	system("pause");
	return 0;
}*/