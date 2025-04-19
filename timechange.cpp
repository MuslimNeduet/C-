#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "12:05:45PM";
    int n = s.size();
    cout<<n<<endl;
    int m = n-2;
    string neww = "";
    int b=0;
    string arr[m];
    for(int i=0; i<2; i++){
        neww = neww+s[i];
    }

    b = stoi(neww);
    if(b==12){
        cout<<"00";
    } else{
        b = b+12;
        cout<<b;
    }

    for(int i=2; i<m; i++){
        arr[i]=s[i];
    }
    for(int i=2; i<m; i++){
        cout<<arr[i];
    }
}