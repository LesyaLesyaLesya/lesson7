#include "Date.h"
#include "SmartPtr.h"
#include <locale>
//#include <math.h>
//#include <cassert>
//#include <functional>
//#include <vector>
//#include <algorithm>

using namespace std;

void Zadanie1()
{
    /*--------------------------------------------------
    +Создайте класс Date с полями день, месяц, год и методами доступа к этим полям.
    +Перегрузите оператор вывода для данного класса. 
    Создайте два "умных" указателя today и date.
    +Первому присвойте значение сегодняшней даты. 
    +Для него вызовите по отдельности методы доступа к полям класса Date,
    +а также выведите на экран данные всего объекта с помощью перегруженного оператора вывода.
    +Затем переместите ресурс, которым владеет указатель today в указатель date. 
    Проверьте, являются ли нулевыми указатели today и date и выведите соответствующую информацию об этом в консоль.
     ----------------------------------------------------*/

    
    SmartPtr<Date> today (new Date(22, 11, 2021));
    std::cout << today->GetDay()<< "\n";
    std::cout << today->GetMonth() << "\n";
    std::cout << today->GetYear() << "\n";
    std::cout << "Перегруженный оператор вывода " << *today << "\n";

    SmartPtr<Date> date;

    date = today;

    std::cout << std::boolalpha;
    std::cout << "today is nullptr " << (today.isNullprt()) << "\n";

    std::cout << "date is nullptr " << (date.isNullprt()) << "\n";


};

void Zadanie2()
{
    /*--------------------------------------------------
    По условию предыдущей задачи создайте два умных указателя date1 и date2.
        Создайте функцию, которая принимает в качестве параметра два умных указателя типа Date 
        и сравнивает их между собой (сравнение происходит по датам). Функция должна вернуть более позднюю дату.
        
        Создайте функцию, которая обменивает ресурсами (датами) два умных указателя, переданных в функцию в качестве параметров.
        Примечание: обратите внимание, что первая функция не должна уничтожать объекты, переданные ей в качестве параметров.

     ----------------------------------------------------*/

};

void Zadanie3()
{
    /*--------------------------------------------------

     ----------------------------------------------------*/

};

void Zadanie4()
{
    /*--------------------------------------------------

     ----------------------------------------------------*/

};

void Zadanie5()
{
    /*--------------------------------------------------

     ----------------------------------------------------*/

};

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите номер задания цифрой" << std::endl;
    unsigned short nomerZadania;

    std::cin >> nomerZadania;

    if (std::cin.fail())
    {
        std::cout << "Некорректный ввод номера задания...";
        std::cin.clear();
        std::cin.ignore(32767, '\n');
    }
    else
    {
        switch (nomerZadania)
        {
        case 1:Zadanie1(); break;

        case 2:Zadanie2(); break;

        case 3:Zadanie3(); break;

        case 4:Zadanie4(); break;

        case 5:Zadanie5(); break;

        default: break;
        }
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.