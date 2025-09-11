// Increment and decrement operations (عملیات افزایش و کاهش)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    int counter{ 10 };
    int result{ 0 };

    cout << "Initial counter: " << counter << endl;

    // Basic increment methods (روش‌های افزایش پایه)
    counter = counter + 1; // Standard addition (جمع استاندارد)
    cout << "After counter+1: " << counter << endl;

    counter++; // Post-increment (افزایش پس از استفاده)
    cout << "After counter++: " << counter << endl;

    ++counter; // Pre-increment (افزایش قبل از استفاده)
    cout << "After ++counter: " << counter << endl;

    // Pre vs post demonstration (نشان‌دادن تفاوت پیش و پس)
    counter = 10;
    result = ++counter; // Increment THEN assign (افزایش سپس انتساب)
    cout << "\nPre-increment: counter=" << counter << ", result=" << result << endl;

    counter = 10;
    result = counter++; // Assign THEN increment (انتساب سپس افزایش)
    cout << "Post-increment: counter=" << counter << ", result=" << result << endl;

    // Combined operations (عملیات ترکیبی)
    counter = 10;
    result = ++counter + 10; // Pre: counter increments first (پیش: ابتدا counter افزایش می‌یابد)
    cout << "\nPre-increment in expression: counter=" << counter << ", result=" << result << endl;

    counter = 10;
    result = counter++ + 10; // Post: counter increments after (پس: بعد از عملیات counter افزایش می‌یابد)
    cout << "Post-increment in expression: counter=" << counter << ", result=" << result << endl;

    return 0;

}

/*
Increment Types (انواع افزایش):
counter++: Post-increment (value used, THEN incremented) 
(پس از استفاده افزایش می‌یابد).

++counter: Pre-increment (incremented, THEN value used) 
(قبل از استفاده افزایش می‌یابد).

Critical Behavior (رفتار حیاتی):
In assignments: result = counter++ vs result = ++counter 
(در انتساب‌ها تفاوت دارد).

In expressions: Affects calculation order 
(در عبارات، ترتیب محاسبه را تغییر می‌دهد).

Best Practice (بهترین روش):
Avoid multiple increments in same statement 
(از چندین افزایش در یک دستور خودداری کنید).

Prefer pre-increment for performance in loops 
(برای عملکرد بهتر در حلقه‌ها از پیش‌افزایش استفاده کنید).
*/