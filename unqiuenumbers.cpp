#include <iostream>
using namespace std;
int main() {
    int numbers[20];
    int counter = 0;
    while (counter < 20) {
        int num;
        bool condition1 = true;
        bool duplicate = false;
        cout << "Enter Your Number: " << counter + 1 << ": ";
        cin >> num;
        if (num < 10 || num > 100) {
            cout << "Number Must Be Between 10 And 100.\n";
            condition1 = false;
        }
        for (int i = 0; i < counter; i++) {
            if (numbers[i] == num) {
                duplicate = true;
                break;
            }
        }
        if (duplicate) {
            cout << "Duplicate Number, Enter A New Number.\n";
            condition1 = false;
        }
        if (condition1) {
            numbers[counter] = num;
            cout << "It Is Accepted: " << num << endl;
            counter++;
        }
    }
    cout << "Your Array Is:\n";
    for (int i = 0; i < 20; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
