#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = n; j > i; j--){
            cout<<" ";
        }
        for(int k = 1; k <= i; k++){
            cout<<"*";
        }
        for(int k = 2; k <= i; k++){
           cout<<"*";
        }
        cout<<endl;
    }
return 0;
}