// Default function arguments (آرگومان‌های پیش‌فرض توابع)
#include <iomanip>  // For output formatting (برای فرمت‌بندی خروجی)
#include <ios>
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <string>   // For string handling (برای مدیریت رشته‌ها)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

// Functions with default arguments (توابع با آرگومان‌های پیش‌فرض)
double calc_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50) {

	return base_cost + (base_cost * tax_rate) + shipping;

}

void greeting(string name, string prefix = "Mr.", string suffix = "") {

	cout << "Hello " << prefix << " " << name << " " << suffix << endl;

}

int main() {

	double cost{};

	// Using all arguments (استفاده از همه آرگومان‌ها)
	cost = calc_cost(100.0, 0.08, 4.25);
	cout << fixed << setprecision(2);
	cout << "Cost with all arguments: $" << cost << endl;

	// Using default shipping (استفاده از پیش‌فرض حمل‌ونقل)
	cost = calc_cost(100.0, 0.08);
	cout << "Cost with default shipping: $" << cost << endl;

	// Using default tax and shipping (استفاده از پیش‌فرض مالیات و حمل‌ونقل)
	cost = calc_cost(200.0);
	cout << "Cost with default tax and shipping: $" << cost << endl;

	// Using all defaults (استفاده از همه پیش‌فرض‌ها)
	cost = calc_cost();
	cout << "Cost with all defaults: $" << cost << endl;

	// Greeting examples (مثال‌های سلام)
	greeting("Glenn Jones", "Dr.", "M.D.");
	greeting("James Rogers", "Professor", "Ph.D.");
	greeting("Frank Miller", "Dr.");
	greeting("William Smith");
	greeting("Mary Howard", "Mrs.", "Ph.D.");

	return 0;

}

/*
Default Arguments (آرگومان‌های پیش‌فرض):
Parameters with default values if not provided
(پارامترها با مقادیر پیش‌فرض اگر ارائه نشوند).

Must be rightmost parameters
(باید پارامترهای سمت راست باشند).

Key Rules (قوانین کلیدی):
Defaults specified in function declaration/prototype
(پیش‌فرض‌ها در اعلام/پیش‌نمونه تابع مشخص می‌شوند).

Can't have defaults in both declaration and definition
(نمی‌توان پیش‌فرض در هر دو اعلام و تعریف داشت).

Omitted arguments must be trailing arguments
(آرگومان‌های حذف‌شده باید در انتهای آرگومان‌ها باشند).

Practical Benefits (مزایای عملی):
Reduces number of overloaded functions
(تعداد توابع اضافه‌بارگیری‌شده را کاهش می‌دهد).

Makes common cases simpler
(موارد رایج را ساده‌تر می‌کند).

Improves code readability
(خوانایی کد را افزایش می‌دهد).
*/