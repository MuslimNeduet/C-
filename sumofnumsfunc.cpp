#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<array>
using namespace std;

int factofnum(int n){
    int sum = 1;
    for(int i = 1; i<=n; i++){
    sum = i*sum;
    }
    return sum;
}

int main(){
    cout<<factofnum(5);
    return 0;
}