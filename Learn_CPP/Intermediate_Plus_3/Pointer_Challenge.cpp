// Pointer challenge - apply all concepts (چالش اشاره‌گر - کاربرد تمام مفاهیم)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

// TO DO: Implement apply_all function (پیاده‌سازی تابع apply_all)

int main() {

	const size_t array1_size{ 5 };
	const size_t array2_size{ 3 };

	int array1[]{ 1, 2, 3, 4, 5 };
	int array2[]{ 10, 20, 30 };

	cout << "Array 1: ";
	// Implement print function (پیاده‌سازی تابع print)

	cout << "Array 2: ";
	// Implement print function (پیاده‌سازی تابع print)

	int* results = apply_all(array1, array1_size, array2, array2_size);
	constexpr size_t results_size{ array1_size * array2_size };

	cout << "Result: ";
	// Implement print function (پیاده‌سازی تابع print)

	delete[] results; // Don't forget! (فراموش نکنید!)
	return 0;

}

/*
Challenge Purpose (هدف چالش):
Apply all learned pointer concepts
(کاربرد تمام مفاهیم یادگرفته‌شده اشاره‌گر).

Solve real problem using pointers
(حل مسئله واقعی با استفاده از اشاره‌گرها).

Required Knowledge (دانش مورد نیاز):
Dynamic memory allocation
(تخصیص حافظه پویا).

Pointer arithmetic
(حساب اشاره‌گر).

Passing pointers to functions
(ارسال اشاره‌گرها به توابع).

Proper memory management
(مدیریت صحیح حافظه).

Problem Statement (صورت مسئله):
Multiply each element of array2 across all elements of array1
(هر عنصر array2 را در تمام عناصر array1 ضرب کنید).

Store results in dynamically allocated array
(نتایج را در آرایه تخصیص‌یافته پویا ذخیره کنید).
*/