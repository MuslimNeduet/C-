#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x, precision = 0.0001;
    cout << "Enter angle in radians: ";
    cin >> x;
    double term = x;
    double sum = x;
    int n = 1;
    while (fabs(term) >= precision) {
        term *= -1 * x * x / ((2*n)*(2*n+1));
        sum += term;
        n++;
    }
    cout << "sin(" << x << ") = " << sum << endl;
    return 0;
}
