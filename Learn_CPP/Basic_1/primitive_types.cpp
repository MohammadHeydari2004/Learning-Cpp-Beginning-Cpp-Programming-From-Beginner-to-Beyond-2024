#include <iostream> // Input/output stream library (کتابخانه ورودی/خروجی)

int main() {

	/***********************************************
	 *  Character type (نوع داده کاراکتر)
	 **********************************************/
	char middle_initial{ 'J' };  // Single quotes for characters (استفاده از گیومه تکی برای کاراکترها)
	std::cout << "My middle initial is " << middle_initial << std::endl;

	/***********************************************
	 *  Integer types (انواع داده عدد صحیح)
	 **********************************************/
	unsigned short int exam_score{ 55 };  // Positive numbers only (فقط اعداد مثبت)
	std::cout << "My exam score was " << exam_score << std::endl;

	int countries_represented{ 65 };  // Standard integer (عدد صحیح استاندارد)
	std::cout << "There were " << countries_represented << " countries represented" << std::endl;

	long people_in_florida{ 20'610'000 };  // Large integers (اعداد بزرگ)
	std::cout << "There are about " << people_in_florida << " people in Florida" << std::endl;

	long long people_on_earth{ 7'600'000'000 };  // Very large integers (اعداد بسیار بزرگ)
	std::cout << "There are about " << people_on_earth << " people on earth" << std::endl;

	/***********************************************
	 *  Floating point types (انواع داده اعشاری)
	 **********************************************/
	float car_payment{ 401.23f };  // 'f' suffix for float (پسوند f برای اعداد float)
	std::cout << "My car payment is $" << car_payment << std::endl;

	double pi{ 3.14159 };  // Higher precision (دقت بالاتر)
	std::cout << "PI is " << pi << std::endl;

	long double large_amount{ 2.7e120L };  // Scientific notation (نماد علمی)
	std::cout << large_amount << " is a very big number" << std::endl;

	/***********************************************
	 *  Boolean type (نوع داده بولین)
	 **********************************************/
	bool game_over{ false };  // true/false values (مقادیر درست/نادرست)
	std::cout << "The value of gameOver is " << game_over << std::endl;

	/***********************************************
	 *  Overflow example (مثال سرریز)
	 **********************************************/
	short value1{ 30000 };  // Max value for short is 32767 (حداکثر مقدار short: 32767)
	short value2{ 1000 };
	short product{ static_cast<short>(value1 * value2) };  // Explicit casting to prevent overflow (تبدیل صریح برای جلوگیری از سرریز)

	std::cout << "The product of " << value1 << " and " << value2
		<< " is " << product << " (Note: This caused overflow!)" << std::endl;

	return 0;

}

/*
هدف: آشنایی با انواع داده‌های اولیه (Character, Integer, Floating Point, Boolean).

نکته آموزشی:

انواع داده‌ها حافظه متفاوتی مصرف می‌کنند (مثلاً int معمولاً 4 بایت، double 8 بایت).
برای اعداد اعشاری حتماً از f برای float و L برای long double استفاده کنید.
سرریز (Overflow) زمانی رخ می‌دهد که مقدار از حداکثر ظرفیت نوع داده بیشتر شود.
*/