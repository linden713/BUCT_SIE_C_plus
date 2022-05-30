/*#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;

int prime(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			cout << "not a prime";
			return 0;
		}
	}
	cout << "prime";
	return 0;
}
void jinjin(int a ,int b) {

	int max;
	int temp = 0;
	int count = 0;

	for (int i = 0; i < 7; i++) {
		cin >> a >> b;
		max = a + b;
		if (max > temp) {
			temp = max;
			count = i;
		}
	}
	if (temp < 8) {
		cout << "00";
	}
	cout << count + 1;
}

void four_num() {
	int a, b, c, d;
	int i = 1234;
	a = i % 1000;
	b = i % 1000 / 100;
	c = i % 100 / 10;
	d = i % 10;
}
void jinjin2(){
	bool check = true;
	double nb = 0;
	int left = 0;
	int n = 0;
	int money[12] = {};
	for (int i = 0; i < 12; i++) {
		cin >> money[i];
	}

	for (int i = 0; i < 12; i++) {
		n = 0;
		if (300 - money[i] + left < 0) {
			cout << "-" << i + 1;
			check = false;
			break;
		}
		if ((300 - money[i] + left) >= 100) {

			n = (300 - money[i] + left) / 100;
		}
		nb += n;

		left = 300 - money[i] + left - n * 100;
	}
	if (check == true)
		cout << left + nb * 120;
}
void stringChange() {
	string sentence[100];
	int count = 0;
	char check = ' ';
	while (check != '\n') {
		cin >> sentence[count];
		check = cin.get();
		count++;
	}
	string target;
	cin >> target;
	string aim;
	cin >> aim;

	for (int i = 0; i < count; i++) {
		if (target == sentence[i]) {
			sentence[i] = aim;
		}
	}
	for (int i = 0; i < count; i++) {
		cout << sentence[i] << " ";

	}
}
int main3() {
	string a;
	cin >> a;
	cout << a[1]<<a[3];
	system("pause");
	return 0;
}*/