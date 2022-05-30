#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int num = 6;
	int arr[6][6] = { 0 };
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 6; i++) {
		if (i == 0 or i == 5) {
			arr[0][i] = arr[0][i] + 10;
		}
	}
	for (int i = 0; i < 6; i++) {
		if (i == 1 or i == 4) {
			arr[1][i] = arr[1][i] + 10;
		}
	}
	for (int i = 0; i < 6; i++) {
		if (i == 2 or i == 3) {
			arr[2][i] = arr[2][i] + 10;
		}
	}
	for (int i = 0; i < 6; i++) {
		if (i == 2 or i == 3) {
			arr[3][i] = arr[3][i] + 10;
		}
	}
	for (int i = 0; i < 6; i++) {
		if (i == 1 or i == 4) {
			arr[4][i] = arr[4][i] + 10;
		}
	}
	for (int i = 0; i < 6; i++) {
		if (i == 0 or i == 5) {
			arr[5][i] = arr[5][i] + 10;
		}
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (arr[i][j] >= 0) {
				if (arr[i][j] / 10 == 0) {
					cout << "    " << arr[i][j];
					if (i != 5 and j == 5)cout << endl;
					continue;

				}
				else if (arr[i][j] / 100 == 0) {
					cout << "   " << arr[i][j];
					if (i != 5 and j == 5)cout << endl;
					continue;

				}
				else if (arr[i][j] / 1000 == 0) {
					cout << "  " << arr[i][j];
					if (i != 5 and j == 5)cout << endl;
					continue;

				}
				else if (arr[i][j] / 10000 == 0) {
					cout << " " << arr[i][j];
					if (i != 5 and j == 5)cout << endl;
					continue;

				}
				else if (arr[i][j] / 10000 != 0) {
					cout << arr[i][j];
					if (i != 5 and j == 5)cout << endl;
					continue;

				}
			}
			else {
				if (arr[i][j] / 10 == 0) {
					cout << "   " << arr[i][j];
					if (i != 5 and j == 5)cout << endl;
					continue;

				}
				else if (arr[i][j] / 100 == 0) {
					cout << "  " << arr[i][j];
					if (i != 5 and j == 5)cout << endl;
					continue;

				}
				else if (arr[i][j] / 1000 == 0) {
					cout << " " << arr[i][j];
					if (i != 5 and j == 5)cout << endl;
					continue;

				}
				else if (arr[i][j] / 10000 == 0) {
					cout << "" << arr[i][j];
					if (i != 5 and j == 5)cout << endl;
					continue;

				}
				else if (arr[i][j] / 10000 != 0) {
					cout << arr[i][j];
					if (i != 5 and j == 5)cout << endl;
					continue;

				}
			}
		}
	}
		system("pause");
		return 0;
		
}


/*
* 
* 
* 	int n; cin >> n;
	int arr[3][2] = { 0 };
	for (int i = 0; i < n; i++) {
		arr[i][0] = i;
	}
		int temp = 1;
		int count=0;
		int jian = n;
	
		while (jian != 1) {
			if (count == n) {
				count = 0; continue;
			}
			if (temp != 3) {
				if (arr[count][1] == 3) {
					count++;
					continue;
				}
				else {
					arr[count][1] = temp;
					temp++;
					count++;
					continue;
				}
			}
			if (temp == 3) {
				if (arr[count][1] == 3) {
					count++;
					continue;
				}
				else {
					temp = 1;
					arr[count][1] = 3;
					jian--;
				}
			}
			
		}
		for (int i = 0; i < n; i++) {
			if (arr[i][1] == 2) {
				cout << i;
			}
		}
* 
* 
* 
* 	int num = 6;
	int arr[6][6] = { 0 };
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 6; i++) {
		if (i == 0 or i == 5) {
			arr[0][i] = arr[0][i] + 10;
		}
	}
	for (int i = 0; i < 6; i++) {
		if (i == 1 or i == 4) {
			arr[1][i] = arr[1][i] + 10;
		}
	}
	for (int i = 0; i < 6; i++) {
		if (i == 2 or i == 3) {
			arr[2][i] = arr[2][i] + 10;
		}
	}
	for (int i = 0; i < 6; i++) {
		if (i == 2 or i == 3) {
			arr[3][i] = arr[3][i] + 10;
		}
	}
	for (int i = 0; i < 6; i++) {
		if (i == 1 or i == 4) {
			arr[4][i] = arr[4][i] + 10;
		}
	}
	for (int i = 0; i < 6; i++) {
		if (i == 0 or i == 5) {
			arr[5][i] = arr[5][i] + 10;
		}
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (arr[i][j] / 10000 != 0) {
				cout << arr[i][j];
				if (i != 5 and j == 5)cout << endl;
				
			}
			else if (arr[i][j] / 10 == 0) {
				cout <<"    " <<arr[i][j];
				if (i != 5 and j == 5)cout << endl;
				
			}
			else if (arr[i][j] / 100 == 0) {
				cout << "   " << arr[i][j];
				if (i != 5 and j == 5)cout << endl;
				
			}
			else if (arr[i][j] / 1000 == 0) {
				cout << "  " << arr[i][j];
				if (i != 5 and j == 5)cout << endl;
				
			}
			else if (arr[i][j] / 10000 == 0) {
				cout << " " << arr[i][j];
				if (i != 5 and j == 5)cout << endl;
				
			}
		}
	}
* 
* 
* 
* 
* 
* 	int num;
	cin >> num;
	int arr[3][1] = { 0 };
	for (int i = 1; i < num + 1; i++) {
		arr[i - 1][0] = i;
	}
	int temp = 1;
	while (num != 2) {
		if (temp == 3) {
			temp = 1;
		}
		else if(){

		}
		
	}
* 
* 
bool check(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}*/