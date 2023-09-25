/*1. Дано целое натуральное число n. Выведите следующее за ним четное число, 
без использования условных конструкций и циклов.*/

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    cout << (n/2)*2 + 2 << endl;
    return 0;
}

//2. Вводится 3 целых числа, выведете большее из них.

#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;
    int max_num = a;
    if (b > max_num) {
        max_num = b;
    }
    if (c > max_num) {
        max_num = c;
    }
    cout << max_num << endl;
    return 0;
}

/*3. Вводятся целые числа a и b. Гарантируется, что a не превосходит b. 
Выведите все четные числа от a до b (включительно).*/


#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

//4. Дано натуральное число N. Выведите его представление в двоичном виде в обратном порядке.

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    while (n > 0) {
        cout << n % 2;
        n /= 2;
    }
    cout << endl;
    return 0;
}

/*5. Переставьте соседние элементы списка (A[0] c A[1], A[2] c A[3] и т.д.). 
Если элементов нечетное число, то последний элемент остается на своем месте. 
Вводится количество чисел. Вводится список чисел.*/

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i += 2) {
        swap(a[i], a[i+1]);
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

/*6. Вводятся 2 натуральных числа: n и m. 
Выведите на экран таблицу умножения размером n*m через пробел.  */

#include <iostream>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << i*j << " ";
        }
        cout << endl;
    }
    return 0;
}

//7 задача
//8 задача

/*9. Дан текст: в первой строке записано число строк, далее идут сами строки. 
Определите, сколько различных слов содержится в этом тексте. 
Словом считается последовательность непробельных символов идущих подряд, 
слова разделены одним или большим числом пробелов или символами конца строки.*/

#include <iostream>
#include <string>
#include <set> 
using namespace std;

int main() 
{
    int n;
    cin >> n;
    cin.ignore(); //игнор символов перевода строки после ввода числа строк
    set<string> words;
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line); //считывание строки целиком
        string word;
        for (char c : line) { //проход по каждому символу строки
            if (c != ' ') {
                word += c;
            } else if (!word.empty()) { 
                words.insert(word);
                word.clear(); 
            }
        }
        if (!word.empty()) { // добавляем последнее слово, если оно есть
            words.insert(word);
        }
    }
    cout << words.size(); // выводим количество уникальных слов
    return 0;
}
