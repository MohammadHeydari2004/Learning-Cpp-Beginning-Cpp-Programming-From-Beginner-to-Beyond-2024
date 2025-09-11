// Full service estimation system (سیستم کامل برآورد خدمات)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {
	cout << "Welcome to Frank's Carpet Cleaning!" << endl;

	int small_rooms, large_rooms;
	cout << "Small rooms? "; cin >> small_rooms;
	cout << "Large rooms? "; cin >> large_rooms;

	const double price_small{ 25.0 };
	const double price_large{ 35.0 };
	const double tax_rate{ 0.06 };
	const int valid_days{ 30 };

	double cost{ (price_small * small_rooms) + (price_large * large_rooms) };
	double tax{ cost * tax_rate };

	cout << "\nEstimate:" << endl;
	cout << "Small rooms: " << small_rooms << endl;
	cout << "Large rooms: " << large_rooms << endl;
	cout << "Price per small: $" << price_small << endl;
	cout << "Price per large: $" << price_large << endl;
	cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Total: $" << cost + tax << endl;
	cout << "Valid for " << valid_days << " days" << endl;
	return 0;
}

/*
Real-World Application (کاربرد دنیای واقعی):
Combines all previous concepts
(ترکیب تمام مفاهیم قبلی).

Shows practical business logic
(نشان‌دادن منطق کسب‌وکار عملی).

Calculation Breakdown (تجزیه محاسبات):
Intermediate variables (cost, tax) improve readability
(متغیرهای میانی افزایش خوانایی).

Avoids complex nested expressions
(جلوگیری از عبارات تو در تو پیچیده).

User Experience Focus (تمرکز بر تجربه کاربر):
Clear prompts and formatted output
(درخواست‌های واضح و خروجی فرمت‌بندی‌شده).

Logical grouping of related information
(گروه‌بندی منطقی اطلاعات مرتبط).
*/