// Introduction to pointers - fundamental concept (مقدمه‌ای بر اشاره‌گرها - مفهوم اساسی)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

	int num{ 10 }; // Regular integer variable (متغیر صحیح معمولی)

	cout << "Value of num: " << num << endl;     // Displays 10 (مقدار 10 را نمایش می‌دهد)
	cout << "Size of num: " << sizeof(num) << " bytes" << endl; // Typically 4 bytes (معمولاً 4 بایت)
	cout << "Address of num: " << &num << endl;  // Memory address (آدرس حافظه)

	// Pointer declaration (تعریف اشاره‌گر)
	int* p{ nullptr }; // Initialize to null (مقداردهی اولیه به null)

	// p = &num; // Uncomment to make p point to num (برای اشاره p به num کامنت را بردارید)

	// Pointer size (اندازه اشاره‌گر)
	cout << "\nSize of pointer: " << sizeof(p) << " bytes" << endl;
	// Pointer size is fixed regardless of type (اندازه اشاره‌گر ثابت است، بسته به سیستم 4 یا 8 بایت)

	// Multiple pointer types (انواع مختلف اشاره‌گر)
	double* p2{ nullptr };
	char* p3{ nullptr };
	cout << "Size of double pointer: " << sizeof(p2) << " bytes" << endl;
	cout << "Size of char pointer: " << sizeof(p3) << " bytes" << endl;
	// All pointers have same size on a given system (همه اشاره‌گرها در یک سیستم اندازه یکسانی دارند)

	return 0;

}

/*
What is a Pointer? (اشاره‌گر چیست؟)
A variable that stores a memory address
(متغیری که یک آدرس حافظه را ذخیره می‌کند).

Not the data itself, but where the data lives
(خود داده نیست، بلکه محل قرارگیری داده است).

Pointer Declaration (تعریف اشاره‌گر):
int *p;: Pointer to an integer
(اشاره‌گر به صحیح).

double *p2;: Pointer to a double
(اشاره‌گر به اعشاری).

The asterisk * is part of the type, not the variable name
(ستاره بخشی از نوع است، نه نام متغیر).

Key Concepts (مفاهیم کلیدی):
& (address-of operator): Gets memory address
(به دست آوردن آدرس حافظه).

nullptr: Represents a null pointer
(نشان‌دهنده اشاره‌گر تهی).

All pointers have same size on a system
(همه اشاره‌گرها در یک سیستم اندازه یکسانی دارند).
*/