// Dereferencing pointers - accessing data (اشاره‌گرها را مقداردهی کنید - دسترسی به داده)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <string>
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

	int score{ 100 };
	int* score_ptr{ &score }; // Points to score (به score اشاره می‌کند)

	cout << "Value of score: " << score << endl; // 100
	cout << "Value via pointer: " << *score_ptr << endl; // 100 (Dereferencing) (مقداردهی اشاره‌گر)

	*score_ptr = 200; // Modify value through pointer (تغییر مقدار از طریق اشاره‌گر)

	cout << "Modified value via pointer: " << *score_ptr << endl; // 200
	cout << "Modified value of score: " << score << endl; // 200

	cout << "\n------------------------------" << endl;
	double high_temp{ 100.7 };
	double* temp_ptr{ &high_temp };

	cout << "High temp: " << *temp_ptr << endl; // 100.7
	temp_ptr = &high_temp; // Still points to high_temp (هنوز به high_temp اشاره می‌کند)
	cout << "High temp via pointer: " << *temp_ptr << endl; // 100.7

	double low_temp{ 37.4 };
	temp_ptr = &low_temp; // Now points to low_temp (اکنون به low_temp اشاره می‌کند)
	cout << "Low temp via pointer: " << *temp_ptr << endl; // 37.4

	cout << "\n------------------------------" << endl;
	string name{ "Frank" };
	string* string_ptr{ &name };

	cout << "Name via pointer: " << *string_ptr << endl; // Frank
	name = "James"; // Modify original (تغییر اصل)
	cout << "Modified name via pointer: " << *string_ptr << endl; // James

	return 0;

}

/*
Dereferencing (مقداردهی اشاره‌گر):
*pointer_name: Accesses the value at the memory address
(مقدار موجود در آدرس حافظه را دسترسی می‌کند).

Also called "indirection"
(همچنین "ناقص" نامیده می‌شود).

Critical Behavior (رفتار حیاتی):
*score_ptr = 200; modifies the original variable
(مقدار متغیر اصلی را تغییر می‌دهد).

Pointer and original variable are connected
(اشاره‌گر و متغیر اصلی به هم متصل هستند).

Pointer Reassignment (تخصیص مجدد اشاره‌گر):
temp_ptr = &low_temp; changes where pointer points
(تغییر محل اشاره اشاره‌گر).

Does NOT change the original data
(داده اصلی را تغییر نمی‌دهد).
*/