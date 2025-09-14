// Pass-by-value parameter passing (انتقال پارامتر به روش مقدار)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <string>   // For string handling (برای مدیریت رشته‌ها)
#include <vector>   // For vector handling (برای مدیریت وکتورها)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

// Pass-by-value functions (توابع انتقال به روش مقدار)
void pass_by_value1(int num) {

	num = 1000; // Modifies local copy (تغییر در کپی محلی)

}

void pass_by_value2(string s) {

	s = "Changed"; // Modifies local copy (تغییر در کپی محلی)

}

void pass_by_value3(vector<string> v) {

	v.clear(); // Modifies local copy (تغییر در کپی محلی)

}

void print_vector(vector<string> v) {

	for (auto s : v)
		cout << s << " ";
	cout << endl;

}

int main() {

	// Integer demonstration (نشان‌دادن صحیح)
	int num{ 10 };
	cout << "num before: " << num << endl;
	pass_by_value1(num);
	cout << "num after: " << num << endl; // Still 10 (هنوز 10 است)

	// String demonstration (نشان‌دادن رشته)
	string name{ "Frank" };
	cout << "\nname before: " << name << endl;
	pass_by_value2(name);
	cout << "name after: " << name << endl; // Still "Frank" (هنوز "Frank" است)

	// Vector demonstration (نشان‌دادن وکتور)
	vector<string> stooges{ "Larry", "Moe", "Curly" };
	cout << "\nstooges before: ";
	print_vector(stooges);
	pass_by_value3(stooges);
	cout << "stooges after: ";
	print_vector(stooges); // Still has all elements (همه عناصر را دارد)

	return 0;

}

/*
Pass-by-Value Mechanism (مکانیزم انتقال به روش مقدار):
Creates a copy of the argument
(یک کپی از آرگومان ایجاد می‌شود).

Function works with the copy, not original
(تابع با کپی کار می‌کند، نه اصل).

Key Behavior (رفتار کلیدی):
Original data remains unchanged
(داده اصلی بدون تغییر باقی می‌ماند).

Modifications affect only the local copy
(تغییرات فقط روی کپی محلی اثر می‌گذارند).

Memory Implications (پیامدهای حافظه):
Copying large objects is inefficient
(کپی اشیاء بزرگ ناکارآمد است).

Primitive types (int, double) are cheap to copy
(انواع اولیه کپی ارزانی دارند).

Complex objects (vectors, strings) expensive to copy
(اشیاء پیچیده کپی گرانی دارند).
*/