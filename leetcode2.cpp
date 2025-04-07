#include<iostream>
using namespace std;
int main(){
    string str1 = "LEET";
    string str2 = "CODE";
    int i, j =0;
    string output="";
    while(str1[i]==str2[j]){
        i++;
        j++;
    }
    if(i==0){
        cout<<output;
    }
    else{
    int a = str1.length();
    int b = a-i;
    for(int k = 0; k<b; k++){
        output += str1[k];
    }

    cout<<output;

}
}