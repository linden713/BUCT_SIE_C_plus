/*#include<iostream>
#include<cmath>
using namespace std;
int main5() {

	int num,b,s,g;

	cin >> num;
	b = num / 100;
	s = num / 10 - b * 10;
	g = num % 100 - s * 10;
	if (num==pow(b,3)+pow(s,3)+ pow(g, 3)) {
		cout <<"1";
	}
	else {
		cout<< "0";
	}
	system("pause");
	return 0;



	#include<iostream>
#include<cmath>
using namespace std;
int main() {

	int b, s, g = 0;
	for (int i = 100; i < 1000; i++) {
		b, s, g = 0;
		b = i / 100;
		s = i / 10 - b * 10;
		g = i % 100 - s * 10;
		if (i == pow(b, 3) + pow(s, 3) + pow(g, 3)) {
			cout << i << endl;
		}

	}
	system("pause");
	return 0;
}
}*/

/*#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int num = 0;
	cin >> num;
	for (int i=1; i <num; i++) {
		int temp = 0;
		for (int j = 1; j < i-1; j++) {
			if (i % j == 0) {
				temp += j;
			}
		}
		if (temp == i) {
			cout << i << " its factors are";
			for (int j = 1; j < i - 1; j++) {
				if (i % j == 0) {
					cout << " " << j ;
				}
			}
			cout << endl;
		}


	}
	system("pause");
	return 0;
}*/