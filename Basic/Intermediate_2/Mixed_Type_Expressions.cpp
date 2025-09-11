// Handling different data types in calculations (مدیریت انواع داده مختلف در محاسبات)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    int total{};
    int num1{}, num2{}, num3{};
    const int count{ 3 };

    cout << "Enter 3 integers: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    // Type casting demonstration (نشان‌دادن تبدیل نوع)
    double average{ static_cast<double>(total) / count };
    // Alternative: double average {(double)total / count}; (روش جایگزین)

    cout << "Numbers: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "Sum: " << total << endl;
    cout << "Average: " << average << endl;
    // Without cast: 7/3 = 2 (not 2.333...) (بدون تبدیل: 7/3 = 2 نه 2.333...)

    return 0;

}

/*
Type Casting (تبدیل نوع):
static_cast<double>(total): Converts integer to double 
(تبدیل صحیح به اعشاری).

Prevents integer division truncation
(از حذف اعشار در تقسیم جلوگیری می‌کند).

Integer Division Problem (مشکل تقسیم صحیح):
7 / 3 = 2 (truncates decimal) 
(اعداد اعشاری حذف می‌شوند).

(double)7 / 3 = 2.333... (preserves decimal) 
(اعداد اعشاری حفظ می‌شوند).

Why Important (چرا مهم است):
Critical for accurate calculations 
(برای محاسبات دقیق ضروری است).

Common source of bugs in financial calculations
(منشأ رایج باگ در محاسبات مالی).
*/