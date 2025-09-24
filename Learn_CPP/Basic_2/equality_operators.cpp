#include <ios>
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)

int main() {

	bool equal_result{ false };     // Stores equality comparison result (ذخیره نتیجه مقایسه تساوی)
	bool not_equal_result{ 0 }; // Stores inequality comparison result (ذخیره نتیجه مقایسه نامساوی)

	int num1{}, num2{}; // Declare two integers (تعریف دو عدد صحیح)

	// Display boolean values as true/false (نمایش مقادیر بولین به‌صورت true/false)
	std::cout << std::boolalpha;

	// Get user input (دریافت ورودی کاربر)
	std::cout << "Enter two integers separated by a space: ";
	std::cin >> num1 >> num2;

	// Check if numbers are equal (بررسی تساوی اعداد)
	equal_result = (num1 == num2);
	std::cout << "Comparison result (equals): " << equal_result << std::endl;

	// Check if numbers are not equal (بررسی نامساوی اعداد)
	not_equal_result = (num1 != num2);
	std::cout << "Comparison result (not equals): " << not_equal_result << std::endl;

	// Works with other data types too (با سایر انواع داده نیز کار می‌کند)
	/*
	char char1 {}, char2 {};
	std::cout << "Enter two characters separated by a space: ";
	std::cin >> char1 >> char2;
	equal_result = (char1 == char2);
	not_equal_result = (char1 != char2);
	std::cout << "Comparison result (equals): " << equal_result << std::endl;
	std::cout << "Comparison result (not equals): " << not_equal_result << std::endl;
	*/

	// WARNING: Be careful with floating-point equality (هشدار: با تساوی اعداد اعشاری مراقب باشید)
	double double1{ 0.1 + 0.1 + 0.1 }; // Should be 0.3 (باید 0.3 باشد)
	double double2{ 0.3 };
	// This might show false due to floating-point precision issues (ممکن است false نمایش دهد به‌دلیل دقت محدود اعداد اعشاری)
	std::cout << "\n0.1+0.1+0.1 == 0.3 ? " << (double1 == double2) << std::endl;

	return 0;

}

/*
هدف: تفاوت عملگرهای تساوی (==) و نامساوی (!=).

نکته آموزشی:

== برای بررسی تساوی مقداری استفاده می‌شود (نه انتساب).
برای اعداد اعشاری، هرگز از == استفاده نکنید چون به‌دلیل دقت محدود، نتایج غیرمنتظره ایجاد می‌شود.
همیشه پرانتز حول عبارات مقایسه‌ای بگذارید تا خوانایی کد افزایش یابد: (num1 == num2).
*/