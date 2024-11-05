#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
bool isStrongNumber(int num) {
    int originalNum = num; 
    int sum = 0;
    while (num > 0) {
        int rem = num % 10;    
        sum += factorial(rem); 
        num /= 10;
    }
    return (sum == originalNum); 
}
int main() {
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    if (isStrongNumber(num)) {
        cout << "True"<< endl;
    } else {
        cout << "False"<< endl;
    }
    return 0;
}
