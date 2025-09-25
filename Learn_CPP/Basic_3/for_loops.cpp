#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)

int main() {

	// Basic for loop: count from 1 to 10 (حلقه for پایه: شمارش از 1 تا 10)
	for (int i{ 1 }; i <= 10; ++i)
		std::cout << i << std::endl;

	// Count by 2s (شمارش دو تا دو تا)
	// for (int i{1}; i <= 10; i += 2)
	//    std::cout << i << std::endl;

	// Countdown from 10 (شمارش معکوس از 10)
	// for (int i{10}; i > 0; --i)
	//    std::cout << i << std::endl;
	// std::cout << "Blastoff!" << std::endl;

	// Print multiples of 10 up to 100 (چاپ مضارب 10 تا 100)
	// for (int i{10}; i <= 100; i += 10) {
	//    if (i % 15 == 0) 
	//        std::cout << i << std::endl;
	// }

	// Multiple initialization and update (چندین مقداردهی اولیه و به‌روزرسانی)
	// for (int i{1}, j{5}; i <= 5; ++i, ++j)
	//    std::cout << i << " + " << j << " = " << (i + j) << std::endl;

	// Format output in 10 columns (فرمت‌بندی خروجی در 10 ستون)
	// for (int i{1}; i <= 100; ++i) {
	//    std::cout << i;
	//    if (i % 10 == 0)
	//        std::cout << std::endl;
	//    else 
	//        std::cout << " ";
	// }

	// Using ternary operator for formatting (استفاده از عملگر سه‌گانه برای فرمت‌بندی)
	// for (int i{1}; i <= 100; ++i) {
	//    std::cout << i << ((i % 10 == 0) ? "\n" : " ");
	// }

	// Iterate through a vector (پیمایش وکتور)
	// std::vector<int> nums{10, 20, 30, 40, 50};
	// for (unsigned i{0}; i < nums.size(); ++i)
	//    std::cout << nums[i] << std::endl;

	return 0;

}

/*
هدف: آشنایی با حلقه for که رایج‌ترین ساختار حلقه در سی‌پلاس‌پلاس است.

نکته آموزشی:

ساختار حلقه for: for (initialization; condition; update)
مقداردهی اولیه (int i{1}) فقط یک بار انجام می‌شود.
شرط (i <= 10) قبل از هر تکرار بررسی می‌شود.
به‌روزرسانی (++i) پس از هر تکرار انجام می‌شود.
برای شمارش، همیشه از ++i (پیش‌افزایش) به جای i++ (پس‌افزایش) استفاده کنید.
*/