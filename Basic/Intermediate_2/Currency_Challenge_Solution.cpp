// Solution to currency breakdown challenge (راه‌حل چالش تبدیل ارز)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    const int dollar_value{ 100 };
    const int quarter_value{ 25 };
    const int dime_value{ 10 };
    const int nickel_value{ 5 };

    int change_amount;
    cout << "Enter cents amount: ";
    cin >> change_amount;

    // Solution 1: Sequential calculation (راه‌حل 1: محاسبه پی‌در‌پی)
    int dollars, quarters, dimes, nickels, pennies;
    int balance{ change_amount };

    dollars = balance / dollar_value;
    balance %= dollar_value;

    quarters = balance / quarter_value;
    balance %= quarter_value;

    dimes = balance / dime_value;
    balance %= dime_value;

    nickels = balance / nickel_value;
    balance %= nickel_value;

    pennies = balance;

    cout << "\nChange breakdown (using modulo):" << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;

}

/*
Modulo Operator Usage (استفاده از عملگر باقیمانده):
balance %= value updates balance with remainder 
(مقدار باقیمانده را به‌روز می‌کند).

Eliminates need for separate subtraction
(نیاز به تفریق جداگانه را از بین می‌برد).

Efficient Calculation (محاسبه کارآمد):
Each step reduces problem size 
(هر مرحله اندازه مسئله را کاهش می‌دهد).

Clear progression from largest to smallest unit 
(پیشرفت واضح از بزرگ‌ترین به کوچک‌ترین واحد).
*/