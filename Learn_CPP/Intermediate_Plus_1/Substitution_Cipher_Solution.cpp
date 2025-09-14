// Solution to substitution cipher challenge (راه‌حل چالش رمزگذاری جانشینی)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <string>   // Required for std::string (ضروری برای استفاده از std::string)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

	// Cipher key setup (تنظیم کلید رمز)
	string alphabet{ "[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string key{ " [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };

	string secret_message;
	cout << "Enter your secret message: ";
	getline(cin, secret_message); // Read full line (خواندن خط کامل)

	// Encryption process (فرآیند رمزگذاری)
	string encrypted_message;
	cout << "\nEncrypting message..." << endl;

	for (char c : secret_message) {
		size_t position = alphabet.find(c);
		if (position != string::npos) {
			char new_char = key.at(position);
			encrypted_message += new_char;
		}
		else {
			encrypted_message += c; // Keep unchanged if not in alphabet (اگر خارج از الفبا بود، تغییر نکند)
		}
	}

	cout << "Encrypted message: " << encrypted_message << endl;

	// Decryption process (فرآیند رمزگشایی)
	string decrypted_message;
	cout << "\nDecrypting message..." << endl;

	for (char c : encrypted_message) {
		size_t position = key.find(c);
		if (position != string::npos) {
			char new_char = alphabet.at(position);
			decrypted_message += new_char;
		}
		else {
			decrypted_message += c; // Keep unchanged if not in key (اگر خارج از کلید بود، تغییر نکند)
		}
	}

	cout << "Decrypted message: " << decrypted_message << endl;

	// Verification (تایید)
	if (secret_message == decrypted_message)
		cout << "\nSuccess! Original and decrypted messages match." << endl;
	else
		cout << "\nError: Messages don't match." << endl;

	return 0;

}

/*
Encryption Logic (منطق رمزگذاری):

For each character in message (برای هر کاراکتر در پیام):
Find position in alphabet
(پیدا کردن موقعیت در الفبا).

Replace with character at same position in key
(جایگزینی با کاراکتر در همان موقعیت در کلید).

Decryption Logic (منطق رمزگشایی):
Reverse process: Find position in key, get character from alphabet
(فرآیند معکوس: پیدا کردن موقعیت در کلید، گرفتن کاراکتر از الفبا).

Critical Details (جزئیات حیاتی):
string::npos: Special value indicating "not found"
(مقدار ویژه برای "پیدا نشد").

Handling characters not in alphabet
(مدیریت کاراکترهای خارج از الفبا).

Using at() for bounds-checked access
(استفاده از at() برای دسترسی با بررسی محدوده).
*/