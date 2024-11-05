#include <iostream>
using namespace std;

void digitCount(int num){
    int DigitCount = 0;
    if (num == 0) {
        DigitCount = 1;
    } else {
        num = abs(num);

        while (num > 0) {
            num /= 10;  
            DigitCount++; 
        }
    }
    cout << "Number of digits: " << DigitCount << endl;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    digitCount(num);
    return 0;
}

