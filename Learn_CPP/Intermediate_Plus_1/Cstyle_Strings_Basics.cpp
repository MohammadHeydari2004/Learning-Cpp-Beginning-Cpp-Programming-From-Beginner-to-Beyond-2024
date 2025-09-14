// Introduction to C-style strings (مقدمه‌ای بر رشته‌های سبک C)
#include <cctype>   // For character functions (برای توابع کاراکتری)
#include <cstring>  // For C-string functions (برای توابع رشته‌های C)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

	// Declare character arrays (تعریف آرایه‌های کاراکتری)
	char first_name[20];      // Uninitialized - contains garbage (بدون مقداردهی اولیه - شامل اطلاعات ناخواسته)
	char last_name[20]{};   // Initialized to empty string (مقداردهی اولیه به رشته خالی)
	char full_name[50]{};   // Initialized to empty string (مقداردهی اولیه به رشته خالی)
	char temp[50]{};        // Temporary storage (ذخیره‌سازی موقت)

	// WARNING: This will likely display garbage values (هشدار: این احتمالاً مقادیر ناخواسته نمایش می‌دهد)
	cout << "Uninitialized first_name: " << first_name << endl;

	// Basic string operations (عملیات پایه رشته)
	cout << "Enter first name: ";
	cin >> first_name; // Note: Only reads up to first whitespace (توجه: فقط تا اولین فاصله خوانده می‌شود)

	cout << "Enter last name: ";
	cin >> last_name;

	cout << "---------------------------" << endl;
	cout << "Hello, " << first_name << "! First name has " << strlen(first_name) << " characters" << endl;
	cout << "Last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

	// String copying and concatenation (کپی و الحاق رشته)
	strcpy(full_name, first_name);  // Copy first_name to full_name (کپی first_name به full_name)
	strcat(full_name, " ");         // Add space (افزودن فاصله)
	strcat(full_name, last_name);   // Add last_name (افزودن last_name)

	cout << "Full name: " << full_name << endl;

	// String comparison (مقایسه رشته‌ها)
	strcpy(temp, full_name);
	if (strcmp(temp, full_name) == 0)
		cout << "Strings are equal" << endl;
	else
		cout << "Strings are different" << endl;

	// Character processing (پردازش کاراکترها)
	for (size_t i = 0; i < strlen(full_name); ++i) {
		if (isalpha(full_name[i]))
			full_name[i] = toupper(full_name[i]); // Convert to uppercase (تبدیل به حروف بزرگ)
	}
	cout << "Uppercase full name: " << full_name << endl;

	return 0;

}

/*
C-Style Strings (رشته‌های سبک C):
Character arrays terminated by null character \0
(آرایه‌های کاراکتری که با کاراکتر null خاتمه می‌یابند).

Fixed size declared at compile time
(اندازه ثابت در زمان کامپایل تعریف می‌شود).

Key Functions (توابع کلیدی):
strlen(): Returns string length
(طول رشته را برمی‌گرداند).

strcpy(): Copies strings
(رشته‌ها را کپی می‌کند).

strcat(): Concatenates strings
(رشته‌ها را الحاق می‌کند).

strcmp(): Compares strings
(رشته‌ها را مقایسه می‌کند).

Critical Limitations (محدودیت‌های حیاتی):
No bounds checking
(عدم بررسی محدوده).

Fixed size
(اندازه ثابت).

Manual memory management
(مدیریت حافظه دستی).
*/