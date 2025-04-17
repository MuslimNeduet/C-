#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int newterm = 0;
    int n;
    cout<<"Enter The Limit: ";
    cin>>n;
    for(int i=0; i<n; i++){
        newterm = a+b;
        cout<<newterm<<"   "<<(float)newterm/(float)b<<endl;
        a = b;
        b = newterm;
    }
}