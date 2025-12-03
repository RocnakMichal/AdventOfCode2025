#include <iostream>
#include <string>
using namespace std;

pair<string, string> splitInTwo(string val) {
    string arg;
    string::size_type pos = val.find('-');
    if (val.npos != pos) {
        arg = val.substr(pos + 1);
        val = val.substr(0, pos);
    }
    return make_pair(val, arg);
}

bool repeats(string s) {
    string half = s.substr(0, s.length() / 2);
    string otherHalf = s.substr(s.length() / 2);
    if (half == otherHalf) {
        return true;
    }
    return false;
}

int main() {
   long sum = 0;


    string input;


    while (true) {
        getline(cin, input, ',');
        if (input == "end") {
            break;
        }
        pair<string, string> pr = splitInTwo(input);

        long long first = stol(pr.first);
        long long  second = stol(pr.second);
        for (long long i = first; i <= second; i++) {
            //if it is repeating it must be even number
            if ((to_string(i).length()) % 2 == 0) {
                if (repeats(to_string(i))) {
                    sum += i;
                }
            }
        }
    }
    cout << "Solution= " << sum << endl;
    return 0;
}
