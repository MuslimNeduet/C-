#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<array>
using namespace std;

int maxNum(int a, int b, int c){
    int maxNumber = a;
    if(b>=a && b>=c)
    maxNumber = b;
    else if(c>=b && c>=a){
        maxNumber = c;
    }

    return maxNumber;
}

int maxNum();
int main(){
    int a,b,c;
    cout<<"Enter The Numbers You Want To Check: "<<endl;
    cin>>a>>b>>c;
    cout<<maxNum(a,b,c);
return 0;
}