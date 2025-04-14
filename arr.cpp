#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int num = 0;
    cout<<"Enter Number: ";
    cin>>n;
    int x = pow(10, n - 1);
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        num = num+(arr[j]*x);
        x=x/10;
    }
    num = num+1;
    cout<<num<<endl;
    int count=0;

    int temp=num;
    for(int i=0; i<=n; i++){
        if(temp!=0){
        temp=temp/10;
        count++;
    }
    }
    cout<<count<<endl;
    int narr[count];
    for(int i=(count-1); i>=0; i--){
        narr[i]=num%10;
        num=num/10;
    }

    for(int i=0; i<count; i++){
        cout<<narr[i]<<" ";
    }
}