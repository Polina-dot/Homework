﻿// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
        using namespace std;
        setlocale(LC_ALL, "RUS");
        int a, b;
        int s, d;
        s = 0;
        d = 0;
        cout << "Введите число:";
        cin >> a;

        cout << "Введите разряд:";
        cin >> b;
        d = a;
        while (abs(d) > 0) {
            d = d / 10;
            //cout « d;
            s = s + 1;
            //cout « s;
        }
        int c, i;

        c = 1;
        i = s - b;
        while (i > 0) {
            c = c * 10;
            i = i - 1;
        }
        cout << int(a / c);
        return 0;
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
