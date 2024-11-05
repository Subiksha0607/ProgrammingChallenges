#include<iostream>
using namespace std;
void DigitalRoot(int num){
  while (num > 9) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum; 
    }
    cout << "Digital Root: " << num << endl;
}
int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    DigitalRoot(num);
    return 0;
}
