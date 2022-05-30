/*
//计算1900年后每个月13号星期几
bool run(int year) {
	if (year % 4 == 0 and year % 100 != 0) {
		return 1;
	}
	else if (year % 4 ==0 and year % 400==0) {
		return 1;
	}
	else {
		return 0;
	}

}
int main(){
	int week[7] = { 0 };
	int num;
	cin >> num;
	int temp = 5;
	for (int i = 0; i < num ; i++) {
		for (int j = 1; j < 13; j++) {
			if (j == 1 or j == 3 or j == 5 or j == 7 or j == 8 or j == 10 or j == 12) {
				week[temp ]++;
				temp = (temp + 3) % 7;
			}
			if (j == 2 and run(i+1900)) {
				week[temp ]++;
				temp = (temp + 1) % 7;
			}
			if (j == 2 and !run(i + 1900)) {
				week[temp ]++;
			}
			if (j == 4 or j == 6 or j == 9 or j == 11) {
				week[temp ]++;
				temp = (temp + 2) % 7;
			}
		}
	}
	for (int i = 0; i < 7; i++) {
		cout << week[i] << " ";
	}*/

/*
* 查看题目是否通过
	int n, m;
	cin >> n >> m;
	int arr[3][2] = {0};
	int num;
	string temp;


	for (int i = 0; i < m; i++) {
		cin >> num >> temp;
		if (temp == "AC" and arr[num][0] == 0) {
			arr[num][0] = 1;
		}
		if (temp == "WA" and arr[num][0]==0) {
			arr[num][1]++;
		}
	}
	long long ac = 0;
	long long wr=0;
	for (int i = 1; i < n + 2; i++) {
		if (arr[i][0] == 1) {
			ac++;
			wr += arr[i][1];
		}
	}
	cout << ac << " " << wr;*/
/*
//一个人可以摘两次苹果，多少人摘多少果
void change(int* arr,int size) {
	int temp = 0;
	for (int i = 0; i < size-1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
}
}
int main(){
	int ball_num = 10;
	int peo_num = 4;
	cin >> ball_num >> peo_num;
	int ball[10] = { 0 };//ball_num
	int people[4] = { 0 };//peo_num


	for (int i = 0; i < ball_num; i++) {
		cin >> ball[i];
	}
	for (int i = 0; i < peo_num; i++) {
		cin >> people[i];
	}
	int count=0;
	change(people, peo_num);
	change(ball , ball_num);
	int peo[8] = {0};//peo_num * 2
	for (int i = 0; i < peo_num * 2; i++) {
		for (int a = 0; a < 2; a++) {
			peo[i] = people[i/2];
		}
	}

	int j = 0;
	for (int i = 0; i < peo_num*2; i++) {
		if (peo[i] >= ball[j]) {
			count++;
			j++;
		}
	}
	cout << count;*/

/*
* //计算ax+b=c
	string equality;
	while (getline(cin,equality)) {
		string a, b, c;
		int i = 0;
		bool check1 = 0;
		for (; i < 20; i++) {
			if (equality[i] == '+') {
				i++;
				break;
			}
			if (equality[i] == '-') {
				i++;
				check1 = 1;
				break;
			}
			a += equality[i];
		}
		for (; i < 20; i++) {
			if (equality[i] == '=') {
				i++;
				break;
			}
			b += equality[i];
		}
		for (; i < 20; i++) {
			if (i == equality.length()) {
				break;
			}
			c += equality[i];
		}

		int a1 = stoi(a);
		int b1 = stoi(b);
		int c1 = stoi(c);
		if (a1 == 0) {
			cout << "error" << endl;
		}
		else if (check1 == 0) {
			cout << fixed << setprecision(2);
			cout << (double)(c1 - b1) / a1 << endl;
		}
		else if (check1 == 1) {

			cout << fixed << setprecision(2);
			cout << (double)(c1 + b1) / a1 << endl;
		}
		equality = "";
	}
	*/
/*
	int num = 0;
	cin >> num;
	int arr[4][2] = {0};
	int max = 0;
	for(int i = 0; i < num; i++) {
		cin >> arr[i][0];
		if (arr[i][0] > max) {
			max = arr[i][0];
		}
	}
	int count=0;
	int b = 0;
	cin >> b;

	for (int i = 1; i <= max * b; i++) {
		int temp = 0;
		for (int j = 0; j < num; j++) {
			if (i != 1 and i < arr[j][0]) {
				continue;
			}
			else if ( i%arr[j][0] == 0 and arr[j][1]<=4 and temp==0) {
				count++;
				arr[j][1]++;
				temp = 1;
				continue;
			}
			else if(i % arr[j][0] == 0 and arr[j][1] <= 4)
			{
				arr[j][1]++;
				continue;

			}
		}
	}
	cout << count ;*/
/*
* 有一个长度为n的字符串,这个字符串只由小写英文字母组成,据说每一名合格的buctcoder都能够快速数出这个字符串里面包含多少个"buct"(不计引号)。
 	int num = 0;
	cin >> num;
	char arr[10] = { 0 };
	for (int i = 0; i < num; i++) {

		cin >> arr[i];
	}
	int count = 0;
	for (int i = 0; i < num-3; i++) {

		if (arr[i] == 'b' and arr[i+1] == 'u' and arr[i+2] == 'c' and arr[i+3] == 't') {
			count++;
		}
	}
	cout << count;
 */

/*现行的货币体系为（1、2、5、10、20、50、100），请设计算法，计算要用最少的货币数支付指定金额N，每种货币需要使用的数量。

	int num = 0;
	cin >> num;
	int one, two, five, ten, twenty, fifty, hundred;
	int money;

	for (int i = 0; i < num; i++) {
		one = two = five = ten = twenty = fifty = hundred = 0;
		cin >> money;
		hundred = money / 100;
		money = money % 100;

		fifty = money / 50;
		money = money % 50;

		twenty = money / 20;
		money = money % 20;

		ten = money / 10;
		money = money % 10;

		five = money / 5;
		money = money % 5;

		two = money / 2;
		one = money % 2;
		cout << one << " " << two << " " << five << " " << ten << " " << twenty << " " << fifty << " " << hundred<<endl;
	}

*/


/*
You are given the ages (in years) of all people of a country with at least 1 year of age. You know that no individual in that country lives for 101 or more years. Now, you are given a very simple task of sorting all the ages in ascending order.
输入
There are multiple test cases in the input file. Each case starts with an integer n (0<n<=2000000), the total number of people. In the next line, there are n integers indicating the ages. Input is terminated with a case where n = 0. This case should not be processed.
输出
For each case, print a line with n space separated integers. These integers are the ages of that country sorted in ascending order.

	int num = 0;
	int temp;
	while (cin >> num) {
		if (num == 0) {
			continue;
		}
		int	age[101] = { 0 };
		for (int i = 0; i < num; i++) {
			cin >> temp;
			age[temp]++;
		}
		for (int i = 0; i < 101; i++) {
			if (age[i] == 0) {
				continue;
			}
			else {
				for (int j = 0; j < age[i]; j++) {
					cout << i << " ";
				}
			}
		}
	}

*/
/*
bool check(string a) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '4' or a[i] == '7') {
			return 0;
		}
	}
	return 1;
}
bool dead(string a, string b) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >b[i]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int num = 0;
	cin >> num;
	int arr[5] = { 0 };
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	int num1;
	cin >> num1;
	int count = 0;
	int judge = 0;
	for (int i = 0; i < num1; i++) {
		count = 0;
		cin >> judge;
		for (int j = 0; j < num; j++) {
			if (arr[j] == judge) {
				count++;
			}
		}
		cout << count << endl;
	}
}*/
/*
//输入一串倒着数字，判断规律输出下一个数字
int turn(int input) {
	int num1 = input/10;
	int num2 = input%10;
	if (num1 == 6) {
		num1 = 9;
	}
	else if (num1 == 9) {
		num1 = 6;
	}
	if (num2 == 6) {
		num2 = 9;
	}
	else if (num2 == 9) {
		num2 = 6;
	}
	return num2 * 10 + num1;
}

int main(){
	int num;
	cin >> num;
	int card[num] = { 0 };
	for (int i = 0; i < num; i++) {
		cin >> card[i];
	}
	int different = turn(card[1]) -turn(card[0]);
	if (turn(turn(card[num - 1]) + different) < 10) {
		cout << 0 << turn(turn(card[num - 1]) + different);
	}
	else {
		cout<<turn(turn(card[num - 1]) + different);
	}*/