// Global vs local variable demonstration (نشان‌دهنده متغیرهای سراسری در مقابل محلی)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int age{ 18 }; // Global variable (متغیر سراسری)

int main() {
	int age{ 16 }; // Local variable (متغیر محلی)

	cout << "Local age: " << age << endl; // Uses local (از متغیر محلی استفاده می‌کند)
	cout << "Global age: " << ::age << endl; // Accesses global (دسترسی به سراسری)
	return 0;
}

/*
Scope Levels (سطوح محدوده):
Global: Accessible everywhere
(در همه جا قابل دسترسی).

Local: Only in its block
(فقط در بلوک خود قابل دسترسی).

Shadowing (سایه‌اندازی):
Local variable hides global with same name
(متغیر محلی متغیر سراسری با نام یکسان را مخفی می‌کند).

Use :: to access global version
(استفاده از :: برای دسترسی به نسخه سراسری).

Best Practices (بهترین روش‌ها):
Minimize global variables
(کمینه کردن متغیرهای سراسری).

Prefer local scope for safety
(ترجیح محدوده محلی برای ایمنی).
*/