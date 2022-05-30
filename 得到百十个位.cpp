

/*

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int mainsdf(){
    cout << "haha";
    system("pause");
    return 0;
}

bool prime1(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main2()
{
    int num;
    int count=0;

    cin >> num;

    for (int i = 11; i < num + 1; i++) {
        int a = 0; int b = 0; int c = 0;
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100 % 10;
        cout << a << b << c << endl;
        if (c == 0) {
            if (a == b and prime1(i)) {
                count++;
            }
        }
        else {
            if (a == c and prime1(i)) {
                count++;
            }
        }
    }

    cout << count;*/