#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)

int main() {

	// Define enumeration for directions (تعریف نوع شمارشی برای جهت‌ها)
	enum Direction {
		left, right, up, down
	};

	Direction heading{ left }; // Variable with enumeration type (متغیر با نوع شمارشی)

	// Switch statement with enumeration (دستور switch با نوع شمارشی)
	switch (heading) {
	case left:
		std::cout << "Going left" << std::endl;
		break;
	case right:
		std::cout << "Going right" << std::endl;
		break;
	case up:
		std::cout << "Going up" << std::endl;
		break;
	case down:
		std::cout << "Going down" << std::endl;
		break;
	default:
		// This should never happen with enumerations (این هرگز با انواع شمارشی اتفاق نمی‌افتد)
		std::cout << "OK" << std::endl;
	}

	return 0;

}

/*
هدف: استفاده پیشرفته‌تر از switch با همراهی انواع شمارشی (Enumerations).

نکته آموزشی:

انواع شمارشی (enum) برای تعریف مجموعه‌ای از مقادیر ثابت استفاده می‌شوند.
مقادیر شمارشی به‌صورت پیش‌فرض از 0 شروع می‌شوند و یکی یکی افزایش می‌یابند.
استفاده از enum با switch کد را خواناتر و ایمن‌تر می‌کند.
در سی‌پلاس‌پلاس مدرن، از enum class برای جلوگیری از آلودگی فضای نام استفاده کنید.
*/