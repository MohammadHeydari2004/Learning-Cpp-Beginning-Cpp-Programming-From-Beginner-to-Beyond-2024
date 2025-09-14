// Switch with enumerations (switch با شمارش‌پذیرها)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    // Define enumeration (تعریف شمارش‌پذیر)
    enum Direction {
        left, right, up, down
    };

    Direction heading{ left };

    // Switch with enum (switch با شمارش‌پذیر)
    switch (heading) {
    case left:
        cout << "Going left" << endl;
        break;
    case right:
        cout << "Going right" << endl;
        break;
    case up:
        cout << "Going up" << endl;
        break;
    case down:
        cout << "Going down" << endl;
        break;
    default:
        cout << "Invalid direction" << endl;
    }

    return 0;

}

/*
Enumerations (شمارش‌پذیرها):
enum Name { value1, value2, ... };

Creates named integer constants 
(ثوابت صحیح با نام ایجاد می‌کند).

Improves code readability 
(خوانایی کد را افزایش می‌دهد).

Switch with Enums (switch با شمارش‌پذیرها):
Perfect match for discrete states
(برای حالت‌های گسسته مناسب است).

Compiler can warn about missing cases 
(کامپایلر می‌تواند درباره caseهای گم‌شده هشدار دهد).

Benefits (مزایا):
Self-documenting code 
(کد خودتوضیح‌دهنده).

Type safety 
(ایمنی نوع).

Easier to maintain 
(راحت‌تر برای نگهداری).
*/