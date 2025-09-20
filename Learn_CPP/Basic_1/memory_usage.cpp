#include <climits>  // For integer limits (برای حدود عدد صحیح)
#include <iostream> // For cout/cin (برای cout/cin)

int main() {

	std::cout << "sizeof information" << std::endl;
	std::cout << "========================" << std::endl;

	// Display memory usage of primitive types (نمایش حافظه مصرفی انواع داده)
	std::cout << "char: " << sizeof(char) << " bytes." << std::endl;
	std::cout << "int: " << sizeof(int) << " bytes." << std::endl;
	std::cout << "short: " << sizeof(short) << " bytes." << std::endl;
	std::cout << "long: " << sizeof(long) << " bytes." << std::endl;
	std::cout << "long long: " << sizeof(long long) << " bytes." << std::endl;

	std::cout << "========================" << std::endl;
	std::cout << "float: " << sizeof(float) << " bytes." << std::endl;
	std::cout << "double: " << sizeof(double) << " bytes." << std::endl;
	std::cout << "long double: " << sizeof(long double) << " bytes." << std::endl;

	// Display minimum/maximum values (نمایش حداقل/حداکثر مقادیر)
	std::cout << "========================" << std::endl;
	std::cout << "Minimum values:" << std::endl;
	std::cout << "char: " << CHAR_MIN << std::endl;
	std::cout << "int: " << INT_MIN << std::endl;

	std::cout << "========================" << std::endl;
	std::cout << "Maximum values:" << std::endl;
	std::cout << "char: " << CHAR_MAX << std::endl;
	std::cout << "int: " << INT_MAX << std::endl;

	// sizeof with variables (استفاده از sizeof با متغیرها)
	std::cout << "========================" << std::endl;
	int age{ 21 };
	std::cout << "age is " << sizeof(age) << " bytes." << std::endl;
	// Equivalent to: sizeof(int) (معادل با: sizeof(int))

	double wage{ 22.24 };
	std::cout << "wage is " << sizeof wage << " bytes." << std::endl;
	// Parentheses are optional for variables (پرانتز برای متغیرها اختیاری است)

	return 0;

}

/*
هدف: اندازه‌گیری حافظه مصرفی انواع داده‌ها با sizeof.

sizeof در زمان کامپایل اندازه حافظه را محاسبه می‌کند (نه در زمان اجرا).
اندازه انواع داده‌ها بسته به سیستم عامل و کامپایلر متفاوت است (مثلاً int روی سیستم‌های 32 بیتی 4 بایت است).
حداقل/حداکثر مقادیر با <climits> قابل دسترسی هستند (مثل INT_MAX).
*/