// Introduction to if statements (مقدمه‌ای بر دستورات شرطی if)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {
    int num{};
    const int min{ 10 };
    const int max{ 100 };

    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;

    // Basic if statement (دستور if پایه‌ای)
    if (num >= min) {
        cout << "\n=========== If statement 1 =============" << endl;
        cout << num << " is greater than or equal to " << min << endl;
        int diff{ num - min };
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    // Multiple independent conditions (شرایط مستقل چندگانه)
    if (num <= max) {
        cout << "\n=========== If statement 2 =============" << endl;
        cout << num << " is less than or equal to " << max << endl;
        int diff{ max - num };
        cout << num << " is " << diff << " less than " << max << endl;
    }

    // Combined condition (شرط ترکیبی)
    if (num >= min && num <= max) {
        cout << "\n=========== If statement 3 =============" << endl;
        cout << num << " is in range " << endl;
        cout << "This means statements 1 and 2 must also display!" << endl;
    }

    // Boundary check (بررسی مرز)
    if (num == min || num == max) {
        cout << "\n=========== If statement 4 =============" << endl;
        cout << num << " is right on a boundary " << endl;
        cout << "This means all 4 statements may display" << endl;
    }

    return 0;
}

/*
If Statement Structure (ساختار دستور if):
if (condition) {code}

Condition must evaluate to true / false
(شرط باید به true / false ارزیابی شود).

Logical Operators(عملگرهای منطقی) :
&& (AND) : Both conditions must be true 
(هر دو شرط باید درست باشند).

|| (OR) : At least one condition true
(حداقل یک شرط درست باشد).

Key Concepts(مفاهیم کلیدی) :
Independent if statements execute separately
(دستورات if مستقل جداگانه اجرا می‌شوند).

Curly braces{} define code blocks
(آکولادها بلوک‌های کد را تعریف می‌کنند).

Variable scope limited to its block
(دامنه متغیر محدود به بلوک خود است).
*/