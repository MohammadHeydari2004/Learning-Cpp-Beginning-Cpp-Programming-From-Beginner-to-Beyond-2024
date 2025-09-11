// Equality and inequality checks (بررسی تساوی و نامساوی)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    bool equal_result{ false };
    bool not_equal_result{ false };
    int num1, num2;

    cout << boolalpha; // Display true/false (نمایش true/false)

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Equality check (بررسی تساوی)
    equal_result = (num1 == num2);
    cout << num1 << " == " << num2 << ": " << equal_result << endl;

    // Inequality check (بررسی نامساوی)
    not_equal_result = (num1 != num2);
    cout << num1 << " != " << num2 << ": " << not_equal_result << endl;

    // Type comparison example (مثال مقایسه نوع)
    double double1;
    cout << "\nEnter integer and double: ";
    cin >> num1 >> double1;
    cout << num1 << " == " << double1 << ": " << (num1 == double1) << endl;
    // Automatic type conversion occurs (تبدیل نوع خودکار انجام می‌شود)

    return 0;

}

/*
Equality Operators (عملگرهای تساوی):
==: Checks if values are equal
(بررسی برابری مقادیر).

!=: Checks if values are different
(بررسی تفاوت مقادیر).

Type Comparison (مقایسه انواع):
Comparing different types triggers conversion
(مقایسه انواع مختلف، تبدیل انجام می‌دهد).

5 == 5.0 is true 
(5 == 5.0 مقدار true دارد).

Critical Distinction (تفاوت حیاتی):
= is assignment, == is comparison 
( = انتساب است، == مقایسه است).

Common beginner mistake 
(اشتباه رایج برای مبتدیان).
*/