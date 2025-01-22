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
    cout<<"Enter The Value Of N: ";
    cin>>n;
    char ch = 65;
    for(int i=1; i<=n; i++){
        ch = 64;
        for(int j=1; j<=n; j++){
        ch = ch +1;
        cout<<ch<<" ";
        }
        cout<<endl;
    }


return 0;
}