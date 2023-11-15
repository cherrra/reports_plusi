#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    int firstSpace = -1;
    int secondSpace = -1;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            if (firstSpace == -1) {
                firstSpace = i;
            } else {
                secondSpace = i;
                break;
            }
        }
    }

    string firstName = input.substr(0, firstSpace);
    string secondNameInitial = input.substr(firstSpace + 1, 1) + ".";
    string lastNameInitial = input.substr(secondSpace + 1, 1) + ".";

    cout << firstName << " " << secondNameInitial << lastNameInitial << endl;

    return 0;
}
