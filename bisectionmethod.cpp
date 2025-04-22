#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,x,N;
    cout<<"Enter a +ve Number: ";
    cin>>N;
    a = 1.0; b = N; x = 1.0;
    while(fabs((x*x)-N)>0.00001)
    {
        c = 0.5*(a+b);
        x = c;
        if(x*x-N<0){
        a=c;
    }
        else{ 
            b=c;
        }
    }
    cout<<"Root Is: "<<x;
}