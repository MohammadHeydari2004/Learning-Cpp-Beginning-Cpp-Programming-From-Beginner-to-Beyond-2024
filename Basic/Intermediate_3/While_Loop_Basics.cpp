// While loop fundamentals (اساسیات حلقه while)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    // Countdown example (مثال شمارش معکوس)
    int num{};
    cout << "Enter a positive integer to start countdown: ";
    cin >> num;

    while (num > 0) {
        cout << num << endl;
        --num;
    }
    cout << "Blastoff!" << endl;

    // Count up example (مثال شمارش به جلو)
    cout << "Enter a positive integer to count up to: ";
    cin >> num;

    int i{ 1 };
    while (i <= num) {
        cout << i << endl;
        i++;
    }

    // Input validation (اعتبارسنجی ورودی)
    cout << "Enter an integer less than 100: ";
    cin >> num;

    while (num >= 100) {
        cout << "Invalid! Enter an integer less than 100: ";
        cin >> num;
    }
    cout << "Thanks!" << endl;

    // Complex condition (شرط پیچیده)
    bool done{ false };
    cout << "Enter an integer between 1 and 5: ";

    while (!done) {
        cin >> num;
        if (num < 1 || num > 5)
            cout << "Out of range, try again: ";
        else {
            cout << "Valid input received!" << endl;
            done = true;
        }
    }

    return 0;

}

/*
While Loop Structure (ساختار حلقه while):
while (condition) { code }

Condition checked BEFORE each iteration
(شرط قبل از هر تکرار بررسی می‌شود).

May not execute at all if condition false initially
(ممکن است هیچ‌وقت اجرا نشود).

Common Use Cases(موارد استفاده رایج) :
Unknown iteration count
(تعداد تکرار نامشخص).

Input validation
(اعتبارسنجی ورودی).

Event - driven processing
(پردازش مبتنی بر رویداد).

Key Differences from For(تفاوت‌های کلیدی با for) :
No built - in initialization / increment
(بدون مقداردهی اولیه / افزایش داخلی).

More flexible condition handling
(مدیریت شرط انعطاف‌پذیرتر).
*/