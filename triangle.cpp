#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<array>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
return 0;
}