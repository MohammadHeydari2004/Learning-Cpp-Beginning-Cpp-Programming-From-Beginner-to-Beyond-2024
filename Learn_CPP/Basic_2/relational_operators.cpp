#include <ios>
#include <iostream> // I/O operations library (کتابخانه عملیات ورودی/خروجی)

int main() {

	int num1{}, num2{}; // Uninitialized variables (متغیرهای بدون مقداردهی اولیه)

	// Display boolean values as true/false instead of 1/0 (نمایش مقادیر بولین به‌صورت true/false به جای 1/0)
	std::cout << std::boolalpha;

	const int lower{ 10 };  // Lower boundary (مرز پایین)
	const int upper{ 20 };  // Upper boundary (مرز بالا)

	// Check if number is greater than lower boundary (بررسی اینکه آیا عدد از مرز پایین بیشتر است)
	std::cout << "\nEnter an integer that is greater than " << lower << " : ";
	std::cin >> num1;
	std::cout << num1 << " > " << lower << " is " << (num1 > lower) << std::endl;

	// Check if number is less than or equal to upper boundary (بررسی اینکه آیا عدد کمتر یا مساوی مرز بالا است)
	std::cout << "\nEnter an integer that is less than or equal to " << upper << " : ";
	std::cin >> num1;
	std::cout << num1 << " <= " << upper << " is " << (num1 <= upper) << std::endl;

	// Direct comparison examples (مثال‌های مقایسه مستقیم)
	/*
	std::cout << "\nEnter 2 integers separated by a space: ";
	std::cin >> num1 >> num2;

	std::cout << num1 << " > " << num2 << " : " << (num1 > num2) << std::endl;
	std::cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << std::endl;
	std::cout << num1 << " < " << num2 << " : " << (num1 < num2) << std::endl;
	std::cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << std::endl;
	*/

	return 0;

}

/*
نکته آموزشی:

عملگرهای رابطه‌ای همیشه یک مقدار بولین (true/false) برمی‌گردانند.
std::boolalpha باعث می‌شود مقادیر بولین به‌صورت true/false نمایش داده شوند (نه 1/0).
در عبارت num1 > num2، ابتدا num1 و num2 محاسبه شده، سپس مقایسه انجام می‌شود.
*/