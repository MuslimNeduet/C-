#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<array>
using namespace std;

int mini(int a, int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    cout<<mini(11,10);
return 0;
}