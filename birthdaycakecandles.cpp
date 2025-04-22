#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter The No. Of Element: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int candles[n];
    int max = candles[0];
    int count=0;
    for(int i=0; i<n; i++){
    if(candles[i]>max){
        max = candles[i];
    }
    }
    for(int i=0; i<n; i++){
    if(max==candles[i]){
        count++;
    }
    }
    cout<<"The No. Of Count Is: "<<count;
    }