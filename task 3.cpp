// task 3.cpp 
// 14_CPP.cpp 

//Локалізація
//Опишіть можливості локалізації на С (широкі символи, юнікод та бібліотеку locale), також бібліотеки <locale> та <codecvt> на С++
//б) Розв'яжіть дані задачі на С++ використовуючи бібліотеки локалізаціїї <locale> та <codecvt>


// 3) Введіть два цілих числа, що позначають грошовий тип - гривні та копійки 
//    та виведіть значення як грошовий тип в англійському, американському та українських локалізаціях.

#include <Windows.h>
#include <iostream>
#include <stdio.h>
#include <locale>

using namespace std;
int main(){

    SetConsoleOutputCP(CP_UTF8);
    double a;
    double b;
    cin >> a >> b;
    double m = a + (b/100);

    cout << m << " " << u8"\u20B4" << "\n";
    cout << m << " " << "$"<< "\n";
    cout << m << " " << u8"\u00A3";
    
    return 0;
}