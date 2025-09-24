#include <iostream> // I/O library (کتابخانه ورودی/خروجی)
#include <typeinfo> // Required for typeid (ضروری برای استفاده از typeid)

int main() {

	int total{};       // Will store sum of integers (برای ذخیره مجموع اعداد صحیح)
	int num1{}, num2{}, num3{}; // Three integers to input (سه عدد صحیح برای ورودی)
	const int count{ 3 }; // Number of integers (تعداد اعداد)

	// Get user input (دریافت ورودی کاربر)
	std::cout << "Enter 3 integers separated by spaces: ";
	std::cin >> num1 >> num2 >> num3;

	// Calculate sum (محاسبه مجموع)
	total = num1 + num2 + num3;

	double average{ 0.0 }; // Variable for average (متغیر برای میانگین)

	// PROBLEM: total/count is integer division (مشکل: total/count تقسیم صحیح است)
	// SOLUTION: Cast total to double before division (راه‌حل: تبدیل total به double قبل از تقسیم)
	average = static_cast<double>(total) / count;

	// Display variable types using typeid (نمایش نوع متغیرها با استفاده از typeid)
	std::cout << "num1 Type : " << typeid(num1).name() << std::endl;
	std::cout << "num2 Type : " << typeid(num2).name() << std::endl;
	std::cout << "average Type : " << typeid(average).name() << std::endl;

	// Display results (نمایش نتایج)
	std::cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << std::endl;
	std::cout << "The sum of the numbers is: " << total << std::endl;
	std::cout << "The average of the numbers is: " << average << std::endl;

	// Alternative syntax (روش جایگزین)
	// average = (double)total / count; // Old-style cast (تبدیل قدیمی)

	// Why static_cast is better (چرا static_cast بهتر است):
	// 1. More readable (خوانایی بیشتر)
	// 2. Compiler checks for validity (کامپایلر اعتبار آن را بررسی می‌کند)
	// 3. Safer than C-style casts (ایمن‌تر از تبدیل‌های سی)

	return 0;

}

/*
هدف: آشنایی با تبدیل نوع داده (Type Casting) و حل مشکلات نوع‌های مخلوط.

نکته آموزشی:

در تقسیم اعداد صحیح (int/int)، نتیجه همیشه عدد صحیح است (باقی‌مانده از بین می‌رود).
برای محاسبه اعشاری، حداقل یکی از عملوندها باید اعشاری باشد.
static_cast<double>(x) روش ایمن و توصیه‌شده برای تبدیل نوع در سی‌پلاس‌پلاس است.
از تبدیل‌های قدیمی (double)x خودداری کنید چون کمتر ایمن هستند.

تکمیل نکات آموزشی (مطالب اضافی):
- typeid برای تشخیص نوع متغیر در زمان اجرا (RTTI) استفاده می‌شود
- خروجی typeid.name() بسته به کامپایلر متفاوت است (در GCC به صورت فشرده مانند 'i' برای int)
- برای خواندن نام کامل نوع در GCC باید از __cxa_demangle استفاده کرد
*/