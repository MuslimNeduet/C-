#include<iostream>
using namespace std;
int main(){
    bool flag = 1;
    string str;
    cout<<"Enter Your String: ";
    cin>>str;

    int a = str.length();
    for(int i = 0; i<a; i++){
        for(int j=a-1; j>a; j--){
            if(str[i]!=str[j]){
                flag = 0;
                break;
            }
        }
    }
    cout<<"The Palindrome is "<<flag;
}