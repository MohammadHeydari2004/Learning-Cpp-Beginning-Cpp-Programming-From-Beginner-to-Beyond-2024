// Mathematical functions from cmath (توابع ریاضی از cmath)
#include <cmath>    // Required for math functions (ضروری برای توابع ریاضی)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

	double num{};
	cout << "Enter a number: ";
	cin >> num;

	cout << "Square root: " << sqrt(num) << endl;
	cout << "Cube root: " << cbrt(num) << endl;

	cout << "Sine: " << sin(num) << endl;
	cout << "Cosine: " << cos(num) << endl;

	cout << "Ceiling: " << ceil(num) << endl;
	cout << "Floor: " << floor(num) << endl;
	cout << "Rounded: " << round(num) << endl;

	double power{};
	cout << "\nEnter power to raise to: ";
	cin >> power;
	cout << num << " raised to " << power << " = " << pow(num, power) << endl;

	return 0;

}

/*
Common Math Functions (توابع ریاضی رایج):
sqrt(): Square root
(جذر).

cbrt(): Cube root
(ریشه سوم).

sin(), cos(): Trigonometric functions
(توابع مثلثاتی).

ceil(), floor(): Rounding functions
(توابع گرد کردن).

pow(): Power function
(تابع توان).

Key Notes (نکات کلیدی):
All functions take double parameters
(همه توابع پارامترهای double می‌گیرند).

Include <cmath> to use them
(برای استفاده از آنها <cmath> را شامل کنید).

Some functions have float versions
(برخی توابع نسخه float دارند).

Practical Applications (کاربردهای عملی):
Scientific calculations
(محاسبات علمی).

Graphics and game development
(گرافیک و توسعه بازی).

Data analysis
(تحلیل داده).
*/