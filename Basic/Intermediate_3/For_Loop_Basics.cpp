// For loop fundamentals (اساسیات حلقه for)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    // Basic counting loop (حلقه شمارش پایه)
    for (int i{ 1 }; i <= 10; ++i)
        cout << i << endl;

    // Count by 2s (شمارش دو تا دو تا)
    for (int i{ 1 }; i <= 10; i += 2)
        cout << i << endl;

    // Count down (شمارش معکوس)
    for (int i{ 10 }; i > 0; --i)
        cout << i << endl;
    cout << "Blastoff!" << endl;

    // Multiples of 15 (مضارب 15)
    for (int i{ 10 }; i <= 100; i += 10) {
        if (i % 15 == 0)
            cout << i << endl;
    }

    // Multiple initialization (مقداردهی اولیه چندگانه)
    for (int i{ 1 }, j{ 5 }; i <= 5; ++i, ++j)
        cout << i << " + " << j << " = " << (i + j) << endl;

    // Formatting output (فرمت‌بندی خروجی)
    for (int i{ 1 }; i <= 100; ++i) {
        cout << i << ((i % 10 == 0) ? "\n" : " ");
    }

    return 0;

}

/*
For Loop Structure (ساختار حلقه for):
for (initialization; condition; increment) {code}

Initialization: Runs once at start
(یک بار در ابتدا اجرا می‌شود).

Condition : Checked before each iteration
(قبل از هر تکرار بررسی می‌شود).

Increment : Runs after each iteration
(پس از هر تکرار اجرا می‌شود).

Common Patterns(الگوهای رایج) :
Counting up / down
(شمارش به جلو / عقب).

Stepping by increments
(گام‌های افزایشی).

Multiple counter variables
(متغیرهای شمارنده چندگانه).

Best Practices(بهترین روش‌ها) :
Prefer pre - increment(++i) over post - increment(i++)
(ترجیح pre - increment به post - increment).

Keep loop variables scoped to the loop
(دامنه متغیرهای حلقه را به حلقه محدود کنید).
*/