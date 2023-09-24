#include <iostream>
using namespace std;

int main() {
    int digit = 0;
    char exit = 'y';
for(;;)//бесконечный цикл
{
    cout « "Введите число";
    cin » digit;
    cout «"\n Продолжить ввод чисел -y. Выйти -n";
    cin » exit;
    if (exit!= 'y' && exit!= 'y')
    break;
}
return 0;
}
