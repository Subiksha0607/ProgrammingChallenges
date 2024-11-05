#include <iostream>
using namespace std;

void productOfDigits(int num){
  int product = 1;
  if (num == 0) {
        product = 0; 
    } else {
        while (num != 0) {
            product *= num % 10; 
            num /= 10; 
        }
    }
    cout << "Product of the Digits: " << product << endl;
}
int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    productOfDigits(num);
    return 0;
}
