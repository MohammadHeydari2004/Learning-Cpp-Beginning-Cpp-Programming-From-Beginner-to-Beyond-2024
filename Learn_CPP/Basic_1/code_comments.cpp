// Comments (بخش 5: کامنت‌ها)
// This file demonstrates proper commenting techniques (این فایل تکنیک‌های صحیح کامنت‌نویسی را نشان می‌دهد)

#include <iostream> // Essential for console I/O (ضروری برای ورودی/خروجی کنسول)

/*
 * Author: Mohammad
 * Date: 11/11/2017
 * Version: 1.0
 *
 * Change Log (لیست تغییرات):
 * 11/11/2017 - Frank: Fixed bug in calculation logic (رفع باگ در منطق محاسبه)
 * 11/13/2017 - Joe: Added user input validation (افزودن اعتبارسنجی ورودی کاربر)
 */

int main() {

	int favorite_number;  // Stores user's favorite number (ذخیره عدد مورد علاقه کاربر)

	// Prompt user for input (درخواست ورودی از کاربر)
	std::cout << "Enter your favorite number between 1 and 100: ";

	// Read input from keyboard (خواندن ورودی از صفحه‌کلید)
	std::cin >> favorite_number;

	// Display confirmation message (نمایش پیام تأیید)
	std::cout << "Amazing!! That's my favorite number too!" << std::endl;
	std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;

	return 0;  // Program exited successfully (خروج موفقیت‌آمیز برنامه)

}

/*
هدف: یادگیری کامنت‌نویسی حرفه‌ای برای مستندسازی کد.

کامنت‌ها در هنگام کامپایل نادیده گرفته می‌شوند و فقط برای خوانندگان کد هستند.
مستندسازی حرفه‌ای (مثل بخش Change Log) برای پروژه‌های تیمی ضروری است.
*/
// کامنت تک‌خطی (//): برای توضیحات کوتاه در انتهای خط.
// کامنت چندخطی (/* */): برای توضیحات طولانی یا غیرفعال کردن بخشی از کد.
