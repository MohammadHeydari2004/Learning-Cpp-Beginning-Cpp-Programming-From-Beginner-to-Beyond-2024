// Debugging pointers - critical skill (اشکال‌زدایی اشاره‌گرها - مهارت حیاتی)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

void swap(int* a, int* b) {

	int temp = *a;
	*a = *b;
	*b = temp;

}

int main() {

	int i{ 5 };
	while (i > 0) {
		cout << i << endl;
		i--;
	}

	int x{ 100 }, y{ 200 };
	cout << "\nBefore swap: x = " << x << ", y = " << y << endl;

	swap(&x, &y);

	cout << "After swap: x = " << x << ", y = " << y << endl;

	return 0;

}

/*
Debugging Pointers (اشکال‌زدایی اشاره‌گرها):
Essential skill for pointer-related issues
(مهارت ضروری برای مشکلات مرتبط با اشاره‌گرها).

Most pointer errors cause undefined behavior
(بیشتر خطاهای اشاره‌گر رفتار تعریف‌نشده ایجاد می‌کنند).

Common Pointer Errors (خطاهای رایج اشاره‌گر):
Dangling pointers: Pointer to memory that's been freed
(اشاره‌گر به حافظه‌ای که آزاد شده).

Null pointer dereference: Accessing *nullptr
(دسترسی به *nullptr).

Memory leaks: Forgetting delete
(فراموشی delete).

Double delete: Deleting same memory twice
(دو بار حذف کردن حافظه یکسان).

Debugging Techniques (تکنیک‌های اشکال‌زدایی):
Watch pointer values and what they point to
(مشاهده مقادیر اشاره‌گر و آنچه به آن اشاره می‌کنند).

Check if pointers are null before dereferencing
(بررسی null بودن اشاره‌گر قبل از مقداردهی).

Use memory debugging tools
(استفاده از ابزارهای اشکال‌زدایی حافظه).
*/