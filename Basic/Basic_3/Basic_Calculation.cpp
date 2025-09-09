// Simple area calculation example (مثال ساده محاسبه مساحت)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {
    cout << "Enter room width: ";
    int room_width{ 0 }; // Initialize to zero (مقدار اولیه صفر)
    cin >> room_width;

    cout << "Enter room length: ";
    int room_length{ 0 };
    cin >> room_length;

    cout << "Area: " << room_width * room_length << " sq ft" << endl;
    return 0;
}

/*
User Input Flow (جریان ورودی کاربر):
Prompt message (cout)
Read input (cin)
Store in variable

Arithmetic Operation (عملیات ریاضی):
* operator for multiplication
(عملگر ضرب).

Automatic type handling for int 
(مدیریت خودکار نوع برای int).

Why Initialization Matters (اهمیت مقداردهی اولیه):
Prevents garbage values 
(جلوگیری از مقادیر ناخواسته).

{0} ensures defined starting state 
(تضمین حالت اولیه تعریف‌شده).
*/