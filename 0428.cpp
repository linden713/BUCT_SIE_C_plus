/*#include<iostream>
#include<cmath>
using namespace std;

bool xiaobeishu(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			cout << i;
			return 0;
		}
	}
	return 1;
}
int biggongyue(int num1, int num2) {
	int temp=0;
	if (num1 < num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	for (int i = num2; i > 1; i--) {
		if (num1 % i == 0 and num2 % i == 0) {
			return i;
		}
	}
	return 0;
}

int smallgongbei(int num1,int num2) {
	int temp;
	if (num1 < num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	for (int i = num1; i < 10000; i++) {
		if (i % num1 == 0 and i % num2 == 0) {
			return i;
		}
	}
	return 0;
}
int main() {

	int num1,num2;
	cin >> num1>>num2;
	cout << biggongyue(num1, num2) << endl;;
	cout << smallgongbei(num1, num2);


	system("pause");
	return 0;
}*/