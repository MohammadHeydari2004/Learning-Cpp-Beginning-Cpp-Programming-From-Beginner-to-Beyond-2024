#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <vector>   // Required for vectors (ضروری برای استفاده از وکتورها)

int main() {

	// Example 1: Multiplication table (مثال 1: جدول ضرب)
	for (int num1{ 1 }; num1 <= 10; ++num1) {
		for (int num2{ 1 }; num2 <= 10; ++num2) {
			std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
		}
		std::cout << "-----------" << std::endl;
	}

	// Example 2: Histogram (مثال 2: هیستوگرام)
	int num_items{};
	std::cout << "How many data items do you have? ";
	std::cin >> num_items;

	std::vector<int> data{};

	// Get data from user (دریافت داده از کاربر)
	for (int i{ 1 }; i <= num_items; ++i) {
		int data_item{};
		std::cout << "Enter data item " << i << ": ";
		std::cin >> data_item;
		data.push_back(data_item);
	}

	// Display histogram (نمایش هیستوگرام)
	std::cout << "\nDisplaying Histogram" << std::endl;
	for (auto val : data) {
		for (int i{ 1 }; i <= val; ++i) {
			if (i % 5 == 0)
				std::cout << "*";
			else
				std::cout << "-";
		}
		std::cout << std::endl;
	}

	return 0;

}

/*
هدف: آشنایی با حلقه‌های تو در تو برای کاربردهای پیچیده‌تر.

نکته آموزشی:

حلقه‌های تو در تو برای پردازش داده‌های چند بعدی استفاده می‌شوند.
حلقه بیرونی معمولاً برای سطرها و حلقه داخلی برای ستون‌ها استفاده می‌شود.
در هیستوگرام، حلقه داخلی برای رسم هر ستون استفاده می‌شود.
همیشه از نام‌های متغیر معنادار (مثل num1, num2) استفاده کنید تا کد قابل فهم‌تر شود.
*/