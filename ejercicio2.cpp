#include <iostream>
using namespace std;

int main (){
    int num, suma = 0;
    if (num  < 30){
        for ( int i = 3; i <= num ; i +=3){
            suma +=i;
        }
        cout <<suma<<endl;
    }
    return 0;
}