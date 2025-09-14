// Substitution cipher challenge (چالش رمزگذاری جانشینی)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <string>   // Required for std::string (ضروری برای استفاده از std::string)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

	// Cipher key setup (تنظیم کلید رمز)
	string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string key{ "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };

	cout << "Substitution Cipher Challenge" << endl;
	cout << "Implement a program that:" << endl;
	cout << "1. Asks user for a secret message" << endl;
	cout << "2. Encrypts the message using substitution cipher" << endl;
	cout << "3. Displays the encrypted message" << endl;
	cout << "4. Decrypts the message back to original" << endl;
	cout << endl;

	cout << "Key concepts to use:" << endl;
	cout << "- string::find() to locate characters (پیدا کردن کاراکترها)" << endl;
	cout << "- string::at() for safe access (دسترسی ایمن)" << endl;
	cout << "- Handling characters not in alphabet (مدیریت کاراکترهای خارج از الفبا)" << endl;
	cout << endl;

	cout << "Try to implement this on your own before checking the solution!" << endl;

	return 0;

}

/*
Challenge Purpose (هدف چالش):
Apply string manipulation knowledge
(کاربرد دانش دستکاری رشته).

Practice problem-solving with strings
(تمرین حل مسئله با رشته‌ها).

Key Techniques Required (تکنیک‌های مورد نیاز):
find(): Locate character position in string
(پیدا کردن موقعیت کاراکتر در رشته).

at(): Safe character access with bounds checking
(دسترسی ایمن به کاراکتر با بررسی محدوده).

Handling characters not in alphabet
(مدیریت کاراکترهای خارج از الفبا).

Learning Value (ارزش آموزشی):
Reinforces string traversal concepts
(تقویت مفاهیم پیمایش رشته).

Develops encryption/decryption logic
(توسعه منطق رمزگذاری/رمزگشایی).

Encourages independent problem solving
(تشویق به حل مسئله مستقل).
*/