#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    int firstSpace = input.find(' ');
    int secondSpace = input.find(' ', firstSpace + 1);

    string firstName = input.substr(0, firstSpace);
    string secondNameInitial = input.substr(firstSpace + 1, 1) + ".";
    string lastNameInitial = input.substr(secondSpace + 1, 1) + ".";

    cout << firstName << " " << secondNameInitial << lastNameInitial << endl;

    return 0;
}
