using namespace std;

int main()
{
    int day;
    cout<<"Введите номер дня недели ";
    cin>>day;
    switch(day)
    {
        case 1:cout<<" Понедельник \n 8:00 Работа \n 19:00 Тренировка \n "; break;
        case 2:cout<<"Вторник \n Работа \n"; break;
        case 3:cout<<"Среда \n 8:00  \n 19:00 Бассейн \n"; break;
        case 4:cout<<"Четверг \n 8:00 Работа \n 20:00 ДР Бабушки \n"; break;
        case 5:cout<<"Пятница \n 8:00 Работа \n 17:00 Тренировка\n"; break;
        case 6:cout<<"Суббота \n Пикник \n"; break;
        case 7:cout<<"Воскресенье \n Что угодно \n"; break;
        default: cout<<"Нет такого"<<endl;
    }

    return 0;
}

