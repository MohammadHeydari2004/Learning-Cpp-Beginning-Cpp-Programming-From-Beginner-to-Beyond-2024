#include <iostream> // Essential for I/O operations (ضروری برای عملیات ورودی/خروجی)

int main() {

    int favorite_number; // Variable to store the number (متغیر برای ذخیره عدد)

    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number; // Captures user input (ثبت ورودی کاربر)

    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;
    // Displays the stored variable (نمایش مقدار ذخیره‌شده در متغیر)

    return 0;

}

/*
نکته آموزشی:
با << می‌توانیم متغیرها را مستقیماً در خروجی قرار دهیم. این روش برای نمایش پویای داده‌ها استفاده می‌شود.
*/