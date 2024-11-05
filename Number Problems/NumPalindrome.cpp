#include<iostream>
using namespace std;

bool isPalindrome(int num) {
    int originalnum = num;
    int rev = 0;

    while (num != 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    return originalnum == rev;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}
