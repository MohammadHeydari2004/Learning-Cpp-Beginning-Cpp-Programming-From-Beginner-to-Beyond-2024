#include <iomanip>  // For output formatting (برای فرمت‌بندی خروجی)
#include <ios>
#include <iostream> // Required for I/O (ضروری برای ورودی/خروجی)

int main() {

	int length{}, width{}, height{}; // Dimensions of package (ابعاد بسته)
	double base_cost{ 2.50 }; // Base shipping cost (هزینه پایه ارسال)

	const int tier1_threshold{ 100 }; // Volume threshold for tier 1 (مرز حجم برای سطح 1)
	const int tier2_threshold{ 500 }; // Volume threshold for tier 2 (مرز حجم برای سطح 2)

	int max_dimension_length{ 10 }; // Maximum allowed dimension (حداکثر بعد مجاز)

	double tier1_surcharge{ 0.10 }; // 10% surcharge (اضافه‌هزینه 10%)
	double tier2_surcharge{ 0.25 }; // 25% surcharge (اضافه‌هزینه 25%)

	int package_volume{}; // Variable for package volume (متغیر برای حجم بسته)

	std::cout << "Welcome to the package cost calculator" << std::endl;
	std::cout << "Enter length, width, and height of the package separated by spaces: ";
	std::cin >> length >> width >> height;

	// Check if dimensions exceed maximum (بررسی اینکه آیا ابعاد از حداکثر مجاز بیشتر است)
	if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length) {
		std::cout << "Sorry, package rejected - dimension exceeded" << std::endl;
	}
	else {
		double package_cost{};
		package_volume = length * width * height;
		package_cost = base_cost;

		// Apply surcharges based on volume (اعمال اضافه‌هزینه بر اساس حجم)
		if (package_volume > tier2_threshold) {
			package_cost += package_cost * tier2_surcharge;
			std::cout << "Adding tier 2 surcharge" << std::endl;
		}
		else if (package_volume > tier1_threshold) {
			package_cost += package_cost * tier1_surcharge;
			std::cout << "Adding tier 1 surcharge" << std::endl;
		}

		// Format and display results (فرمت‌بندی و نمایش نتایج)
		std::cout << std::fixed << std::setprecision(2);
		std::cout << "The volume of your package is: " << package_volume << std::endl;
		std::cout << "Your package will cost $" << package_cost << " to ship" << std::endl;
	}

	return 0;

}

/*
هدف: کاربرد عملی ساختارهای کنترلی در یک برنامه واقعی (محاسبه هزینه ارسال بسته).

نکته آموزشی:

از const برای مقادیر ثابت (مثل هزینه پایه) استفاده کنید.
برای فرمت‌بندی اعداد اعشاری، از std::fixed و std::setprecision استفاده کنید.
شرط‌ها را از بزرگ به کوچک بررسی کنید تا از اشتباهات منطقی جلوگیری شود.
همیشه ورودی کاربر را اعتبارسنجی کنید قبل از پردازش.
*/