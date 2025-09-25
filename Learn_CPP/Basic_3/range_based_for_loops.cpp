#include <iostream> // I/O operations (عملیات ورودی/خروجی)

int main() {
	// Initialize array (مقداردهی اولیه آرایه)
	int scores[]{ 10, 20, 30 };

	// Range-based for loop: iterate through array (حلقه مبتنی بر محدوده: پیمایش آرایه)
	for (auto score : scores)
		std::cout << score << std::endl;

	// Example with vector of temperatures (مثال با وکتور دماها)
	/*
	std::vector<double> temperatures{87.9, 77.9, 80.0, 72.5};
	double average_temp {};
	double total {};

	// Calculate sum using range-based for loop (محاسبه مجموع با حلقه مبتنی بر محدوده)
	for (auto temp : temperatures)
		total += temp;

	// Calculate average (محاسبه میانگین)
	if (temperatures.size() != 0)
		average_temp = total / temperatures.size();

	// Format and display result (فرمت‌بندی و نمایش نتیجه)
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "Average temperature is " << average_temp << std::endl;
	*/

	// Iterate through literal array (پیمایش آرایه لیترال)
	/*
	for (auto val : {1, 2, 3, 4, 5})
		std::cout << val << std::endl;
	*/

	// Process string characters (پردازش کاراکترهای رشته)
	/*
	for (auto c : "This is a test")
		if (c != ' ')
			std::cout << c;
	*/

	// Replace spaces with tabs (جایگزینی فاصله‌ها با تب)
	/*
	for (auto c : "This is a test")
		if (c == ' ')
			std::cout << "\t";
		else
			std::cout << c;
	*/

	return 0;
}

/*
هدف: آشنایی با حلقه‌های مبتنی بر محدوده (Range-based For Loops) در سی‌پلاس‌پلاس مدرن.

نکته آموزشی:

ساختار حلقه مبتنی بر محدوده: for (element_declaration : collection)
از auto برای استخراج خودکار نوع استفاده کنید تا کد کوتاه‌تر شود.
این حلقه‌ها خوانایی بالاتری دارند و کمتر مستعد خطا هستند.
برای پیمایش کامل مجموعه‌ها (آرایه‌ها، وکتورها، رشته‌ها) ایده‌آل هستند.
*/