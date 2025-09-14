// Function overloading demonstration (نشان‌دادن اضافه‌بارگیری توابع)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <string>   // For string handling (برای مدیریت رشته‌ها)
#include <vector>   // For vector handling (برای مدیریت وکتورها)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

// Overloaded functions (توابع اضافه‌بارگیری‌شده)
void print(int num) {

	cout << "Printing int: " << num << endl;

}

void print(double num) {

	cout << "Printing double: " << num << endl;

}

void print(string s) {

	cout << "Printing string: " << s << endl;

}

void print(string s, string t) {

	cout << "Printing 2 strings: " << s << " and " << t << endl;

}

void print(vector<string> v) {

	cout << "Printing vector: ";
	for (auto s : v)
		cout << s << " ";
	cout << endl;

}

int main() {

	print(100);        // Calls print(int) (فراخوانی print(int))
	print('A');        // Promoted to int (تبدیل به int)

	print(123.5);      // Calls print(double) (فراخوانی print(double))
	print(123.3F);     // Promoted to double (تبدیل به double)

	print("C-style string"); // Converted to C++ string (تبدیل به رشته C++)

	string s{ "C++ string" };
	print(s);          // Calls print(string) (فراخوانی print(string))

	print("C-style string", s); // First converted to C++ string (اولی به رشته C++ تبدیل می‌شود)

	vector<string> three_stooges{ "Larry", "Moe", "Curly" };
	print(three_stooges); // Calls print(vector<string>) (فراخوانی print(vector<string>))

	return 0;

}

/*
Function Overloading (اضافه‌بارگیری توابع):
Multiple functions with same name, different parameters
(چندین تابع با نام یکسان، پارامترهای متفاوت).

Compiler selects based on argument types
(کامپایلر بر اساس انواع آرگومان‌ها انتخاب می‌کند).

Key Rules (قوانین کلیدی):
Must differ in parameter types
(باید در انواع پارامترها متفاوت باشند).

Return type alone isn't sufficient
(فقط نوع بازگشتی کافی نیست).

Automatic type conversion may occur
(تبدیل نوع خودکار ممکن است انجام شود).

Practical Applications (کاربردهای عملی):
Same operation on different data types
(همان عملیات روی انواع داده متفاوت).

Intuitive interface design
(طراحی رابط شهودی).
*/