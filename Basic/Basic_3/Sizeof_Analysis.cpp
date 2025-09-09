// Memory size analysis of data types (تحلیل حافظه انواع داده)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <climits> // For min/max values (برای مقادیر حداقل/حداکثر)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {
    cout << "sizeof results (bytes):" << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;

    cout << "\nMinimum values:" << endl;
    cout << "int: " << INT_MIN << endl; // From <climits> (از کتابخانه climits)
    cout << "long: " << LONG_MIN << endl;

    cout << "\nMaximum values:" << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;

    int age{ 21 };
    cout << "\nSize of age variable: " << sizeof(age) << " bytes" << endl;
    return 0;
}

/*
sizeof Operator (عملگر sizeof):
Returns bytes occupied by type/variable 
(بایت‌های اشغال‌شده توسط نوع/متغیر).

Works on types (sizeof(int)) or variables (sizeof(age)).

<climits> Constants (ثوابت climits):
INT_MIN/INT_MAX: Integer limits 
(محدوده‌های اعداد صحیح).

Critical for preventing overflow 
(برای جلوگیری از سرریز ضروری است).

Memory Awareness (آگاهی از حافظه):
Larger types = more precision but more memory 
(انواع بزرگتر = دقت بیشتر اما حافظه بیشتر).

Choose types based on requirements 
(انتخاب نوع بر اساس نیازها).
*/