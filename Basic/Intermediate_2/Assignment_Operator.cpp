// Understanding the assignment operator (درک عملگر انتساب)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    int num1{ 10 }; // Initialize with value (مقداردهی اولیه با مقدار)
    int num2{ 20 }; // Declaration and initialization (تعریف و مقداردهی اولیه)

    num1 = 100;    // Assignment operation (عملیات انتساب)

    cout << "num1 is " << num1 << endl; // Shows 100 (مقدار 100 نمایش داده می‌شود)
    cout << "num2 is " << num2 << endl; // Still 20 (هنوز 20 است)

    return 0;

}

/*
Assignment Basics (اساسیات انتساب):
= assigns right-side value to left-side variable
(مقادیر سمت راست به متغیر سمت چپ انتساب داده می‌شود).

Overwrites previous value 
(مقدار قبلی را بازنویسی می‌کند).

Critical Note (نکته حیاتی):
In original code, num = 100 would cause error 
(در کد اصلی، num = 100 خطایی ایجاد می‌کند).

Variables must be declared before use 
(متغیرها باید قبل از استفاده تعریف شوند).
*/