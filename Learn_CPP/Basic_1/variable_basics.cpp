#include <iostream> // Essential for I/O operations (ضروری برای عملیات ورودی/خروجی)

int main() {

	// Initialize variables to zero (مقداردهی اولیه به صفر)
	int room_width{ 0 };
	int room_length{ 0 };

	// Prompt user for width (درخواست عرض اتاق از کاربر)
	std::cout << "Enter the width of the room: ";
	std::cin >> room_width;

	// Prompt user for length (درخواست طول اتاق از کاربر)
	std::cout << "Enter the length of the room: ";
	std::cin >> room_length;

	// Calculate and display area (محاسبه و نمایش مساحت)
	std::cout << "The area of the room is "
		<< room_width * room_length  // Multiplication operation (عملیات ضرب)
		<< " square feet" << std::endl;

	return 0;

}

/*
هدف: تعریف و استفاده از متغیرها با ورودی کاربر.

نکته آموزشی:

همیشه متغیرها را مقداردهی اولیه کنید تا از مقادیر تصادفی جلوگیری شود.
std::cin برای دریافت ورودی و >> برای جهت‌دهی داده به متغیر استفاده می‌شود.
عملیات ریاضی (*, +, -, /) مستقیماً در دستور cout قابل استفاده هستند.
*/