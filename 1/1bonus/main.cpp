#include <iostream>

int main() {
    using namespace std;
    int dial = 0;

    int currentNumber = 50;
    int oldCurrentNumber;
    string input;

    while (true) {
        cout << dial << " zacatek" << currentNumber << endl;
        oldCurrentNumber = currentNumber;
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


        if (currentNumber == 0) {
            cout << "nula" << endl;
            dial++;
        }
        if (currentNumber > 99) {
            while (true) {
                cout << currentNumber << "pred " << endl;

                if (oldCurrentNumber!=0||currentNumber>199) {
                    dial++;
                }
                currentNumber -= 100;



                cout << dial << endl;
                cout << currentNumber << " po" << endl;
                cout << "stari" << endl;
                if (currentNumber <= 99) {
                    break;
                }
            }
        }
        if (currentNumber < 0 ) {
            while (true) {
                cout << currentNumber << "pred " << endl;

                if (oldCurrentNumber!=0||currentNumber<199) {
                    dial++;
                }
                currentNumber += 100;


                cout << dial << endl;
                cout << currentNumber << " po" << endl;
                cout << "mensi" << endl;
                if (currentNumber >= 0) {
                    break;
                }
            }
        }



        cout << "///" << endl;
    }
    cout << dial << endl;
    return 0;
}
