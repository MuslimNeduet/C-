#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
    int grades[4] = {73, 67, 38, 33};
    int n = 4;
    int arr[n];
    for(int i=0; i<n; i++){
    int newgrades = grades[i];
    while(newgrades%5!=0){
        newgrades = newgrades+1;
    }
    if(newgrades-grades[i]<3 && newgrades>=40){
        arr[i]=newgrades;
    }
    else{
        arr[i]=grades[i];
    }
}

for(int i=0; i<n; i++){
    cout<<arr[i]<<endl; 
}
}