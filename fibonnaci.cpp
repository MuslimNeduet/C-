#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int newterm = 0;
    int n;
    cout<<"Enter The Limit: ";
    cin>>n;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=0; i<n-2; i++){
        newterm = a+b;
        cout<<newterm<<" ";
        a = b;
        b = newterm;
    }
}
