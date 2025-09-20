#include <iostream> // I/O operations library (کتابخانه عملیات ورودی/خروجی)

int age{ 18 }; // GLOBAL variable (متغیر سراسری - در کل برنامه قابل دسترسی)

int main() {

	int age{ 16 };    // LOCAL variable (متغیر محلی - فقط در تابع main قابل دسترسی)

	// Which 'age' will be printed? (کدام 'age' چاپ می‌شود؟)
	std::cout << "Local age: " << age << std::endl;  // Prints 16 (چاپ 16)

	// Access global variable using scope resolution operator (دسترسی به متغیر سراسری با عملگر ::)
	std::cout << "Global age: " << ::age << std::endl;  // Prints 18 (چاپ 18)

	return 0;

}

/*
هدف: تفاوت متغیرهای سراسری (Global) و محلی (Local).

نکته آموزشی:

متغیرهای محلی (در داخل تابع) اولویت بالاتری نسبت به سراسری دارند.
برای دسترسی به متغیر سراسری از :: (عملگر تفکیک محدوده) استفاده کنید.
استفاده از متغیرهای سراسری توصیه نمی‌شود چون باعث پیچیدگی و خطاهای دشوار برای رفع می‌شود.

*/