#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)

int main() {

	int num{}; // Variable to store user input (متغیر برای ذخیره ورودی کاربر)
	const int min{ 10 }; // Minimum boundary (مرز پایین)
	const int max{ 100 }; // Maximum boundary (مرز بالا)

	// Prompt user for input (درخواست ورودی از کاربر)
	std::cout << "Enter a number between " << min << " and " << max << ": ";
	std::cin >> num;

	// First condition: Check if number is greater than or equal to min (شرط اول: بررسی اینکه آیا عدد بزرگ‌تر یا مساوی min است)
	if (num >= min) {
		std::cout << "\n=========== If statement 1 =============" << std::endl;
		std::cout << num << " is greater than or equal to " << min << std::endl;

		// Calculate difference (محاسبه تفاوت)
		int diff{ num - min };
		std::cout << num << " is " << diff << " greater than " << min << std::endl;
	}

	// Second condition: Check if number is less than or equal to max (شرط دوم: بررسی اینکه آیا عدد کوچک‌تر یا مساوی max است)
	if (num <= max) {
		std::cout << "\n=========== If statement 2 =============" << std::endl;
		std::cout << num << " is less than or equal to " << max << std::endl;

		// Calculate difference (محاسبه تفاوت)
		int diff{ max - num };
		std::cout << num << " is " << diff << " less than " << max << std::endl;
	}

	// Third condition: Check if number is within range (شرط سوم: بررسی اینکه آیا عدد در محدوده است)
	if (num >= min && num <= max) {
		std::cout << "\n=========== If statement 3 =============" << std::endl;
		std::cout << num << " is in range " << std::endl;
		std::cout << "This means statements 1 and 2 must also display!" << std::endl;
	}

	// Fourth condition: Check if number is on boundary (شرط چهارم: بررسی اینکه آیا عدد روی مرز است)
	if (num == min || num == max) {
		std::cout << "\n=========== If statement 4 =============" << std::endl;
		std::cout << num << " is right on a boundary " << std::endl;
		std::cout << "This means all 4 statements display " << std::endl;
	}

	return 0;

}

/*
هدف: آشنایی با دستور شرطی ساده if.

نکته آموزشی:

دستور if فقط اجرا می‌شود اگر شرط داخل پرانتز درست (true) باشد.
هر دستور if مستقل است و می‌تواند بدون else استفاده شود.
برای شرط‌های پیچیده از عملگرهای منطقی (&&, ||) استفاده کنید.
همیشه از پرانتز حول شرط استفاده کنید تا خوانایی کد افزایش یابد.
*/