// task 5.cpp 
// 14_CPP.cpp 

//Локалізація
//Опишіть можливості локалізації на С (широкі символи, юнікод та бібліотеку locale), також бібліотеки <locale> та <codecvt> на С++
//б) Розв'яжіть дані задачі на С++ використовуючи бібліотеки локалізаціїї <locale> та <codecvt>


// 5) Введіть дату в форматі (число, місяць, рік) 
//    та виведіть значення в німецьких, американських та українських локалізаціях.

#define _CRT_SECURE_NO_WARNINGS
#include <locale>
#include <ctime>
#include <iostream>
#include <Windows.h>

int getch();
using namespace std;
int main() {

    time_t time2;
    time_t sec;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    sec = time(NULL);
    time(&time2);
    cout << "Час в українській локалізації: " << asctime(localtime(&sec));
    getch();

    sec = time(NULL) - 25200;
    setlocale(LC_ALL, "America / Los-Angeles");
    time(&time2);
    cout << "Time in the American localization: " << asctime(localtime(&sec));
    getch();

    setlocale(LC_ALL, "Europe / Berlin");

    sec = time(NULL) - 3600;
    cout << "Zeit in deutscher lokalisierung: " << asctime(localtime(&sec));
    getch();
}

int getch() {
    return 0;
}