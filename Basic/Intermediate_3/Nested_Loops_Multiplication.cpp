// Nested loops for multiplication table (حلقه‌های تو در تو برای جدول ضرب)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    // Generate multiplication table (تولید جدول ضرب)
    for (int num1{ 1 }; num1 <= 10; ++num1) {
        for (int num2{ 1 }; num2 <= 10; ++num2) {
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        cout << "-----------" << endl;
    }

    return 0;

}

/*
Multiplication Table Logic (منطق جدول ضرب):
Outer loop: First multiplier 
(حلقه خارجی: ضرب‌کننده اول).

Inner loop: Second multiplier 
(حلقه داخلی: ضرب‌کننده دوم).

Each iteration calculates one product 
(هر تکرار یک حاصل‌ضرب را محاسبه می‌کند).

Output Organization (سازمان‌دهی خروجی):
Separators between tables 
(جداکننده‌ها بین جداول).

Clear row-by-row presentation 
(ارائه واضح ردیف‌به‌ردیف).

Mathematical Pattern (الگوی ریاضی):
Demonstrates Cartesian product
(ضرب دکارتی را نشان می‌دهد).

Visualizes multiplication properties
(ویژگی‌های ضرب را تصویر می‌کند).
*/