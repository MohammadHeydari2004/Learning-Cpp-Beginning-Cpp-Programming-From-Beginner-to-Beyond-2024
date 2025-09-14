// Functions returning pointers - advanced usage (توابع بازگشت‌دهنده اشاره‌گر - استفاده پیشرفته)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

// Function that creates and returns a pointer (تابعی که ایجاد و بازگشت اشاره‌گر می‌دهد)
int* create_array(size_t size, int init_value = 0) {

	int* new_storage{ nullptr };
	new_storage = new int[size]; // Allocate on heap (تخصیص در هیپ)

	// Initialize array (مقداردهی اولیه آرایه)
	for (size_t i{ 0 }; i < size; ++i)
		*(new_storage + i) = init_value;

	return new_storage; // Return pointer to heap memory (بازگشت اشاره‌گر به حافظه هیپ)

}

// Function to display array (تابع نمایش آرایه)
void display(const int* const array, size_t size) {

	for (size_t i{ 0 }; i < size; ++i)
		cout << array[i] << " ";
	cout << endl;

}

int main() {

	size_t size{};
	int init_value{};

	cout << "How many integers? ";
	cin >> size;
	cout << "Initialize to what value? ";
	cin >> init_value;

	int* my_array{ create_array(size, init_value) };
	cout << "--------------------------------------" << endl;

	display(my_array, size);
	delete[] my_array; // CRITICAL: Must release memory (حیاتی: باید حافظه را آزاد کنید)

	return 0;

}

/*
Returning Heap Memory (بازگشت حافظه هیپ):
Function creates memory on heap and returns pointer
(تابع حافظه را در هیپ ایجاد و اشاره‌گر را برمی‌گرداند).

Caller responsible for releasing memory
(فراخواننده مسئول آزادسازی حافظه است).

Memory Responsibility (مسئولیت حافظه):
"Who allocates, deallocates" principle
(اصل "چه کسی تخصیص می‌دهد، آزاد می‌کند").

In this case, caller must delete[]
(در این مورد، فراخواننده باید delete[] کند).

Critical Warning (هشدار حیاتی):
Never return pointer to local variable
(هرگز اشاره‌گر به متغیر محلی را باز نگردانید).

Local variables destroyed when function ends
(متغیرهای محلی هنگام پایان تابع نابود می‌شوند).
*/