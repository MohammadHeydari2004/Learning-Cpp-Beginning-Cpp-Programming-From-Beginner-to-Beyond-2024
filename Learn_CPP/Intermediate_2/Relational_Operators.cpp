// Relational comparisons in C++ (مقایسه‌های رابطه‌ای در سی‌پلاس‌پلاس)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    int num1, num2;
    const int lower{ 10 };
    const int upper{ 20 };

    cout << boolalpha; // Display true/false instead of 1/0 (نمایش true/false به جای 1/0)

    // Greater than comparison (مقایسه بزرگتر از)
    cout << "Enter integer > " << lower << ": ";
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;

    // Less than or equal comparison (مقایسه کوچکتر یا مساوی)
    cout << "\nEnter integer <= " << upper << ": ";
    cin >> num1;
    cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;

    // Full relational set (مجموعه کامل روابط)
    cout << "\nEnter two integers: ";
    cin >> num1 >> num2;
    cout << num1 << " > " << num2 << ": " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << ": " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << ": " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << ": " << (num1 <= num2) << endl;

    return 0;

}

/*
: Compare values (مقایسه مقادیر).
Return true/false
(مقدار بولین برمی‌گردانند).

boolalpha Usage (استفاده از boolalpha):
Shows true/false instead of 1/0 
(به جای 1/0، true/false نمایش می‌دهد).

Improves readability 
(خوانایی را افزایش می‌دهد).
*/