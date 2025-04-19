#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter No. Of Elements: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int m = arr.size();
    long int sum1 = 0;
    long int sum2 = 0;
    for(int i=0,j=1; i<m-1 && j<m; j++,i++){
    sum1 = sum1 + arr[i];
    sum2 = sum2 + arr[j];
    }
    cout<<sum1<<" "<<sum2;
}