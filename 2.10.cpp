// 2.10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "ru");
    int x, y, z, t, n, m;
    std::cout << "Введите число 1 <= n <= 999: ";
    std::cin >> n;
    if (n >= 1 && n <= 999) {
        y = n % 10; //ostatok
        z = n / 10; //celoe
        std::cout << "Исходное число х: " << y << z << std::endl;
    }
    else
        std::cout << "Число выходит за диапазон значений.\n";
}