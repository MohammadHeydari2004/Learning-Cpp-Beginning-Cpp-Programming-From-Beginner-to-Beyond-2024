// Solution to pointer challenge (راه‌حل چالش اشاره‌گر)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

// Function prototypes (پیش‌نمونه‌های تابع)
int* apply_all(const int* const arr1, size_t size1, const int* const arr2, size_t size2);
void print(const int* const array, size_t size);

int* apply_all(const int* const arr1, size_t size1, const int* const arr2, size_t size2) {

	int* new_array{ nullptr };
	new_array = new int[size1 * size2]; // Allocate on heap (تخصیص در هیپ)

	size_t position{ 0 };
	for (size_t i{ 0 }; i < size2; ++i) {
		for (size_t j{ 0 }; j < size1; ++j) {
			new_array[position] = arr1[j] * arr2[i]; // Store product (ذخیره حاصل‌ضرب)
			++position;
		}
	}
	return new_array;

}

void print(const int* const arr, size_t size) {

	cout << "[ ";
	for (size_t i{ 0 }; i < size; ++i)
		cout << arr[i] << " ";
	cout << "]";
	cout << endl;

}

int main() {

	const size_t array1_size{ 5 };
	const size_t array2_size{ 3 };

	int array1[]{ 1, 2, 3, 4, 5 };
	int array2[]{ 10, 20, 30 };

	cout << "Array 1: ";
	print(array1, array1_size);

	cout << "Array 2: ";
	print(array2, array2_size);

	int* results = apply_all(array1, array1_size, array2, array2_size);
	constexpr size_t results_size{ array1_size * array2_size };

	cout << "Result: ";
	print(results, results_size);

	delete[] results; // CRITICAL: Release memory (حیاتی: آزادسازی حافظه)
	return 0;

}

/*
Solution Approach (رویکرد راه‌حل):
Allocate array of size size1 * size2
(تخصیص آرایه با اندازه size1 * size2).

Nested loops to calculate products
(حلقه‌های تو در تو برای محاسبه حاصل‌ضرب‌ها).

Key Techniques (تکنیک‌های کلیدی):
const int *const arr: Pointer to const data that can't be changed
(اشاره‌گر به داده ثابت که نمی‌تواند تغییر کند).

Proper memory allocation and deallocation
(تخصیص و آزادسازی صحیح حافظه).

Critical Details (جزئیات حیاتی):
Must use delete[] for array allocated with new[]
(باید از delete[] برای آرایه تخصیص‌یافته با new[] استفاده کنید).

Position counter tracks where to store next product
(شمارنده موقعیت محل ذخیره حاصل‌ضرب بعدی را ردیابی می‌کند).
*/