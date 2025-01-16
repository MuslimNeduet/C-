#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<array>
using namespace std;
int main(){
    int mixup[] = {21, 22, 23};
    for(int i = 0; i<3; i++){
        cout<<mixup[i]<<endl;
    }


    int *p = mixup;
    cout<<"The Value Of Mixup[0] is "<<*p<<endl;
    p++;
    cout<<"The Value Of Mixup[0] is "<<*p<<endl;
return 0;
}