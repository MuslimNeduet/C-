#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<array>
using namespace std;

int wow(int a, int b){
    int c = a+b;
    return c;
}

int main(){
    int a,b;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    cout<<wow(a, b);
return 0;
}