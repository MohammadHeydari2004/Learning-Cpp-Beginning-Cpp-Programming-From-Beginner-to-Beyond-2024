#include <iostream> // Required for I/O (ضروری برای ورودی/خروجی)

int main() {

	const double usd_per_eur{ 1.19 }; // Exchange rate (نرخ ارز)

	std::cout << "Welcome to the EUR to USD converter" << std::endl;
	std::cout << "Enter the value in EUR: ";

	double euros{ 0.0 };  // Variable for euros input (متغیر برای ورودی یورو)
	double dollars{ 0.0 }; // Variable for result (متغیر برای نتیجه)

	std::cin >> euros; // Get euros from user (دریافت یورو از کاربر)
	dollars = euros * usd_per_eur; // Calculate conversion (محاسبه تبدیل)

	// Display result with 2 decimal places (نمایش نتیجه با 2 رقم اعشار)
	std::cout.precision(2); // Set precision to 2 decimal places (تنظیم دقت به 2 رقم اعشار)
	std::cout << std::fixed; // Show trailing zeros (نمایش صفرهای انتهایی)

	std::cout << euros << " euros is equivalent to " << dollars << " dollars" << std::endl;

	// Alternative approach with user-defined precision (روش جایگزین با دقت تعریف‌شده توسط کاربر)
	/*
	int precision;
	std::cout << "Enter desired decimal precision (0-10): ";
	std::cin >> precision;
	std::cout.precision(precision);
	*/

	return 0;

}

/*
هدف: کاربرد عملگرهای حسابی در یک برنامه کاربردی (تبدیل ارز).

نکته آموزشی:

از const برای مقادیر ثابت (مثل نرخ ارز) استفاده کنید تا از تغییر تصادفی جلوگیری شود.
برای نمایش اعداد اعشاری با دقت مشخص، از std::cout.precision() و std::fixed استفاده کنید.
همیشه ورودی کاربر را اعتبارسنجی کنید (در این مثال فرض کردیم ورودی صحیح است).

*/