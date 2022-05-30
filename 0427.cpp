/*#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[8][8] = { 0 };
	int num = 1;
	int h = 0;
	int l = n - 1;
	while (num < pow(n, 2)) {
		while (h < n-1 and arr[h+1][l] == 0) {
			arr[h++][l] = num++;

		}
		while (l>0 and arr[h][l-1] == 0) {
			arr[h][l--] = num++;

		}
		while (h >0 and arr[h-1][l] == 0) {
			arr[h--][l] = num++;
		}
		while (l < n-1 and arr[h][l+1] == 0) {
			arr[h][l++] = num++;
		}
	}
	arr[h][l] = num;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	

	system("pause");
	return 0;

}*/