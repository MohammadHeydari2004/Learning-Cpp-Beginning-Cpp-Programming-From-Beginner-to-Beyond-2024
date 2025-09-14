// Using arrays with functions (استفاده از آرایه‌ها با توابع)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

// Functions working with arrays (توابع کار با آرایه‌ها)
void print_array(const int arr[], size_t size) {

	for (size_t i{ 0 }; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;

}

// Set all array elements to value (تنظیم تمام عناصر آرایه به مقدار)
void set_array(int arr[], size_t size, int value) {

	for (size_t i{ 0 }; i < size; ++i)
		arr[i] = value;

}

int main() {

	int my_scores[]{ 100, 98, 90, 86, 84 };

	cout << "Original array: ";
	print_array(my_scores, 5);

	set_array(my_scores, 5, 100);
	cout << "After set_array: ";
	print_array(my_scores, 5);

	// Note: Arrays are always passed by reference (توجه: آرایه‌ها همیشه به روش ارجاع ارسال می‌شوند)
	// Even though it looks like pass-by-value (حتی اگر شبیه انتقال به روش مقدار باشد)

	return 0;

}

/*
Array Parameters (پارامترهای آرایه):
int arr[]: Parameter syntax for arrays
(سینتکس پارامتر برای آرایه‌ها).

Arrays decay to pointers when passed to functions
(آرایه‌ها هنگام ارسال به توابع به اشاره‌گر تبدیل می‌شوند).

Key Behavior (رفتار کلیدی):
Arrays are effectively passed by reference
(آرایه‌ها در عمل به روش ارجاع ارسال می‌شوند).

Modifications affect original array
(تغییرات روی آرایه اصلی اثر می‌گذارند).

Must pass array size separately
(باید اندازه آرایه را جداگانه ارسال کنید).

const Arrays (آرایه‌های ثابت):
const int arr[]: Prevents modification
(جلوگیری از تغییر).

Good practice for read-only functions
(روش خوب برای توابع فقط خواندنی).
*/