#include<iostream>
using namespace std;
int main(){
    int num;
    int rev=0;
    cout<<"Enter the number ";
    cin>>num;
    while(num!=0){
        rev=rev*10+num%10;
        num=num/10;
    }
        cout<<rev<<endl;
    return 0;
}