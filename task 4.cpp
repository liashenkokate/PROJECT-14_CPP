// task 4.cpp 
// 14_CPP.cpp 

//Локалізація
//Опишіть можливості локалізації на С (широкі символи, юнікод та бібліотеку locale), також бібліотеки <locale> та <codecvt> на С++
//б) Розв'яжіть дані задачі на С++ використовуючи бібліотеки локалізаціїї <locale> та <codecvt>

// 4) Введіть два дійсних числа, які записані за допомогою десяткової коми 
//    та виведіть їх середнє геометричне в такому ж форматі.

#include <iostream>
#include <Windows.h>
#include <cmath>
#include <locale> 

using namespace std;
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a;
    double b;
    std::cout << "Введіть два числа:";
    char ch;
    cin >> a >> ch >> b;
    double m;
    m = sqrtf(a*b);

    class comma : public numpunct<char> {
    public:
        comma() : numpunct<char>() {}
    protected:
        char do_decimal_point() const {
            return ',';
        }
    };
    locale loccomma(cout.getloc(), new comma);
    cout.imbue(loccomma);

    cout << "Середнє геометричне:" << m;
}