#include <iostream> // Essential for I/O operations (ضروری برای عملیات ورودی/خروجی)

int main() {

	// ERROR: Cannot divide a string by a number! (خطا: نمی‌توان یک رشته را بر عدد تقسیم کرد!)
//	std::cout << ("Hello world" / 125) << std::endl;
	// This causes a compilation error (این کد خطای کامپایل ایجاد می‌کند)
	return 0;

}

/*
هدف: آشنایی با خطاهای رایج کامپایل (عملیات نامعتبر روی رشته).

کته آموزشی:
رشته‌ها ("Hello world") و اعداد دو نوع داده متفاوت هستند. عملیات ریاضی روی رشته‌ها غیرمجاز است.
*/