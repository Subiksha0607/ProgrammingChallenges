#include <iostream>
using namespace std;
int main() {
    int num;
    double res;
    cout << "Enter the number: ";
    cin >> num;
    res = num; 
    for (int i = 0; i < 10; i++) {
        res = 0.5 * (res + num / res);
    }
    cout << "Square root: " << res << endl;
    return 0;
}
