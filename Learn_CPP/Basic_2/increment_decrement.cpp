#include <iostream> // Required for I/O (ضروری برای ورودی/خروجی)

int main() {

	int counter{ 10 }; // Initialize counter to 10 (مقداردهی اولیه شمارنده به 10)
	int result{ 0 };   // Variable to store results (متغیر برای ذخیره نتایج)

	// Example 1: Basic increment methods (مثال 1: روش‌های افزایش پایه)
	std::cout << "Counter: " << counter << std::endl;

	counter = counter + 1; // Manual increment (افزایش دستی)
	std::cout << "Counter: " << counter << std::endl;

	counter++; // Postfix increment (افزایش پسوندی)
	std::cout << "Counter: " << counter << std::endl;

	++counter; // Prefix increment (افزایش پیشوندی)
	std::cout << "Counter: " << counter << std::endl;

	// Example 2: Prefix increment (مثال 2: افزایش پیشوندی)
	counter = 10;
	result = 0;

	std::cout << "\nPrefix increment example:" << std::endl;
	std::cout << "Counter before: " << counter << std::endl;

	result = ++counter; // Increment THEN assign (ابتدا افزایش، سپس انتساب)
	std::cout << "Counter after: " << counter << std::endl;
	std::cout << "Result: " << result << std::endl; // result = 11 (نتیجه = 11)

	// Example 3: Postfix increment (مثال 3: افزایش پسوندی)
	counter = 10;
	result = 0;

	std::cout << "\nPostfix increment example:" << std::endl;
	std::cout << "Counter before: " << counter << std::endl;

	result = counter++; // Assign THEN increment (ابتدا انتساب، سپس افزایش)
	std::cout << "Counter after: " << counter << std::endl;
	std::cout << "Result: " << result << std::endl; // result = 10 (نتیجه = 10)

	// WARNING: Never use twice for same variable in one statement! (هشدار: هرگز دو بار در یک دستور از آن استفاده نکنید!)
	// int x = counter++ + ++counter; // UNDEFINED BEHAVIOR! (رفتار تعریف‌نشده!)

	return 0;

}

/*
هدف: درک عملگرهای افزایشی و کاهشی (++, --) و تفاوت پیشوندی/پسوندی.

++counter (پیشوندی): ابتدا مقدار را افزایش می‌دهد، سپس مقدار جدید را برمی‌گرداند.
counter++ (پسوندی): ابتدا مقدار فعلی را برمی‌گرداند، سپس مقدار را افزایش می‌دهد.
هرگز در یک دستور از چندین بار استفاده از ++ یا -- برای یک متغیر استفاده نکنید (رفتار تعریف‌نشده ایجاد می‌شود).
*/