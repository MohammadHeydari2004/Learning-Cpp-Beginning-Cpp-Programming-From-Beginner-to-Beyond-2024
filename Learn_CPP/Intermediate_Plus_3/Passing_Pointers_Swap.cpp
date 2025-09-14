// Passing pointers for data modification (ارسال اشاره‌گرها برای تغییر داده)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

// Swap function using pointers (تابع تعویض با استفاده از اشاره‌گرها)
void swap(int* a, int* b) {

	int temp = *a; // Store value of a (ذخیره مقدار a)
	*a = *b;       // a gets b's value (a مقدار b را دریافت می‌کند)
	*b = temp;     // b gets original a value (b مقدار اصلی a را دریافت می‌کند)

}

int main() {

	int x{ 100 }, y{ 200 };
	cout << "Before swap: x = " << x << ", y = " << y << endl;

	swap(&x, &y); // Pass addresses (ارسال آدرس‌ها)

	cout << "After swap: x = " << x << ", y = " << y << endl;

	return 0;

}

/*
Swapping Algorithm (الگوریتم تعویض):
Requires temporary storage
(نیاز به ذخیره موقت دارد).

Classic example of modifying multiple values
(مثال کلاسیک تغییر چندین مقدار).

Pointer Mechanics (مکانیزم اشاره‌گر):
*a = *b: Copies value from b to a's location
(مقدار از b به محل a کپی می‌شود).

NOT swapping the pointers themselves
(خود اشاره‌گرها تعویض نمی‌شوند).

Why After Basic Passing (چرا پس از ارسال پایه):
Shows more complex pointer usage
(استفاده پیچیده‌تر از اشاره‌گرها را نشان می‌دهد).

Demonstrates modifying multiple variables through pointers
(تغییر چندین متغیر از طریق اشاره‌گرها را نشان می‌دهد).
*/