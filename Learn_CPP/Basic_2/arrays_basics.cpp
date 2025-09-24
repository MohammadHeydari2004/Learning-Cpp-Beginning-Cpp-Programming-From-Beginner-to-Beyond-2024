#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)

int main() {

	// Declare and initialize a character array (تعریف و مقداردهی اولیه آرایه کاراکتری)
	char vowels[]{ 'a', 'e', 'i', 'o', 'u' };
	// Note: Size is automatically calculated (نکته: اندازه به‌صورت خودکار محاسبه می‌شود)

	// Access first element (دسترسی به اولین عنصر)
	std::cout << "\nThe first vowel is: " << vowels[0] << std::endl; // Index starts at 0 (شماره‌گذاری از 0 شروع می‌شود)
	// Access last element (دسترسی به آخرین عنصر)
	std::cout << "The last vowel is: " << vowels[4] << std::endl;

	// Declare and initialize a double array (تعریف آرایه اعشاری)
	double hi_temps[]{ 90.1, 89.8, 77.5, 81.6 };
	std::cout << "\nThe first high temperature is: " << hi_temps[0] << std::endl;

	// Modify array element (تغییر مقدار یک عنصر)
	hi_temps[0] = 100.7; // Changes first element (تغییر اولین عنصر)
	std::cout << "The first high temperature is now: " << hi_temps[0] << std::endl;

	// Declare and initialize integer array (تعریف آرایه عدد صحیح)
	int test_scores[]{ 100, 90, 80, 70, 60 };

	// Display all elements (نمایش تمام عناصر)
	std::cout << "\nFirst score at index 0: " << test_scores[0] << std::endl;
	std::cout << "Second score at index 1: " << test_scores[1] << std::endl;
	// ... (other elements) (سایر عناصر)

	// Get user input for array (دریافت ورودی کاربر برای آرایه)
	std::cout << "\nEnter 5 test scores: ";
	std::cin >> test_scores[0]; // Overwrites existing value (جایگزینی مقدار موجود)
	std::cin >> test_scores[1];
	// ... (other inputs) (سایر ورودی‌ها)

	// WARNING: Never access out-of-bounds elements! (هشدار: هرگز به عناصر خارج از محدوده دسترسی نداشته باشید!)
	// std::cin >> test_scores[5]; // This causes undefined behavior (این کار رفتار تعریف‌نشده ایجاد می‌کند)

	std::cout << "\nNotice what the value of the array name is: " << test_scores << std::endl;
	// Shows memory address (نشان‌دهنده آدرس حافظه است)

	return 0;

}

/*
هدف: آشنایی با آرایه‌های ساده (اندازه ثابت) و دسترسی به عناصر.

نکته آموزشی:

آرایه‌ها اندازه ثابت دارند و پس از تعریف نمی‌توانند بزرگ‌تر شوند.
شماره‌گذاری از 0 شروع می‌شود (اولین عنصر array[0] است).
دسترسی به عناصر خارج از محدوده (array[5] در آرایه 5 عنصری) خطای جدی است و ممکن است برنامه را خراب کند.
نام آرایه در واقع آدرس اولین عنصر در حافظه است.
*/