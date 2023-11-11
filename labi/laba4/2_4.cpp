#include <iostream>
#include <string>

using namespace std;


int main() {
    string word1 = "cat";
    string word2 = "apple";
    string word3 = "dog";

    string result = "";
    result += word1[word1.length() - 1];
    result += word2[word2.length() - 1];
    result += word3[word3.length() - 1];

    cout << result << endl;

    return 0;
}
