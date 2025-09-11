#include <iostream> // Input/output stream library (کتابخانه جریان ورودی/خروجی)

int main() {

	int favorite_number; // Declare integer variable (تعریف متغیر صحیح)

	std::cout << "Enter your favorite number between 1 and 100: "; // Prompt user (درخواست از کاربر)

	std::cin >> favorite_number; // Read input into variable (دریافت ورودی در متغیر)

	std::cout << "Amazing!! That's my favorite number too!" << std::endl; // Confirmation message (پیام تأیید)

	std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl; // Use variable in output (استفاده از متغیر در خروجی)

	return 0; // Program exit status (وضعیت خروج برنامه)

}

/*
Uses favorite_number in output
(استفاده از متغیر در خروجی).

<< favorite_number: Inserts variable value into output
(قرار دادن مقدار متغیر در خروجی).
*/