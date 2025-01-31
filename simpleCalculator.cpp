//The program displays two random numbers between 10 and 50 and prompts the student to add them.
//The program then tells the student whether the answer was correct or wrong.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    int num1;
    int num2;
    int num3;
    int operatorChoice;
    char op;

    srand(time(0));

    num1 = 1 + rand() % 50;
    num2 = 1 + rand() % 50;

    operatorChoice = 1 + rand() % 4;

    switch(operatorChoice) {
        case 1:
            op = '+';
            num3 = num1 + num2;
            break;
        case 2:
            op = '-';
            num3 = num1 - num2;
            break;
        case 3:
            op = '*';
            num3 = num1 * num2;
            break;
        case 4:
            op = '/';
            num3 = num1 / num2;
            break;
    }

    cout << "What is the answer? " << num1 << " " << op <<  " " << num2 << ": ";
    cin >> num3;

    if (num3 == num1 + num2 || num3 == num1 - num2 || num3 == num1 * num2 || num3 == num1 / num2) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. Try again." << endl;
    }
 
    return 0;
}
