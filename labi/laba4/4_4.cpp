#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    string output = "";

//первое слово
int spaceIndex = 0;
for(int i = 0; i < input.length(); i++) {
    if(input[i] == ' ') {
        spaceIndex = i;
        break;
    }
}
string firstWord = input.substr(0, spaceIndex);
output += firstWord + " ";

//первая буква остальных двух слов
int secondSpaceIndex = 0;
for(int i = spaceIndex + 1; i < input.length(); i++) {
    if(input[i] == ' ') {
        secondSpaceIndex = i;
        break;
    }
}
string secondWord = input.substr(spaceIndex + 1, 1);
string thirdWord = input.substr(secondSpaceIndex + 1, 1);

output += secondWord + "." + thirdWord + ".";

cout << output << endl;

return 0;
}
