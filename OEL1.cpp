#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c, d, x0, precision = 0.0001;
    cout << "Enter coefficients a, b, c, d: ";
    cin >> a >> b >> c >> d;
    cout << "Enter initial guess: ";
    cin >> x0;
    double x = x0;
    while (true) {
        double fx = a*x*x*x + b*x*x + c*x + d;
        double f1x = 3*a*x*x + 2*b*x + c;
        double f2x = 6*a*x + 2*b;
        double denominator = 2*f1x*f1x - fx*f2x;
        if (fabs(denominator) < 1e-10) break;
        double x1 = x - (2*fx*f1x) / denominator;
        if (fabs(x1 - x) < precision) {
            cout << "Approximate root: " << x1 << endl;
            break;
        }

        x = x1;
    }
    return 0;
}
