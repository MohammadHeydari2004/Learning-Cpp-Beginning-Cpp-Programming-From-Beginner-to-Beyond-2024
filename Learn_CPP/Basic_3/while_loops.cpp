#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)

int main() {

    int num{}; // Variable for countdown (متغیر برای شمارش معکوس)

    // Prompt user for input (درخواست ورودی از کاربر)
    std::cout << "Enter a positive integer - start the countdown: ";
    std::cin >> num;

    // While loop: continues as long as condition is true (حلقه while: تا زمانی که شرط درست باشد ادامه می‌یابد)
    while (num > 0) {
        std::cout << num << std::endl;
        --num; // Decrement num (کاهش مقدار num)
    }

    std::cout << "Blastoff!" << std::endl;

    return 0;

}

/*
هدف: آشنایی با حلقه while برای تکرار شرطی

نکته آموزشی:

حلقه while فقط اجرا می‌شود اگر شرط اولیه درست (true) باشد.
حتماً متغیر شرط را در داخل حلقه تغییر دهید تا از حلقه بی‌نهایت جلوگیری شود.
از --num (پیش‌کاهش) به جای num-- (پس‌کاهش) برای خوانایی بهتر استفاده کنید.
برای شمارش معکوس، شرط باید num > 0 باشد نه num >= 0.
*/