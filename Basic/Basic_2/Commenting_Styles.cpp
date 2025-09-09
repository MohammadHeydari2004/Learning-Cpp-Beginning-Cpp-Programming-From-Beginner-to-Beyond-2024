/*
****************************************************
 * author Mohammad (نویسنده: محمد)
 *
 * 11/11/2017  Frank - fixed bug in ... (تاریخ‌ها و تغییرات تیم)
 * 11/13/2017 Joe - Added function to...
 *
 ***************************************************
*/

#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)

// Single-line comment (توضیح تک‌خطی)
/* This is a multiple
        line
         comment (توضیح چندخطی) */

int main() {

    int favorite_number;  // Stores user's favorite number (ذخیره عدد موردعلاقه کاربر)

    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;    /* Input handling comment (توضیح دریافت ورودی) */

    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;

    return 0;  // Success exit code (کد خروج موفق)

}

/*
Documentation Standards (استانداردهای مستندسازی):
Header comments show author/version history 
(توضیحات بالای کد شامل نویسنده و تاریخچه نسخه).

Inline Comments (توضیحات درون‌خطی):
Explain specific code sections 
(توضیح بخش‌های خاص کد).

Why Comments Matter (اهمیت توضیحات):
Essential for teamwork and future maintenance 
(برای کار تیمی و نگهداری آینده ضروری است).
*/