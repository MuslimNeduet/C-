#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<array>
using namespace std;

float mini(float a, float b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    float a,b;
    cout<<"Enter Your First Numbers: ";
    cin>>a;
    cout<<"Enter Your Second Numbers: ";
    cin>>b;
    cout<<mini(a,b);
return 0;
}