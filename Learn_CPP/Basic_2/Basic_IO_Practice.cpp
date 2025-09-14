// Comprehensive I/O demonstration (نمایش جامع ورودی/خروجی)

#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)

using namespace std; // Avoids writing "std::" repeatedly (جلوگیری از تکرار "std::")

int main() {
	cout << "Hello world!"; // Basic output (خروجی پایه)
	cout << "----------------------------------------------------------------" << endl;

	cout << "Hello";         // Multiple outputs on same line (چند خروجی در یک خط)
	cout << "World" << endl; // endl = new line + flush buffer (خط جدید + پاک کردن بافر)
	cout << "----------------------------------------------------------------" << endl;

	cout << "Hello world!" << endl;          // Combined message (پیام ترکیبی)
	cout << "Hello" << " world!" << endl;    // String concatenation via << (ادغام رشته با <<)
	cout << "Hello" << " world!\n";          // \n = new line (خط جدید)
	cout << "Hello\nOut\nThere\n";           // Multiple \n for line breaks (استفاده چندگانه از \n)
	cout << "----------------------------------------------------------------" << endl;

	int num1, num2;   // Integer variables (متغیرهای صحیح)
	double num3;      // Floating-point variable (متغیر اعشاری)
	cout << "----------------------------------------------------------------" << endl;

	cout << "Enter an integer: ";
	cin >> num1;      // Read integer input (دریافت ورودی صحیح)
	cout << "You entered: " << num1 << endl;
	cout << "----------------------------------------------------------------" << endl;

	cout << "Enter a first integer: "; cin >> num1;
	cout << "Enter a second integer: "; cin >> num2;
	cout << "You entered " << num1 << " and " << num2 << endl;
	cout << "----------------------------------------------------------------" << endl;

	cout << "Enter 2 integers separated with a space: ";
	cin >> num1 >> num2; // Multiple inputs in one line (ورودی چندگانه در یک خط)
	cout << "You entered " << num1 << " and " << num2 << endl;
	cout << "----------------------------------------------------------------" << endl;

	cout << "Enter a double: ";
	cin >> num3;      // Read floating-point input (دریافت ورودی اعشاری)
	cout << "You entered : " << num3 << endl;
	cout << "----------------------------------------------------------------" << endl;

	cout << "Enter an integer: "; cin >> num1;
	cout << "Enter a double: "; cin >> num3;
	cout << "The integer is: " << num1 << endl;
	cout << "And the double is " << num3 << endl;

	return 0; // Successful execution (اجرای موفق)
}

/*
cout Features (ویژگی‌های cout):
<< chains multiple outputs
(زنجیره‌کردن خروجی‌ها با <<).

endl vs \n: endl flushes buffer
(تفاوت endl و \n).

cin Capabilities (قابلیت‌های cin):
Reads integers (int) and decimals (double)
(دریافت اعداد صحیح و اعشاری).

Handles space-separated inputs
(پردازش ورودی‌های با فاصله).

Data Types (انواع داده):
int for whole numbers
(اعداد صحیح).

double for decimal numbers
(اعداد اعشاری).
*/