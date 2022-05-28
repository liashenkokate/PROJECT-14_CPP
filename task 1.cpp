// 14_CPP.cpp 
// task 1).cpp 

//Локалізація
//Опишіть можливості локалізації на С (широкі символи, юнікод та бібліотеку locale), також бібліотеки <locale> та <codecvt> на С++
//б) Розв'яжіть дані задачі на С++ використовуючи бібліотеки локалізаціїї <locale> та <codecvt>

// 1) Обчислити результат наступних виразів та вивести на екран напис українською мовою "Результат дорівнює: "

// 2 + 3
// 4.5 * 56
// 2 / 3.0

#include <iostream>
#include <Windows.h>
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Ukrainian");
    float first_number = 2;
    float second_number = 3;
    float third_number = 4.5;
    float fourth_number = 56;
    float fifth_number = 3.0;
    std::cout << "Результат дорівнює:  " << first_number + second_number << std::endl;
    std::cout << "Результат дорівнює:  " << third_number * fourth_number << std::endl;
    std::cout << "Результат дорівнює:  " << first_number / fifth_number << std::endl;

}