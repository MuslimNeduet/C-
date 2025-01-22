#include<iostream>
#include<string>
#include<limits.h>          // for ranges
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<array>
using namespace std;
int main(){
    cout<<sizeof(string)<<endl;     // 32 bytes
    string a = "Muhammad Muslim";
    string b = "Hello World";
    unsigned int c =  3232;  // to remove the negative range
    cout<<c<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(a)<<endl;          // 32 bytes
    cout<<sizeof(b)<<endl;          // 32 bytes
    cout<<sizeof(short)<<endl;      // 2 bytes
    cout<<endl;
    cout<<sizeof(long)<<endl;       // 4 bytes
    cout<<sizeof(char)<<endl;       // 1 byte
    cout<<sizeof(float)<<endl;      // 4 bytes
    cout<<sizeof(double)<<endl;     // 8 bytes
return 0;
}