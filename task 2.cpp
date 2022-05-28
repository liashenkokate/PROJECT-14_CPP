// task 2.cpp 
// 14_CPP.cpp 

//Локалізація
//Опишіть можливості локалізації на С (широкі символи, юнікод та бібліотеку locale), також бібліотеки <locale> та <codecvt> на С++
//б) Розв'яжіть дані задачі на С++ використовуючи бібліотеки локалізаціїї <locale> та <codecvt>

// 2) Виведіть надпис: "Введіть ім'я: ". Введіть з нового рядка ваше ім'я (наприклад, "Вася") 
//    та виведіть привітання вигляду "Привіт, Вася!"

#include <Windows.h>
#include <locale>
#include <iostream>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Введiть iм'я:\n";
    char s[100];
    std::cin >> s;
    // system("cls");
    std::cout << "Привіт, " << s << "!";
}