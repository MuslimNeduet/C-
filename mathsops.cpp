#include <iostream>
using namespace std;
int main(){
    int nums[3];
    long long sum = 0, product = 1;
    int smallest, largest;
    cout << "Input three integers: ";
    for (int i = 0; i < 3; ++i) {
        cin >> nums[i];
        sum = sum + nums[i];
        product = product*nums[i];
    }
    smallest = nums[0];
    largest = nums[0];
    for (int i = 1; i < 3; ++i) {
        if (nums[i] < smallest) { smallest = nums[i]; }
        else{ largest = nums[i]; }
    }
    int average=sum/3;
    cout<<"Sum is "<<sum<<endl;
    cout<<"Average is "<<average<<endl;
    cout<<"Product is "<<product<<endl;
    cout<<"Smallest is "<<smallest<<endl;
    cout<<"Largest is "<<largest<<endl;
    for (int i=0; i<3; ++i) {
        if (nums[i]%2 == 0) {
            cout<<nums[i]<< " is even" << endl;
        } else {
            cout<<nums[i]<< " is odd" << endl;
        }
    }
    }
