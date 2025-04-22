#include<iostream>
using namespace std;
int main(){
    int num1, num2, r, a, b;
    cout<<"Enter Your First Number: ";
    cin>>num1;
    cout<<"Enter Your Second Number: ";
    cin>>num2;
    if(num1>num2){
        a = num1;
        b = num2;
    }
    else{
        a = num2;
        b = num1;
    }
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    cout<<"The Greatest Common Divisor Is: "<<a;
}