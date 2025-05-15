#include <iostream>
using namespace std;
int main() {
    double weight, height, bmi;
    cout << "   BMI Calculator (Metric Units)   " << endl;
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;
    bmi = weight / (height * height);
    cout << "\nYour BMI is: " << bmi << endl;
    cout << "\nBMI VALUES" << endl;
    cout << "Underweight: less than 18.5" << endl;
    cout << "Normal     : between 18.5 and 24.9" << endl;
    cout << "Overweight : between 25 and 29.9" << endl;
    cout << "Obese      : 30 or greater" << endl;
    cout << "\nYou are: ";
    if (bmi < 18.5)
        cout << "Underweight";
    else if (bmi >= 18.5 && bmi <= 24.9)
        cout << "Normal";
    else if (bmi >= 25 && bmi <= 29.9)
        cout << "Overweight";
    else
        cout << "Obese";
    cout << endl;
    return 0;
}
