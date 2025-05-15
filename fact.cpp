#include <iostream>
using namespace std;
int main() {
    int num;
    long long factorial = 1;
    cout << "Enter an integer: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else{
    for (int i = num; i >= 1; --i) {
        cout << i;
        if (i > 1) {
            cout << " x ";
        }
        factorial = factorial*i;
    }
    cout << " = " << factorial << endl;
    }
}
