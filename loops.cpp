#include<iostream>
using namespace std;
int main(){
    // There are two types of Loops. (For Loop())
    // Counter Controlled or Sentinel Controlled Loops. (Do-While() or While())

    // For Loop.
    int base,power,answer=1;
    cout<<"Enter Your Base: ";
    cin>>base;
    cout<<"Enter Your Power: ";
    cin>>power;
    for(int i=1; i<power; i++){
        answer=answer*base;
}
    cout<<answer;
}