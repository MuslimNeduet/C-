#include<iostream>
using namespace std;
int main(){
    int first_num, second_num, GCD;
    cout<<"Enter Your First Number: ";
    cin>>first_num;
    cout<<"Enter Your Second Number: ";
    cin>>second_num;
    for(int i=1; i<=first_num && i<=second_num; i++){
        if(first_num%i==0 && second_num%i==0){
            GCD=i;
        }
    }
    cout<<"The Greatest Common Divisor Is: "<<GCD;
}