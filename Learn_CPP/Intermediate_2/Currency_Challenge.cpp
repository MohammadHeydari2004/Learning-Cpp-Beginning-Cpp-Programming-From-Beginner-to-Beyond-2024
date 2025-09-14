// Challenge: Break down cents into coins (چالش: تبدیل سنت به سکه‌ها)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    // Define US currency units (تعریف واحدهای ارز آمریکا)
    const int dollar_value{ 100 };
    const int quarter_value{ 25 };
    const int dime_value{ 10 };
    const int nickel_value{ 5 };

    int change_amount{};

    cout << "Enter cents amount: ";
    cin >> change_amount;


    // TO DO: Calculate coins needed (محاسبه سکه‌های مورد نیاز)
    // Hint: Use division and modulo operators (راهنمایی: از تقسیم و باقیمانده استفاده کنید)


    // Example output structure (ساختار خروجی نمونه)
    cout << "\nChange breakdown:" << endl;
    cout << "Dollars: 0" << endl;
    cout << "Quarters: 0" << endl;
    cout << "Dimes: 0" << endl;
    cout << "Nickels: 0" << endl;
    cout << "Pennies: 0" << endl;

    return 0;

}

/*
Challenge Purpose (هدف چالش):
Apply arithmetic and modulo operators 
(استفاده از عملگرهای حسابی و باقیمانده).

Solve real-world currency conversion
(حل تبدیل ارز دنیای واقعی).

Key Concepts to Use (مفاهیم کلیدی برای استفاده):
Integer division for coin counts 
(تقسیم صحیح برای شمارش سکه‌ها).

Modulo to get remaining amount 
(باقیمانده برای به‌دست آوردن مقدار باقی‌مانده).

Learning Value (ارزش آموزشی):
Reinforces understanding of operators 
(تقویت درک عملگرها).

Develops problem-solving approach 
(رویکرد حل مسئله را توسعه می‌دهد).
*/