#include<iostream>
#include<cmath>
using namespace std;

void sumOfSquareofDigits(int num){
int  rem, p, sum = 0, temp;
temp = num;
 while(temp != 0){
        rem = temp % 10;
        temp = temp / 10;
        p = pow(rem, 2);
        sum += p;
    }
    cout << "Sum of Squares of digits: " << sum << endl;
}
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    sumOfSquareofDigits(num);
    return 0;
}