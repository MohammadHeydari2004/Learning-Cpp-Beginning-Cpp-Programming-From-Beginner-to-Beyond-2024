// Understanding function prototypes (درک پیش‌نمونه‌های تابع)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

// Function prototypes (پیش‌نمونه‌های تابع)
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double radius);
void area_circle();
void volume_cylinder();

const double pi = 3.14159; // Mathematical constant (ثابت ریاضی)

int main() {

	area_circle(); // Calls function defined later (فراخوانی تابع تعریف‌شده بعداً)
	volume_cylinder();
	return 0;

}

// Function definitions (تعریف توابع)
double calc_volume_cylinder(double radius, double height) {

	return calc_area_circle(radius) * height;

}

double calc_area_circle(double radius) {

	return pi * radius * radius;

}

void area_circle() {

	double radius{};
	cout << "\nEnter the radius of the circle: ";
	cin >> radius;
	cout << "The area is: " << calc_area_circle(radius) << endl;

}

void volume_cylinder() {

	double radius{}, height{};
	cout << "\nEnter cylinder radius: ";
	cin >> radius;
	cout << "Enter cylinder height: ";
	cin >> height;
	cout << "The volume is: " << calc_volume_cylinder(radius, height) << endl;

}

/*
Function Prototypes (پیش‌نمونه‌های تابع):
Declaration without implementation
(تعریف بدون پیاده‌سازی).

Tells compiler about function signature
(به کامپایلر درباره امضای تابع اطلاع می‌دهد).

Format: return_type function_name(parameters);

Why Prototypes Matter (اهمیت پیش‌نمونه‌ها):
Allows functions to call each other in any order
(اجازه می‌دهد توابع به هر ترتیبی یکدیگر را فراخوانی کنند).

Enables compiler to check parameter types
(کامپایلر می‌تواند انواع پارامترها را بررسی کند).

Key Syntax (سینتکس کلیدی):
Must match the actual function definition
(باید با تعریف واقعی تابع مطابقت داشته باشد).

Parameters can have names or just types
(پارامترها می‌توانند نام داشته باشند یا فقط نوع).
*/