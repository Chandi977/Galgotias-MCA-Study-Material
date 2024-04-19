#include <iostream>

using namespace std;

// Function to perform addition
double add(double* numbers, int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }
    return sum;
}

// Function to perform subtraction
double subtract(double* numbers, int size) {
    double result = numbers[0];
    for (int i = 1; i < size; ++i) {
        result -= numbers[i];
    }
    return result;
}

// Function to perform multiplication
double multiply(double* numbers, int size) {
    double result = 1;
    for (int i = 0; i < size; ++i) {
        result *= numbers[i];
    }
    return result;
}

// Function to perform division
double divide(double* numbers, int size) {
    double result = numbers[0];
    for (int i = 1; i < size; ++i) {
        if (numbers[i] != 0) {
            result /= numbers[i];
        } else {
            cerr << "Error: Division by zero!" << endl;
            return 0;
        }
    }
    return result;
}

int main() {
    int size = 0;
    double* numbers = nullptr;

    char choice;
    do {
        // Prompt user for number input
        cout << "Enter a number: ";
        double num;
        cin >> num;

        // Dynamically allocate memory for the new number
        double* temp = new double[size + 1];

        // Copy existing numbers to the new array
        for (int i = 0; i < size; ++i) {
            temp[i] = numbers[i];
        }

        // Add the new number
        temp[size] = num;

        // Delete old array if it's not nullptr
        if (numbers != nullptr) {
            delete[] numbers;
        }

        // Assign the new array to numbers
        numbers = temp;
        size++;

        // Ask user if they want to add more elements
        cout << "Do you want to add more elements? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    // Ask user for the operation choice
    cout << "Choose the operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    int operationChoice;
    cin >> operationChoice;

    // Perform the selected arithmetic operation and output the result
    double result;
    switch (operationChoice) {
        case 1:
            result = add(numbers, size);
            cout << "The sum is: " << result << endl;
            break;
        case 2:
            result = subtract(numbers, size);
            cout << "The difference is: " << result << endl;
            break;
        case 3:
            result = multiply(numbers, size);
            cout << "The product is: " << result << endl;
            break;
        case 4:
            result = divide(numbers, size);
            cout << "The quotient is: " << result << endl;
            break;
        default:
            cerr << "Invalid choice!" << endl;
    }

    // Free dynamically allocated memory
    delete[] numbers;

    return 0;
}
