#include <iostream> // Input/output stream library (کتابخانه جریان ورودی/خروجی)

int main() {

	int favorite_number; // Declare integer variable (تعریف متغیر صحیح)

	std::cout << "Enter your favorite number between 1 and 100: "; // Prompt user (درخواست از کاربر)

	std::cin >> favorite_number; // Read input into variable (دریافت ورودی در متغیر)

	std::cout << "Amazing!! That's my favorite number too!" << std::endl; // Confirmation message (پیام تأیید)

	return 0; // Program exit status (وضعیت خروج برنامه)

}

/*
std::cin  : Reads user input
(دریافت ورودی کاربر).

>>  : Stream extraction operator
(عملگر استخراج از جریان).

Combines output (cout) and input (cin)
(ترکیب خروجی و ورودی).
*/