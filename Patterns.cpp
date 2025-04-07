#include<iostream>
using namespace std;

void printPattern(int n){
    int num = 1;
    for(int i = 1; i<=n; i++){
        int val = num;
        for(int j = 1; j<=i; j++){
            cout<<val<<" ";
            val -=(n-j); //val = val-(n-j) & 6-(6-2) = -2
        }
        num+=(n-i); // num = num+(n-i) & 1+(6-1)
        cout<<endl;}
    }
int main(){
    int n = 6;
    printPattern(n);
    return 0;

}
