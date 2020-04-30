// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    class Worker {
    private:
        string
            name;
        int
            experience,
            hourly_wag,
            has_worked,
            salary,
            prize;
    public:
        Worker(string name1, int experience1, int hourly_wag1, int has_worked1)
        {
            name = name1;
            experience = experience1;
            hourly_wag = hourly_wag1;
            has_worked = has_worked1;
        }
        void meassage() {
            salary = hourly_wag * has_worked;
            if (experience <= 1)
                prize = 0 * salary;
            if (experience <= 3)
                prize = salary * 5 / 100;
            if (experience <= 5)
                prize = salary * 8 / 100;
            if (experience > 5)
                prize = salary * 8 / 100;
            cout << name;
            cout << "\nExperience is" << experience;
            cout << "\nHourly wag is" << hourly_wag;
            cout << "\nhas worked" << has_worked;
            cout << "\nSalary is" << salary;
            cout << "\nPrize is" << prize;
        }
    };
    int main(int argc, char* argv)
        ;
        string
            name;
        int
            experience,
            hourly_wag,
            has_worked,
            salary,
            prize;
        cout << "Enter worker's name"; cin >> name;
        cout << "Enter worker's experience "; cin >> experience;
        cout << "Enter worker's hourly wag "; cin >> hourly_wag;
        cout << "Enter How much " << name << "has worked"; cin >> has_worked;
        Worker objWorker(name, experience, hourly_wag, has_worked);
        //objWorker.get_exp();
        //cout<<experience;
        objWorker.meassage();
        system("pause");
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
