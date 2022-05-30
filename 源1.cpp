/*#include<iostream>
using namespace std;
void func(int *arr, int size) {
	int temp = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i-1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j +1] = temp;
			}
		}
	}
}
void arrPrint(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << arr << "  " << (arr + 1) << "  " << &arr[1];
}
void maxArr(int* arr, int size) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (max < *(arr + i)) {
			max = *(arr + i);
		}
	}
	cout << max;
}
void intSwap(int* num1,int *num2) {
	int* temp = num2;
	*num2 = *num1;
	*num1 = *temp;
}
int main10() {
	const int size = 10;
	int arr[size] = { 9,8,7,6,5,4,3,2,1,0 };
	int* intptr=arr;
	int num1 = 1;
	int num2 = 2;
	intSwap(&num1, &num2);
	cout << num1 << num2;

	
	system("pause");
	return 0;
}

*/
/*#include<iostream>
using namespace std;
void yue(int a,int b) {

	for (int i = b; i > 1; i--) {
		if (b % i == 0 and a%i==0) {
			cout << i;
			break;
		}
	}
}
void bei(int a, int b) {

	for (int i = a+1; i < 1000; i++) {
		if (i % a == 0 and i % b==0) {
			cout << i;
			break;
		}
	}

}
int main() {
	int a, b;
	cin >> a>>b;
	int temp = 0;
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
		yue(a,b);
		cout << " ";
		bei(a,b);


	system("pause");
	return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
int max(int a, int b, int c) {
	if (a > b) {
		if (a > c) {
			return a;
		}
		else {
			return c;
		}
	}
	else {
		if (b > c) {
			return b;
		}
		else {
			return c;
		}
	}

}
int main1() {
	int a, b, c;
	cin >> a >> b >> c;
	cout <<fixed<<setprecision(3)<<(double) max(a, b, c) / (max(a + b, b, c) * max(a, b, b + c));
	system("pause");
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;

int check(int x) {
	for (int i = 2; i < sqrt(x); i++) {
		if (x%i==0) {
			cout << "not prime";
			return 0;
		}
	}
	cout << "prime";
	return 0;
}

int main1() {
	int x = 0;
	cin >> x;
	check(x);
	system("pause");
	return 0;
}


#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void above0(double a, double b, double c, double delata) {
	double x1, x2 = 0;
	x1 = (-b + sqrt(delata)) / (2 * a);
	x2 = (-b - sqrt(delata)) / (2 * a);
	cout << fixed << setprecision(3)<< "x1=" << x1 << " " << "x2=" << x2;
}
void equal0(double a, double b, double c, double delata) {
	double x1, x2 = 0;
	x1 = (-b + sqrt(delata)) / (2 * a);
	x2 =x1;
	cout << fixed << setprecision(3)<< "x1=" << x1 << " " << "x2=" << x2;
}
void small0(double a, double b, double c, double delata) {
	cout << fixed << setprecision(3);
	cout << "x1=" << -b / (a * 2) << "+" << sqrt(-delata) / (2 * a) << "i" << " " << "x2=" << -b / (a * 2) << "-" << sqrt(-delata) / (2 * a) << "i";
}
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double delta = b * b - 4 * a * c;
	if (delta > 0) {
		above0(a, b, c, delta);
	}
	if (delta == 0) {
		equal0(a, b, c, delta);
	}
	if (delta < 0) {
		small0(a, b, c, delta);
	}
	system("pause");
	return 0;
}



#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main1() {
	int n = 0;
	int shou, shu;
	int count=0;
	int global_count = 0;;
	cin >> n;
	for (int i = 0; i < n; i++) {
		shou = shu = 0;
		cin >> shou >> shu;
		if (shou <= 140 and shou>=90 and shu <= 90 and shu>=60) {
			count += 1;
		}
		else {
			if (global_count < count) {
				global_count = count;
			}
			count = 0;
		}
	}
	if (global_count < count) {
		global_count = count;
	}
		cout << global_count;
	system("pause");
	return 0;
}
	int money[12] = {};
	for (int i = 0; i < 12; i++) {
		cin >> money[i];
	}
	int left = 0;
	int count = 0;
	int local_count = 0;
	for (int j = 0; j < 12; j++) {
		local_count = 0;
		if ((300 - money[j]) + left < 0) {
			cout <<"-"<<j+1;
			return 0;
		}
		count+= (300 - money[j] + left) / 100;
		local_count= (300 - money[j] + left) / 100;
		left += 300 - money[j] - local_count * 100;
	}
	cout << left + count * 120;*/