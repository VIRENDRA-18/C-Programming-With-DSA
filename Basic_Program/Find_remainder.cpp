// Ques =>>  take two integer a and b , a > b so find the remainderwhen a divisible by b ?

#include<iostream>
using namespace std;
int main() {
    int a = 20;
    int b = 3;
    int q = a / b;
    int r;
    r = a - (b * q);
    cout << r;
    return 0 ;
}