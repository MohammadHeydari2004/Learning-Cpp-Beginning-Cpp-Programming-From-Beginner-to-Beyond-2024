// Function definitions and implementation (تعریف و پیاده‌سازی توابع)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

const double pi{ 3.14159 }; // Global constant (ثابت سراسری)

// Function definitions (تعریف توابع)
double calc_area_circle(double radius) {

	return pi * radius * radius;

}

double calc_volume_cylinder(double radius, double height) {

	return calc_area_circle(radius) * height;

}

void area_circle() {

	double radius{};
	cout << "\nEnter circle radius: ";
	cin >> radius;
	cout << "Area: " << calc_area_circle(radius) << endl;

}

void volume_cylinder() {

	double radius{}, height{};
	cout << "\nEnter cylinder radius: ";
	cin >> radius;
	cout << "Enter cylinder height: ";
	cin >> height;
	cout << "Volume: " << calc_volume_cylinder(radius, height) << endl;

}

int main() {

	area_circle();
	area_circle();
	volume_cylinder();
	return 0;

}

/*
Function Structure (ساختار تابع):
Return type: What the function returns
(نوع بازگشتی: چه چیزی تابع برمی‌گرداند).

Parameters: Input values
(پارامترها: مقادیر ورودی).

Body: Code that executes
(بدنه: کدی که اجرا می‌شود).

Key Concepts (مفاهیم کلیدی):
return statement sends value back to caller
(دستور return مقدار را به فراخواننده برمی‌گرداند).

Functions can call other functions
(توابع می‌توانند توابع دیگر را فراخوانی کنند).

void functions don't return a value
(توابع void مقداری را برنمی‌گردانند).

Function Composition (ترکیب توابع):
calc_volume_cylinder uses calc_area_circle
(استفاده از تابع درون تابع دیگر).

Creates modular, reusable code
(کدی ماژولار و قابل استفاده مجدد ایجاد می‌کند).
*/