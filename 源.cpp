#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void above0(int a, int b, int c, int delata) {
	double x1, x2;
	x1 = (-b + sqrt(delata)) / (2 * a);
	x2 = (-b - sqrt(delata)) / (2 * a);
	cout << "x1=" << x1 << " " << "x2=" << x2;
}
void equal0(int a, int b, int c, int delata) {
	double x1, x2;
	x1 = (-b + sqrt(delata)) / (2 * a);
	x2 = (-b - sqrt(delata)) / (2 * a);
	cout << "x1=" << x1 << " " << "x2=" << x2;
}
void small0(int a, int b, int c, int delata) {
	double x1, x2;
	x1 = (-b + sqrt(delata)) / (2 * a);
	x2 = (-b - sqrt(delata)) / (2 * a);
	cout << "x1=" << x1 << " " << "x2=" << x2;
}
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int delta = b * b - 4 * a * c;
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