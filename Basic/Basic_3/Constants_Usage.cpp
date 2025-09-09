// Using constants for fixed values (استفاده از ثوابت برای مقادیر ثابت)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {
    cout << "How many rooms? ";
    int number_of_rooms{ 0 };
    cin >> number_of_rooms;

    const double price_per_room{ 32.5 }; // Cannot be changed (قابل تغییر نیست)
    const double sales_tax{ 0.06 };
    const int estimate_expiry{ 30 }; // Days (روزها)

    cout << "\nEstimate:" << endl;
    cout << "Rooms: " << number_of_rooms << endl;
    cout << "Price: $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_of_rooms << endl;
    cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax << endl;
    cout << "Total: $"
        << (price_per_room * number_of_rooms) * (1 + sales_tax)
        << endl;
    cout << "Valid for " << estimate_expiry << " days" << endl;
    return 0;
}

/*
const Keyword (کلیدواژه const):
Makes variables unchangeable after initialization
(پس از مقداردهی اولیه تغییرناپذیر می‌کند).

Essential for fixed values like tax rates
(برای مقادیر ثابت مثل نرخ مالیات ضروری است).

Calculation Optimization (بهینه‌سازی محاسبات):
(1 + sales_tax) simplifies tax calculation 
(ساده‌سازی محاسبه مالیات).

Avoids repeating complex expressions 
(جلوگیری از تکرار عبارات پیچیده).

Why Constants Matter (اهمیت ثوابت):
Prevents accidental changes
(جلوگیری از تغییرات تصادفی).

Improves code readability 
(افزایش خوانایی کد).
*/