#include <iostream> // I/O operations library (کتابخانه عملیات ورودی/خروجی)

extern int x; // Declares an external variable (تعریف یک متغیر خارجی)

int main() {

	std::cout << "Hello world" << std::endl;
	std::cout << x; // ERROR: 'x' is not defined anywhere! (خطا: 'x' در هیچ جا تعریف نشده است!)
	return 0;

}

/*
هدف: آشنایی با خطاهای لینکر (استفاده از متغیر تعریف‌نشده).

extern برای اشاره به متغیرهای تعریف‌شده در فایل‌های دیگر استفاده می‌شود.
اگر متغیر مورد نظر تعریف نشده باشد، خطای لینکر رخ می‌دهد.
*/