#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)

int main() {

	int num1{ 200 }; // Initialize num1 to 200 (مقداردهی اولیه num1 به 200)
	int num2{ 100 }; // Initialize num2 to 100 (مقداردهی اولیه num2 به 100)

	int result{ 0 }; // Variable to store calculation results (متغیر برای ذخیره نتایج محاسبات)

	// Addition (جمع)
	result = num1 + num2;
	std::cout << num1 << " + " << num2 << " = " << result << std::endl;

	// Subtraction (تفریق)
	result = num1 - num2;
	std::cout << num1 << " - " << num2 << " = " << result << std::endl;

	// Multiplication (ضرب)
	result = num1 * num2;
	std::cout << num1 << " * " << num2 << " = " << result << std::endl;

	// Division (تقسیم)
	result = num1 / num2;
	std::cout << num1 << " / " << num2 << " = " << result << std::endl;

	// Integer division (تقسیم اعداد صحیح)
	result = num2 / num1;
	std::cout << num2 << " / " << num1 << " = " << result << std::endl;
	// Note: Result is 0 because 100/200 = 0.5 which gets truncated to 0 (نتیجه 0 است چون 0.5 به 0 گرد می‌شود)

	// Modulo (باقی‌مانده تقسیم)
	result = num1 % num2;
	std::cout << num1 << " % " << num2 << " = " << result << std::endl;

	// Modulo with different values (باقی‌مانده با مقادیر متفاوت)
	num1 = 10;
	num2 = 3;
	result = num1 % num2;
	std::cout << num1 << " % " << num2 << " = " << result << std::endl;
	// 10 % 3 = 1 because 10 = 3*3 + 1 (10 = 3*3 + 1 پس باقی‌مانده 1 است)

	// Mixed operations (ترکیب عملیات)
	result = num1 * 10 + num2;
	std::cout << "10 * 10 + 3 = " << result << std::endl;

	// Integer vs floating-point division (تقسیم اعداد صحیح در مقابل اعشاری)
	std::cout << "5/10 = " << 5 / 10 << std::endl;      // Integer division: 0 (تقسیم صحیح: 0)
	std::cout << "5.0/10.0 = " << 5.0 / 10.0 << std::endl; // Floating-point division: 0.5 (تقسیم اعشاری: 0.5)

	return 0;

}

/*
هدف: آشنایی با عملگرهای حسابی پایه (+, -, *, /, %).

کته آموزشی:

عملگر % فقط برای اعداد صحیح کار می‌کند و باقی‌مانده تقسیم را محاسبه می‌کند.
در تقسیم اعداد صحیح (5/10)، نتیجه به سمت پایین گرد می‌شود (نتیجه 0 می‌شود).
برای تقسیم اعشاری، حداقل یکی از اعداد باید اعشاری باشد (5.0/10.0).
*/