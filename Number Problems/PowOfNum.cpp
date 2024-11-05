#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int num,power,res;
    char comma;
    cout << "Enter a number: ";
    cin >> num>>comma>>power;
    res=pow(num,power);
    cout<<"Exponent:"<<res;
    return 0;
}