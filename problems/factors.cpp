#include<iostream>
using namespace std;

int factors(int num1, int num2) {
    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0) {
            cout << "Num1 LCM: " << i << endl;
        }
        else if (num2 % i == 0) {
            cout << "Num2 LCM: " << i << endl;
        }
    }
    return 0;
}

int main() {
    int num1, num2;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    int result = factors(num1, num2);
    cout << result << endl;

    return 0;
}
