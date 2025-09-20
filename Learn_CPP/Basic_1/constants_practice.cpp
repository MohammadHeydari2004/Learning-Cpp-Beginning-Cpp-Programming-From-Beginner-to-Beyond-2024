#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)

int main() {

	std::cout << "Hello, welcome to Frank's Carpet Cleaning Service" << std::endl;

	int number_of_rooms{ 0 };
	std::cout << "\nHow many rooms would you like cleaned? ";
	std::cin >> number_of_rooms;

	// CONSTANTS: Values that never change (ثابت‌ها: مقادیری که هرگز تغییر نمی‌کنند)
	const double price_per_room{ 32.5 };    // Cannot be modified after declaration (پس از تعریف قابل تغییر نیست)
	const double sales_tax{ 0.06 };         // Tax rate (نرخ مالیات)
	const int estimate_expiry{ 30 };        // Validity period in days (مدت اعتبار پیش‌فاکتور)

	// Calculate costs (محاسبه هزینه‌ها)
	double cost{ price_per_room * number_of_rooms };
	double tax{ cost * sales_tax };
	double total_estimate{ cost + tax };

	// Display professional estimate (نمایش پیش‌فاکتور حرفه‌ای)
	std::cout << "\nEstimate for carpet cleaning service" << std::endl;
	std::cout << "Number of rooms: " << number_of_rooms << std::endl;
	std::cout << "Price per room: $" << price_per_room << std::endl;
	std::cout << "Cost: $" << cost << std::endl;
	std::cout << "Tax: $" << tax << std::endl;
	std::cout << "===============================" << std::endl;
	std::cout << "Total estimate: $" << total_estimate << std::endl;
	std::cout << "This estimate is valid for " << estimate_expiry << " days" << std::endl;

	return 0;

}

/*
هدف: تفاوت متغیرها و ثابت‌ها (Constants) در عمل.

نکته آموزشی:

ثابت‌ها با const تعریف می‌شوند و پس از مقداردهی تغییر نمی‌کنند.
استفاده از ثابت‌ها برای مقادیر ثابت (مثل نرخ مالیات) خطاهای برنامه‌نویسی را کاهش می‌دهد.
نام ثابت‌ها معمولاً با حروف بزرگ نوشته می‌شوند (مثل TAX_RATE).
*/