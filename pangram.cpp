#include<iostream>
#include<string>
using namespace std;

bool isPangram(string str){
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0; i<alphabet.length(); i++){
        char c = alphabet[i];
        if(str.find(tolower(c))==string::npos){
            return false;
        }
    }
            return true;
}
int main(){
    string str;
    cout<<"Enter a String: ";
    getline(cin,str);

    if(isPangram(str)){
        cout<<"The string is a pangram."<<endl;
    }
    else{
        cout<<"The string isn't a pangram"<<endl;
    }
}
