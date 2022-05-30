/*
#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;
int main25(){
	int size;
	cin >> size;
	int arr[6] = { 0 };
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
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
	cout << arr[size - 1] - arr[0];
	system("pause");
	return 0;
}*/