#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<int> candles[m];
    int n = candles.size();
    int max = candles[0];
    int count=0;
    for(int i=0; i<n; i++){
    if(max<candles[i]){
        max = candles[i];
    }
    }
    for(int i=0; i<n; i++){
    if(max==candles[i]){
        count++;
    }
    }
    return count;
    }