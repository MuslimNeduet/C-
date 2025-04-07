#include<iostream>
using namespace std;
int main() {
    float num1, num2, num3;
    cout << "Enter Num1, Num2 and Num3: ";
    cin >> num1 >> num2 >> num3;
    float max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    float min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    cout << "The Maximum Number Is: " << max << endl;
    cout << "The Minimum Number Is: " << min << endl;
}