#include <iostream> // Essential for I/O (ضروری برای ورودی/خروجی)

int main() {
	std::cout << "Hello, welcome to Frank's Carpet Cleaning Service" << std::endl;

	int small_rooms{ 0 };
	std::cout << "\nHow many small rooms would you like cleaned? ";
	std::cin >> small_rooms;

	int large_rooms{ 0 };
	std::cout << "How many large rooms would you like cleaned? ";
	std::cin >> large_rooms;

	// CONSTANTS (ثابت‌ها)
	const double price_per_small_room{ 25.0 };
	const double price_per_large_room{ 35.0 };
	const double sales_tax{ 0.06 };
	const int estimate_expiry{ 30 }; // days (روز)

	// CALCULATIONS (محاسبات)
	double cost{ (price_per_small_room * small_rooms) +
				 (price_per_large_room * large_rooms) };
	double tax{ cost * sales_tax };
	double total_estimate{ cost + tax };

	// OUTPUT (خروجی)
	std::cout << "\nEstimate for carpet cleaning service" << std::endl;
	std::cout << "Number of small rooms: " << small_rooms << std::endl;
	std::cout << "Number of large rooms: " << large_rooms << std::endl;
	std::cout << "Price per small room: $" << price_per_small_room << std::endl;
	std::cout << "Price per large room: $" << price_per_large_room << std::endl;
	std::cout << "Cost: $" << cost << std::endl;
	std::cout << "Tax: $" << tax << std::endl;
	std::cout << "===============================" << std::endl;
	std::cout << "Total estimate: $" << total_estimate << std::endl;
	std::cout << "This estimate is valid for " << estimate_expiry << " days" << std::endl;

	return 0;
}

/*
هدف: ترکیب همه مفاهیم در یک پروژه واقعی (سرویس تمیزکاری فرش).

نکته آموزشی:

تبدیل کد به قابل فهم‌تر:
محاسبات پیچیده را به متغیرهای موقت تقسیم کنید (cost, tax, total_estimate).
از فاصله‌گذاری منطقی برای خوانایی کدهای ریاضی استفاده کنید.
چرا این کد حرفه‌ای‌تر است؟
از ثابت‌ها برای مقادیر ثابت استفاده شده است.
خروجی به‌صورت ساختاریافته و حرفه‌ای نمایش داده می‌شود.
کامنت‌های توضیحی در بخش‌های کلیدی قرار گرفته‌اند.
*/