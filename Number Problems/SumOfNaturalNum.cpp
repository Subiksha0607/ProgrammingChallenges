#include<iostream>
using namespace std;

int firstNumbers(int n) {
    int sum;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<firstNumbers(n);
    return 0;
}