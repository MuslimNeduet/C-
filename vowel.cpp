#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter Your Character: ";
    cin>>a;
    if(a =='a' || a =='e' || a =='i' || a =='o' || a=='u'){
        cout<<"Entered Character Is Vowel"<<endl;
    }
    else{
        cout<<"Enter Character Is Consonant";
    }
}