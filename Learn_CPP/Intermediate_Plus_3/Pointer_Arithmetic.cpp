// Pointer arithmetic - moving through memory (حساب اشاره‌گر - حرکت در حافظه)
#include <ios>
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <string>
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

	int scores[]{ 100, 95, 89, 68, -1 }; // -1 marks end (نشان‌دهنده پایان)
	int* score_ptr{ scores };

	// Method 1: Using increment (روش 1: استفاده از افزایش)
	while (*score_ptr != -1) {
		cout << *score_ptr << endl;
		score_ptr++; // Move to next integer (حرکت به صحیح بعدی)
	}

	cout << "\n-------------------------" << endl;
	score_ptr = scores; // Reset pointer (بازنشانی اشاره‌گر)

	// Method 2: More concise (روش 2: مختصرتر)
	while (*score_ptr != -1)
		cout << *score_ptr++ << endl; // Dereference THEN increment (مقداردهی سپس افزایش)

	cout << "\n-------------------------" << endl;
	string s1{ "Frank" };
	string s2{ "Frank" };
	string s3{ "James" };

	string* p1{ &s1 };
	string* p2{ &s2 };
	string* p3{ &s1 };

	// Pointer comparison (مقایسه اشاره‌گرها)
	cout << boolalpha;
	cout << "p1 == p2: " << (p1 == p2) << endl; // false (different addresses) (آدرس‌های متفاوت)
	cout << "p1 == p3: " << (p1 == p3) << endl; // true (same address) (آدرس یکسان)

	// Value comparison (مقایسه مقادیر)
	cout << "*p1 == *p2: " << (*p1 == *p2) << endl; // true (same string value) (مقدار رشته یکسان)
	cout << "*p1 == *p3: " << (*p1 == *p3) << endl; // true

	p3 = &s3; // Point to different string (اشاره به رشته متفاوت)
	cout << "*p1 == *p3: " << (*p1 == *p3) << endl; // false

	cout << "\n-------------------------" << endl;
	char name[]{ "Frank" };

	char* char_ptr1{ &name[0] }; // 'F'
	char* char_ptr2{ &name[3] }; // 'n'

	// Pointer difference (تفاوت اشاره‌گرها)
	cout << "In '" << name << "', '" << *char_ptr2 << "' is "
		<< (char_ptr2 - char_ptr1) << " characters from '"
		<< *char_ptr1 << "'" << endl;
	// Result: 3 (because n is 3 positions after F) (چون n سه موقعیت بعد از F است)

	return 0;

}

/*
Pointer Arithmetic Rules (قوانین حساب اشاره‌گر):
pointer + n: Moves forward n elements
(n عنصر به جلو حرکت می‌کند).

pointer - n: Moves backward n elements
(n عنصر به عقب حرکت می‌کند).

pointer1 - pointer2: Distance between pointers
(فاصله بین اشاره‌گرها).

Critical Behavior (رفتار حیاتی):
Arithmetic accounts for data type size
(حساب اندازه نوع داده را در نظر می‌گیرد).

int_ptr + 1 moves 4 bytes (for int), not 1 byte
(4 بایت حرکت می‌کند، نه 1 بایت).

Pointer Comparison (مقایسه اشاره‌گرها):
== checks if pointers point to same location
(اگر اشاره‌گرها به همان محل اشاره می‌کنند بررسی می‌کند).

*ptr1 == *ptr2 checks if values are equal
(اگر مقادیر برابر هستند بررسی می‌کند).
*/