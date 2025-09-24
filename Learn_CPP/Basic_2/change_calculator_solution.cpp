#include <iostream> // I/O operations (عملیات ورودی/خروجی)

int main() {

	// Define conversion values in cents (تعریف مقادیر تبدیل به سنت)
	const int dollar_value{ 100 };
	const int quarter_value{ 25 };
	const int dime_value{ 10 };
	const int nickel_value{ 5 };

	int change_amount{};
	std::cout << "Enter an amount in cents: ";
	std::cin >> change_amount;

	// Solution 1 - Without modulo operator (راه‌حل 1 - بدون استفاده از عملگر باقی‌مانده)
	int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

	// Calculate dollars (محاسبه دلارها)
	dollars = change_amount / dollar_value;
	balance = change_amount - (dollars * dollar_value);

	// Calculate quarters (محاسبه کوارترها)
	quarters = balance / quarter_value;
	balance -= quarters * quarter_value; // Same as balance = balance - (quarters * quarter_value)

	// Calculate dimes (محاسبه دایم‌ها)
	dimes = balance / dime_value;
	balance -= dimes * dime_value;

	// Calculate nickels (محاسبه نیکل‌ها)
	nickels = balance / nickel_value;
	balance -= nickels * nickel_value;

	// Remaining balance is pennies (باقی‌مانده همان پنی‌ها است)
	pennies = balance;

	// Display results (نمایش نتایج)
	std::cout << "\nSolution without modulo operator:" << std::endl;
	std::cout << "dollars  : " << dollars << std::endl;
	std::cout << "quarters : " << quarters << std::endl;
	std::cout << "dimes    : " << dimes << std::endl;
	std::cout << "nickels  : " << nickels << std::endl;
	std::cout << "pennies  : " << pennies << std::endl;

	// Solution 2 - Using modulo operator (راه‌حل 2 - با استفاده از عملگر باقی‌مانده)
	std::cout << "\n----------------------------" << std::endl;
	std::cout << "Solution using modulo operator" << std::endl;
	std::cout << "----------------------------" << std::endl;

	// Reset all values to zero (بازنشانی تمام مقادیر به صفر)
	balance = dollars = quarters = dimes = nickels = pennies = 0;

	// Calculate dollars (محاسبه دلارها)
	dollars = change_amount / dollar_value;
	balance = change_amount % dollar_value; // Get remainder after dollars (باقی‌مانده پس از دلارها)

	// Calculate quarters (محاسبه کوارترها)
	quarters = balance / quarter_value;
	balance %= quarter_value; // Same as balance = balance % quarter_value

	// Calculate dimes (محاسبه دایم‌ها)
	dimes = balance / dime_value;
	balance %= dime_value;

	// Calculate nickels (محاسبه نیکل‌ها)
	nickels = balance / nickel_value;
	balance %= nickel_value;

	// Remaining balance is pennies (باقی‌مانده همان پنی‌ها است)
	pennies = balance;

	// Display results (نمایش نتایج)
	std::cout << "\nYou can provide this change as follows:" << std::endl;
	std::cout << "dollars  : " << dollars << std::endl;
	std::cout << "quarters : " << quarters << std::endl;
	std::cout << "dimes    : " << dimes << std::endl;
	std::cout << "nickels  : " << nickels << std::endl;
	std::cout << "pennies  : " << pennies << std::endl;

	// Why modulo is better (چرا استفاده از باقی‌مانده بهتر است):
	// 1. More concise code (کد مختصرتر)
	// 2. Fewer operations (تعداد عملیات کمتر)
	// 3. Less chance for calculation errors (احتمال خطا کمتر)

	return 0;

}

/*
هدف: راه‌حل چالش محاسبه سکه‌ها با دو روش مختلف.

نکته آموزشی:

روش اول از تفریق مکرر استفاده می‌کند که برای درک مفهوم خوب است.
روش دوم از عملگر باقی‌مانده تقسیم (%) استفاده می‌کند که کارآمدتر است.
balance %= value معادل balance = balance % value است و خلاصه‌نویسی مفیدی است.
این مثال نشان می‌دهد چگونه می‌توان از عملگرهای حسابی برای حل مسائل واقعی استفاده کرد.
*/