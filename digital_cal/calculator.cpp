
#include<iostream>
using namespace std;

void showMenu() {
    cout << "========================" << endl;
    cout << " Simple Digital Calculator " << endl;
    cout << "========================" << endl;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    double num1, num2;
    char operation;
    bool keepRunning = true;

    while (keepRunning) {
        showMenu();
        cout << "Enter operation (+, -, *, /) or q to quit: ";
        cin >> operation;

        if (operation == 'q' || operation == 'Q') {
            keepRunning = false;
            break;
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (operation) {
            case '+':
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Result: " << divide(num1, num2) << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operation. Please try again." << endl;
        }
    }

    cout << "Calculator exited." << endl;
    return 0;
}


