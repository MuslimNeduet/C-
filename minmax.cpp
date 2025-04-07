#include<iostream>
using namespace std;
int main(){
    float num1, num2, num3;
    cout<<"Enter Num1, Num2 and Num3: ";
    cin>>num1>>num2>>num3;
    float max,min;
    if(num1>=num2 && num1>=num3){
        max=num1;
    }
    else{
        if(num2>=num1 && num2>=num3){
            max= num2;
        }
        else{
            max = num3;
        }
    }
    if(num1<=num2 && num1<=num3){
        min=num1;
    }
    else{
        if(num2<=num1 && num2<=num3){
            min=num2;
        }
        else{
            min=num3;
        }
    }
    cout<<"The Maximum Number Is: "<<max<<endl;
    cout<<"The Minimum Number Is: "<<min<<endl;
}
