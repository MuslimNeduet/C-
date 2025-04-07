#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    int x;
    cout<<"Enter Your First Number: "<<endl;
    cin>>num1;
    cout<<"Enter Your Second Number: "<<endl;
    cin>>num2;
    cout<<"1. Addition\n"<<"2. Subtraction \n"<<"3. Multiplication \n"<<"4. Division \n";
    cout<<"Enter Your Operator Number: ";
    cin>>x;
    switch(x){
        case 1:
        cout<<num1+num2<<endl;
        break;
        case 2:
        cout<<num1-num2<<endl;
        break;
        case 3:
        cout<<num1*num2<<endl;
        break;
        case 4:
        cout<<num1/num2<<endl;
        break;
        default: cout<<"Invalid Operator"<<endl;
        break;
    }
}
