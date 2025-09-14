// Dynamic memory allocation - heap memory (تخصیص حافظه پویا - حافظه هیپ)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

	// Allocate single integer on heap (تخصیص یک صحیح در هیپ)
	int* int_ptr{ nullptr };
	int_ptr = new int; // Request memory (درخواست حافظه)
	*int_ptr = 100;    // Store value (ذخیره مقدار)
	cout << "Value: " << *int_ptr << endl; // 100
	delete int_ptr;    // Release memory (آزادسازی حافظه)

	size_t size{};
	cout << "How many integers? ";
	cin >> size;

	// Allocate array on heap (تخصیص آرایه در هیپ)
	double* temp_ptr{ nullptr };
	temp_ptr = new double[size]; // Array of doubles (آرایه از اعشاری‌ها)

	// Initialize array (مقداردهی اولیه آرایه)
	for (size_t i{ 0 }; i < size; ++i)
		temp_ptr[i] = 100.0 * (i + 1);

	// Display array (نمایش آرایه)
	for (size_t i{ 0 }; i < size; ++i)
		cout << "temp_ptr[" << i << "] = " << temp_ptr[i] << endl;

	delete[] temp_ptr; // Release array memory (آزادسازی حافظه آرایه)
	// MUST use [] for arrays (باید از [] برای آرایه‌ها استفاده کنید)

	return 0;

}

/*
Heap Memory (حافظه هیپ):
Also called "free store"
(به "ذخیره آزاد" نیز گفته می‌شود).

Larger than stack, but slower
(بزرگ‌تر از پشته، اما کندتر).

Memory persists until explicitly released
(حافظه تا زمان آزادسازی صریح باقی می‌ماند).

Memory Management (مدیریت حافظه):
new: Requests memory from heap
(درخواست حافظه از هیپ).

delete: Releases single object
(آزادسازی شیء تکی).

delete[]: Releases array
(آزادسازی آرایه).

Critical Rules (قوانین حیاتی):
Every new must have matching delete
(هر new باید delete متناظر داشته باشد).

Forgetting delete causes memory leaks
(فراموشی delete باعث نشت حافظه می‌شود).

Using delete on same pointer twice causes undefined behavior
(استفاده دوباره delete روی همان اشاره‌گر رفتار تعریف‌نشده ایجاد می‌کند).
*/