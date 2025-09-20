#include <iostream> // Library for input/output (کتابخانه برای ورودی/خروجی)

int main() {

	int favorite_number; // Variable to store user input (متغیر برای ذخیره ورودی کاربر)

	std::cout << "Enter your favorite number between 1 and 100: "; // Prompt message (پیام راهنما برای کاربر)
	std::cin >> favorite_number; // Reads input from user (دریافت ورودی از کاربر)

	std::cout << "Amazing!! That's my favorite number too!" << std::endl; // Generic response (پاسخ کلی بدون استفاده از متغیر)
	return 0;

}

/*
هدف: دریافت ورودی کاربر بدون نمایش مقدار آن (نمونه‌ای از کاربرد ساده cin).

نکته آموزشی:
این کد ورودی را می‌خواند اما مقدار آن را نمایش نمی‌دهد.
در کد بعدی یاد می‌گیریم چگونه از متغیر در خروجی استفاده کنیم.
*/