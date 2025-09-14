// Passing pointers with const - protecting data (ارسال اشاره‌گرها با const - محافظت از داده)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <string>   // For string (برای رشته)
#include <vector>   // For vector (برای وکتور)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

// Function that takes const pointer to vector (تابعی که اشاره‌گر ثابت به وکتور می‌گیرد)
void display(const vector<string>* const v) {

	for (auto str : *v)
		cout << str << " ";
	cout << endl;

	// *v = nullptr; // Would cause error (خطا ایجاد می‌کند)
	// (*v).at(0) = "Funny"; // Would cause error (خطا ایجاد می‌کند)

}

// Function with pointer and sentinel value (تابع با اشاره‌گر و مقدار پایان)
void display(int* array, int sentinel) {

	while (*array != sentinel)
		cout << *array++ << " ";
	cout << endl;

}

int main() {

	vector<string> stooges{ "Larry", "Moe", "Curly" };
	display(&stooges);

	cout << "\n-----------------------------" << endl;
	int scores[]{ 100, 98, 97, 79, 85, -1 }; // -1 is sentinel (نشان‌دهنده پایان)
	display(scores, -1);

	return 0;

}

/*
const v:
First const: Can't modify data
(نمی‌تواند داده را تغییر دهد).

Second const: Can't modify pointer itself
(نمی‌تواند خود اشاره‌گر را تغییر دهد).

Sentinel Values (مقادیر پایان):
Special value marking end of data
(مقدار ویژه برای نشان دادن پایان داده).

Common with arrays
(در آرایه‌ها رایج است).

Example: -1 in score array
(مثال: -1 در آرایه امتیازات).

Best Practices (بهترین روش‌ها):
Use const whenever possible
(هر وقت ممکن است از const استفاده کنید).

Makes code safer and more self-documenting
(کد را ایمن‌تر و خودتوضیح‌دهنده‌تر می‌کند).
*/