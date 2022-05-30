
/*
* 
* 	int num = 1234;
	cout << num / 1000
		<< num / 100 % 10 
		<< num / 10 % 10 
		<< num % 10;
* 
* 
* #include <iostream>
#include <iomanip>
#include<string>
#include<cmath>
using namespace std;

int main() {
	
	string num;
	cin >> num;
	int num1;
	int count = 0;
	num1 = stoi(num);
	int temp = 1;
	for(int i = num.length(); i >0; i--) {
		if (num1 % 10 == 7) {
			count++;
		}
		num1 = num1 / 10;
	}
	cout << count;
	system("pause");
	return 0;
}
}
* 
* 	string a;
	getline(cin, a);
	cout << a;
* 
* include<iostream>
* int main(
{

* 
const int size = 10;
	int temp = 0;
	int arr[size] = { 1,2,3,4,5,6,7,8,9,0 };
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << endl;
	}*/