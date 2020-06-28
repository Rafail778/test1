// Задание9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Шамсутдинов Рафаил РАдикович
/*Задание 9. Пользователь с клавиатуры вводит числа. Посчитать их сумму и вывести на экран, как только пользователь введет ноль. */

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int number, sum = 0;
    for (;;) {
        cout << "Введите число: "; cin >> number;
        if (number == 0) {
            break;
            
        }
        sum = sum + number;
    }
    cout << sum << endl;
  }
