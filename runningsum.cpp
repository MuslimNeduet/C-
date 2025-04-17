#include<iostream>
using namespace std;
int main(){
    int num, runningsum=0;
    cout<<"Enter a Number To Get Its Running Sum: ";
    cin>>num;
    runningsum+=num;
    while(runningsum<=1000){
        cout<<runningsum<<endl;
        cout<<"Enter Another Value: ";
        cin>>num;
        runningsum+=num;
    }
    cout<<"Running Sum Excedeed 1000"<<endl;
    cout<<"Final Value Of Running Sum Is: "<<runningsum<<endl;
}