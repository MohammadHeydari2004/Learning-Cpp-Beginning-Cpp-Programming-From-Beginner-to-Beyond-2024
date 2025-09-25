#include <iostream> // I/O operations library (کتابخانه عملیات ورودی/خروجی)

int main() {

    int num1{}, num2{}; // Variables for user input (متغیرها برای ورودی کاربر)

    // Prompt user for two integers (درخواست دو عدد صحیح از کاربر)
    std::cout << "Enter two integers separated by a space: ";
    std::cin >> num1 >> num2;

    // Check if numbers are equal (بررسی اینکه آیا اعداد مساوی هستند)
    if (num1 != num2) {
        // Using ternary operator to find largest number (استفاده از عملگر سه‌گانه برای یافتن بزرگ‌ترین عدد)
        std::cout << "Largest: " << ((num1 > num2) ? num1 : num2) << std::endl;

        // Using ternary operator to find smallest number (استفاده از عملگر سه‌گانه برای یافتن کوچک‌ترین عدد)
        std::cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << std::endl;
    }
    else {
        // Handle equal numbers (مدیریت اعداد مساوی)
        std::cout << "The numbers are the same" << std::endl;
    }

    return 0;

}

/*
هدف: آشنایی با عملگر شرطی سه‌گانه (Ternary Operator) به عنوان جایگزین فشرده‌تر if-else.

نکته آموزشی:

ساختار عملگر سه‌گانه: condition ? expression_if_true : expression_if_false
این عملگر برای عبارات ساده مناسب است، نه برای بلوک‌های کد پیچیده.
از آن برای کد فشرده‌تر و خواناتر استفاده کنید، اما نه به قیمت کاهش خوانایی.
مثال: num % 2 == 0 ? "even" : "odd" بررسی زوج یا فرد بودن عدد.
*/