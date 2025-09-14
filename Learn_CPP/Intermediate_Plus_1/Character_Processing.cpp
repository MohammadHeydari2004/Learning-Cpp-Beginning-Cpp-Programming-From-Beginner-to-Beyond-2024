// Character classification and processing (طبقه‌بندی و پردازش کاراکترها)
#include <cctype>   // For character functions (برای توابع کاراکتری)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

	// Sample text for analysis (متن نمونه برای تحلیل)
	char str[]{ "1234'5sddd'fdffg\n\t&^%23**~Frank Mary~     @!()-+=%^?<>;:" };

	int num_letters{};
	int num_digits{};
	int num_whitespace{};
	int num_punctuation{};
	int num_others{};

	// Character classification (طبقه‌بندی کاراکترها)
	for (char c : str) {
		if (isalpha(c))
			num_letters++;
		else if (isdigit(c))
			num_digits++;
		else if (isspace(c))
			num_whitespace++;
		else if (ispunct(c))
			num_punctuation++;
		else
			num_others++;
	}

	// Display results (نمایش نتایج)
	cout << "Analysis results:" << endl;
	cout << "Letters: " << num_letters << endl;
	cout << "Digits: " << num_digits << endl;
	cout << "Whitespace: " << num_whitespace << endl;
	cout << "Punctuation: " << num_punctuation << endl;
	cout << "Others: " << num_others << endl;

	// Character transformation (تبدیل کاراکترها)
	char str1[]{ "This is a test - 1 2 3" };
	cout << "\nUppercase conversion:" << endl;
	for (char c : str1) {
		cout << static_cast<char>(toupper(c)); // Convert to uppercase (تبدیل به حروف بزرگ)
	}
	cout << endl;

	return 0;

}

/*
Character Classification Functions (توابع طبقه‌بندی کاراکترها):
isalpha(): Checks if alphabetic
(بررسی حروف الفبا).

isdigit(): Checks if digit
(بررسی اعداد).

isspace(): Checks if whitespace
(بررسی فاصله‌ها).

ispunct(): Checks if punctuation
(بررسی نشانه‌های سجاوندی).

Character Transformation Functions (توابع تبدیل کاراکترها):
toupper(): Converts to uppercase
(تبدیل به حروف بزرگ).

tolower(): Converts to lowercase
(تبدیل به حروف کوچک).
*/