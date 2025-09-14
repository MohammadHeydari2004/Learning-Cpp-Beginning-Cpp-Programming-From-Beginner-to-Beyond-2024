// Passing pointers to functions - basic usage (ارسال اشاره‌گرها به توابع - استفاده پایه)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

// Function that takes a pointer parameter (تابعی که پارامتر اشاره‌گر می‌گیرد)
void double_data(int* int_ptr) {

	*int_ptr *= 2; // Modify the data (تغییر داده)

}

int main() {

	int value{ 10 };
	cout << "Original value: " << value << endl; // 10

	double_data(&value); // Pass address of value (ارسال آدرس value)
	cout << "Doubled value: " << value << endl; // 20

	cout << "-----------------------------" << endl;

	int* int_ptr{ &value }; // Create pointer (ایجاد اشاره‌گر)
	double_data(int_ptr); // Pass pointer (ارسال اشاره‌گر)
	cout << "Doubled again: " << value << endl; // 40

	return 0;

}

/*
Passing Address (ارسال آدرس):
double_data(&value): Pass memory address
(ارسال آدرس حافظه).

Allows function to modify original data
(اجازه می‌دهد تابع داده اصلی را تغییر دهد).

Pointer Parameter (پارامتر اشاره‌گر):
void double_data(int *int_ptr): Takes a pointer
(یک اشاره‌گر می‌گیرد).

*int_ptr accesses the data
(دسترسی به داده).

Two Ways to Call (دو روش فراخوانی):
Pass address directly with &
(ارسال مستقیم آدرس با &).

Pass existing pointer variable
(ارسال متغیر اشاره‌گر موجود).
*/