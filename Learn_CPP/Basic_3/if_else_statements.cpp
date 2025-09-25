#include <iostream> // Required for I/O operations (ضروری برای عملیات ورودی/خروجی)

int main() {

	int num{}; // Variable for user input (متغیر برای ورودی کاربر)
	const int target{ 10 }; // Target value for comparison (مقدار هدف برای مقایسه)

	// Prompt user for input (درخواست ورودی از کاربر)
	std::cout << "Enter a number and I'll compare it to " << target << ": ";
	std::cin >> num;

	// if-else structure (ساختار if-else)
	if (num >= target) {
		std::cout << "\n==================================" << std::endl;
		std::cout << num << " is greater than or equal to " << target << std::endl;

		// Calculate difference (محاسبه تفاوت)
		int diff{ num - target };
		std::cout << num << " is " << diff << " greater than " << target << std::endl;
	}
	else {
		std::cout << "\n==================================" << std::endl;
		std::cout << num << " is less than " << target << std::endl;

		// Calculate difference (محاسبه تفاوت)
		int diff{ target - num };
		std::cout << num << " is " << diff << " less than " << target << std::endl;
	}

	return 0;

}

/*
هدف: آشنایی با ساختار if-else برای تصمیم‌گیری دو حالته.

نکته آموزشی:

ساختار if-else برای تصمیم‌گیری‌های دو حالته استفاده می‌شود.
اگر شرط if نادرست باشد، بلوک else اجرا می‌شود.
فقط یکی از بلوک‌ها (if یا else) اجرا خواهد شد.
از فاصله‌گذاری و تورفتگی (Indentation) برای خوانایی بهتر کد استفاده کنید.
*/