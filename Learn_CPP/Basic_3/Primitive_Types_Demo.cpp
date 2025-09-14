// Demonstrates fundamental data types (نشان‌دهنده انواع داده پایه‌ای)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

	/***********************************************
	 * Character type (نوع کاراکتر)
	 **********************************************/
	char middle_initial{ 'J' }; // Single quotes for chars (استفاده از گیومه تکی برای کاراکترها)
	cout << "My middle initial is " << middle_initial << endl;

	/***********************************************
	 * Integer types (انواع اعداد صحیح)
	 **********************************************/
	unsigned short int exam_score{ 55 }; // No negative values (بدون مقادیر منفی)
	cout << "My exam score was " << exam_score << endl;

	int countries_represented{ 65 }; // Standard integer (عدد صحیح استاندارد)
	cout << "There were " << countries_represented << " countries represented" << endl;

	long people_in_florida{ 20'610'000 }; // Apostrophes for readability (آپاستروف برای خوانایی)
	cout << "Florida population: " << people_in_florida << endl;

	long long people_on_earth{ 7'600'000'000 }; // Very large numbers (اعداد بسیار بزرگ)
	cout << "Earth population: " << people_on_earth << endl;

	/***********************************************
	 * Floating point types (انواع اعشاری)
	 **********************************************/
	float car_payment{ 401.23f }; // 'f' suffix for float (پسوند 'f' برای float)
	cout << "Car payment: $" << car_payment << endl;

	double pi{ 3.14159 }; // Higher precision (دقت بالاتر)
	cout << "PI value: " << pi << endl;

	/***********************************************
	 * Boolean type (نوع بولین)
	 **********************************************/
	bool game_over{ false }; // true/false values (مقادیر درست/نادرست)
	cout << "Game over status: " << game_over << endl;

	/***********************************************
	 * Overflow example (مثال سرریز)
	 **********************************************/
	short value1{ 30000 };
	short value2{ 1000 };
	short product{ static_cast<short>(value1 * value2) }; // Explicit cast (تبدیل صریح)
	cout << "Product: " << product << endl; // Will overflow (سرریز خواهد کرد)

	return 0;

}

/*
Data Type Categories (دسته‌بندی انواع داده):
char: Single characters
(کاراکترهای تکی).

int variants: Whole numbers of different sizes
(اعداد صحیح با اندازه‌های مختلف).

float/double: Decimal numbers
(اعداد اعشاری).

bool: True/false values
(مقادیر درست/نادرست).

Key Syntax (سینتکس کلیدی):
{} initialization
(مقداردهی اولیه با آکولاد).

' ' for chars, " " for strings

' separators in numbers
(جداکننده آپاستروف در اعداد).

Critical Concepts (مفاهیم حیاتی):
Overflow occurs when value exceeds type capacity
(سرریز هنگام تجاوز از ظرفیت نوع رخ می‌دهد).

float vs double: Precision differences
(تفاوت دقت بین float و double).
*/