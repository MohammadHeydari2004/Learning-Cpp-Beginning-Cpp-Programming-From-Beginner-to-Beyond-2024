// If-else decision making (تصمیم‌گیری با if-else)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    int num{};
    const int target{ 10 };

    cout << "Enter a number and I'll compare it to " << target << ": ";
    cin >> num;

    if (num >= target) {
        cout << "\n==================================" << endl;
        cout << num << " is greater than or equal to " << target << endl;
        int diff{ num - target };
        cout << num << " is " << diff << " greater than " << target << endl;
    }
    else {
        cout << "\n==================================" << endl;
        cout << num << " is less than " << target << endl;
        int diff{ target - num };
        cout << num << " is " << diff << " less than " << target << endl;
    }

    return 0;

}

/*
If-Else Structure (ساختار if-else):
if (condition) {  true block  }
else {  false block  }

Exactly one block will execute
(فقط یک بلوک اجرا می‌شود).

Exclusive Execution(اجرای متقابلاً منحصر به فرد) :
True branch OR false branch executes, never both
(یا بلوک درست اجرا می‌شود یا بلوک نادرست).

Practical Application(کاربرد عملی) :
Binary decisions
(تصمیم‌های دودویی).

Input validation
(اعتبارسنجی ورودی).
*/