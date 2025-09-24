#include <iostream> // Required for I/O operations (ضروری برای عملیات ورودی/خروجی)

int main() {

	int num1{ 10 }; // Declaration and initialization (تعریف و مقداردهی اولیه)
	int num2{ 20 }; // Declaration and initialization (تعریف و مقداردهی اولیه)

	// CORRECT: Assigning value to num1 (درست: انتساب مقدار به num1)
	num1 = 100; // Changes num1 from 10 to 100 (تغییر num1 از 10 به 100)

	// INCORRECT: This would cause a compilation error (نادرست: این کد خطای کامپایل ایجاد می‌کند)
	// 100 = num1; // Can't assign to literal (نمی‌توان به مقدار ثابت انتساب داد)

	// Display values (نمایش مقادیر)
	std::cout << "num1 is " << num1 << std::endl; // Output: 100 (خروجی: 100)
	std::cout << "num2 is " << num2 << std::endl; // Output: 20 (خروجی: 20)

	// Chained assignment (انتساب زنجیره‌ای)
	int a, b, c;
	a = b = c = 5; // All variables get value 5 (همه متغیرها مقدار 5 می‌گیرند)

	// Multiple assignments (چندین انتساب)
	int x{ 1 }, y{ 2 }, z{ 3 }; // Declaration with initialization (تعریف با مقداردهی اولیه)

	return 0;

}

/*
هدف: درک عملگر انتساب (=) و نحوه استفاده صحیح آن.

نکته آموزشی:

عملگر = راست‌به‌چپ ارزیابی می‌شود (ابتدا سمت راست محاسبه شده، سپس به سمت چپ انتساب می‌یابد).
نمی‌توانید به یک مقدار ثابت انتساب دهید (100 = num1 نادرست است).
همیشه متغیرها را هنگام تعریف مقداردهی اولیه کنید تا از مقادیر تصادفی جلوگیری شود.

*/