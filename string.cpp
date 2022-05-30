/*#include<iostream>
#include<string>

using namespace std;
int main1(){
	string  sentence[100];
	char check=' ';
	int count = 0;
	while (check != '\n') {
		cin >> sentence[count];
		//cout << count << sentence[count];
		check=cin.get();
		//cout << "check  is" << check << endl;
			count++;
	}
	for (int i = 0; i < count; i++) {
		sentence[i];
	}
	string target,aim;
	cin >> target >> aim;
	for (int i = 0; i < count; i++) {
		if (sentence[i] == target) {
			sentence[i] = aim;
		}
	}
	for (int i = 0; i < count; i++) {
		cout<<sentence[i]<<" ";
	}

	system("pause");
	return 0;
}*/

/*
#include<iostream>
#include<string>
using namespace std;
string check(string n, char d) {
	for (int i = 0; i < n.length(); i++) {
		if (n[i] == d) {
			return "true";
		}
	}
	return "false";
}
int main() {
	int n;
	char d;
	cin >> n >> d;
	string target = to_string(n);

	cout << check(target, d);

	system("pause");
	return 0;
}
#include<iostream>
#include<string>
using namespace std;
string check(string n, char d) {
	for (int i = 0; i < n.length(); i++) {
		if (n[i] == d) {
			return "true";
		}
	}
	return "false";
}
int main() {
	int n, d;
	cin >> n >> d;
	string target = to_string(n);
	cout<<check(target, d);

	system("pause");
	return 0;



#include<iostream>
#include<string>
using namespace std;
int main() {
	int count = 0;
	cin >> count;
	for (int i = 0; i < count; i++) {
		string player1, player2;
		cin>> player1>> player2;
		if (player1 == player2) {
			cout << "Tie"<<endl;
		}
		else if (player1 == "Rock" and player2 == "Scissors") {
			cout << "Player1"<<endl;
		}
		else if (player2 == "Rock" and player1 == "Scissors") {
			cout << "Player2" << endl;
		}
		else if (player1 == "Rock" and player2 == "Paper") {
			cout << "Player2" << endl;
		}
		else if (player2 == "Rock" and player1 == "Paper") {
			cout << "Player1" << endl;
		}
		else if (player1 == "Scissors" and player2 == "Paper") {
			cout << "Player1" << endl;
		}
		else if (player2 == "Scissors" and player1 == "Paper") {
			cout << "Player2" << endl;
		}
	}
	system("pause");
	return 0;
}
}*/