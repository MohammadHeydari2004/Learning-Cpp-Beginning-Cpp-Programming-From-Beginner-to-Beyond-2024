/*
	Section 8 Challenge (بخش 8: چالش آموزشی)

	Write a program that calculates the minimum number of coins
	needed to make change for a given amount in cents.

	نوشتن برنامه‌ای که حداقل تعداد سکه‌های لازم
	برای تبدیل یک مقدار به سنت را محاسبه کند.

	Assumptions (فرضیات):
	- Amount is non-negative (مقدار غیرمنفی است)
	- US currency system (سیستم ارز آمریکا):
		* 1 dollar = 100 cents
		* 1 quarter = 25 cents
		* 1 dime = 10 cents
		* 1 nickel = 5 cents
		* 1 penny = 1 cent
*/

#include <iostream> // Required for I/O (ضروری برای ورودی/خروجی)

int main() {

	std::cout << "Enter an amount in cents: ";
	int change_amount{};
	std::cin >> change_amount;

	// TODO: Calculate the minimum number of coins needed (محاسبه حداقل تعداد سکه‌های لازم)
	// Hint: Use division and modulo operators (راهنمایی: از عملگرهای تقسیم و باقی‌مانده استفاده کنید)

	// Variables to store coin counts (متغیرها برای ذخیره تعداد سکه‌ها)
	int dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

	// YOUR SOLUTION HERE (راه‌حل شما اینجا)
	// 1. Calculate dollars (محاسبه دلارها)
	// 2. Calculate quarters (محاسبه کوارترها)
	// 3. Calculate dimes (محاسبه دایم‌ها)
	// 4. Calculate nickels (محاسبه نیکل‌ها)
	// 5. Calculate pennies (محاسبه پنی‌ها)

	// Display results (نمایش نتایج)
	std::cout << "\nYou can provide this change as follows:" << std::endl;
	std::cout << "dollars  : " << dollars << std::endl;
	std::cout << "quarters : " << quarters << std::endl;
	std::cout << "dimes    : " << dimes << std::endl;
	std::cout << "nickels  : " << nickels << std::endl;
	std::cout << "pennies  : " << pennies << std::endl;

	// BONUS CHALLENGE: Solve using modulo operator (چالش اضافه: حل با استفاده از عملگر باقی‌مانده)
	// BONUS CHALLENGE: Handle invalid inputs (چالش اضافه: مدیریت ورودی‌های نامعتبر)

	return 0;

}

/*
هدف: چالش عملی برای تمرین عملگرهای حسابی و منطقی.

نکته آموزشی:

این یک تمرین تعاملی است تا شما خودتان راه‌حل را کشف کنید.

راهنمایی: ابتدا بزرگ‌ترین واحد (دلار) را محاسبه کنید، سپس باقی‌مانده را برای واحد بعدی استفاده کنید.

برای محاسبه تعداد هر سکه:
coins = total_amount / coin_value;
total_amount = total_amount % coin_value;

قبل از دیدن راه‌حل، حتماً خودتان تلاش کنید!
*/