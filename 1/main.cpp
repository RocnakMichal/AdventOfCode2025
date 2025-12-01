#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.

    using namespace std;
    int dial = 0;

    int currentNumber = 50;

    string input;

    while (true) {
        getline(cin, input);
        if (input == "end") {
            break;
        }

        char inputLetter = input[0];
        input.erase(0, 1);
        int inputNumber = stoi(input);

        (inputLetter == 'L')
            ? currentNumber = currentNumber - inputNumber
            : currentNumber = currentNumber + inputNumber;

        if (currentNumber > 99) {
            currentNumber = currentNumber % 100;
        }
        if (currentNumber < 0) {
            while (true) {
                currentNumber += 100;
                if (currentNumber >= 0) {
                    break;
                }
            }
        }
        if (currentNumber == 0) {
            dial++;
        }
    }
    cout << dial << endl;
    return 0;
}
