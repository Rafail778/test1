﻿// Задание8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Шамсутдинов Рафаил Радикович
/* Задание 8. Пользователь вводит две границы диапазона. Посчитать сумму всех чисел диапазона. */

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int start, end, sum = 0;
    cout << "Введите начало диапазона: "; cin >> start;
    cout << "Введите конец диапазона: "; cin >> end;
    for (; start <= end; start++) {
        sum += start; 
    }
    cout << sum << endl;
   

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
