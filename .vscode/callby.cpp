#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<array>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 5;
    int b = 6;
    swap(a, b);
    cout<<"The Value Of A Is "<<a<<" And The Value Of B Is "<<b<<endl;
return 0;
}