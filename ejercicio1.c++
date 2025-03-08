#include<iostream>
using namespace std;
int main() {
        int a = 0, b= 0;


    while (a <= 50) {
        if (a % 1==2 || a % 2==1) {
            cout << a << endl;
        }
        a++;
    }
    while (b <= 50) {
        if (b % 2== 0|| b % 1==2) {
            cout << b << endl;
        }
        b++;
    }

    return 0;

}