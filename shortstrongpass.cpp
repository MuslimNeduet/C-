#include<iostream>
using namespace std;
int main(){
    string a = "abcdefghijklmnopqrstuvwxyz";
    string b = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string c = "1234567890";
    string d = "!@#$%^&*()";

    string password;
    cout<<"Enter Your Password: "<<endl;
    cin>>password;
    cout<<"Your Password Is: "<<password<<endl;

    int length = password.size();
    int counter = 0;    
    if(length<6){
        counter=counter+2;
    }

    bool w,x,y,z = 0;

    for(int i = 0; i<length; i++){
            if(a.find(password[i])!=string::npos){
                w=1;
            }
            if(c.find(password[i])!=string::npos){
                x=1;
            }
            if(c.find(password[i])!=string::npos){
                y=1;
            }
            if(c.find(password[i])!=string::npos){
                z=1;
            }
        }

    if(w==0){
        counter++;
    }
    if(x==0){
        counter++;
    }
    if(y==0){
        counter++;
    }
    if(z==0){
        counter++;
    }
    cout<<counter;
}