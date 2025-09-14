// Basic arithmetic operations in C++ (عملیات حسابی پایه در سی‌پلاس‌پلاس)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    int num1{ 200 }; // First operand (اولین عملوند)
    int num2{ 100 }; // Second operand (دومین عملوند)
    int result{ 0 };  // Store results here (نتایج را اینجا ذخیره کنید)

    // Basic operations (عملیات پایه)
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;

    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    // Integer division behavior (رفتار تقسیم اعداد صحیح)
    result = num2 / num1;
    cout << num2 << " / " << num1 << " = " << result << endl; // 0 (چون نتیجه کمتر از 1 است)

    // Modulo operator (عملگر باقیمانده)
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    // Floating point division (تقسیم اعشاری)
    cout << 5 / 10 << endl;      // 0 (تقسیم صحیح)
    cout << 5.0 / 10.0 << endl;  // 0.5 (تقسیم اعشاری)

    return 0;

}

/*
Operator Types (انواع عملگرها):
+, -, *, /: Basic math operations 
(عملیات ریاضی پایه).

%: Modulo (bypasses decimals) 
(باقیمانده - بدون در نظر گرفتن اعشار).

Integer Division Rules (قوانین تقسیم صحیح):
5/10 = 0 (truncates decimals) 
(اعداد اعشاری حذف می‌شوند).

Use floating points for decimal results 
(برای نتایج اعشاری از اعداد اعشاری استفاده کنید).
*/