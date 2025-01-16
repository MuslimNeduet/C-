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
    int num;
    cout<<"Enter The Num: ";
    cin>>num;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
return 0;
}