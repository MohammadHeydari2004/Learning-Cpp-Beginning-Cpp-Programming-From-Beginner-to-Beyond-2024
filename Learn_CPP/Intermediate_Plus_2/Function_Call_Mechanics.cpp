// How function calls work internally (چگونگی کار فراخوانی توابع در داخل)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

void func2(int& x, int y, int z) {

	x += y + z;

}

int func1(int a, int b) {

	int result{};
	result = a + b;
	func2(result, a, b);
	return result;

}

int main() {

	int x{ 10 };
	int y{ 20 };
	int z{};
	z = func1(x, y);
	cout << z << endl;
	return 0;

}

/* What happens during function calls
(چه چیزی در فراخوانی توابع اتفاق می‌افتد):

   - Space for return value is pushed onto stack
   (فضا برای مقدار بازگشتی به پشته اضافه می‌شود)

   - Parameters are pushed onto stack
   (پارامترها به پشته اضافه می‌شوند)

   - Return address is pushed onto stack
   (آدرس بازگشت به پشته اضافه می‌شود)

   - Control transfers to function
   (کنترل به تابع منتقل می‌شود)

   - Function executes
   (تابع اجرا می‌شود)

   - Result is stored
   (نتیجه ذخیره می‌شود)

   - Stack is cleaned up
   (پشته پاک می‌شود)

   - Control returns to caller
   (کنترل به فراخواننده بازمی‌گردد)
*/
// ----------------------------------------------------------------------
/*
Call Stack Mechanics (مکانیزم پشته فراخوانی):
LIFO structure
(ساختار LIFO).

Each function call creates stack frame
(هر فراخوانی تابع یک چارچوب پشته ایجاد می‌کند).

Stack Frame Contents (محتویات چارچوب پشته):
Return address
(آدرس بازگشت).

Parameters
(پارامترها).

Local variables
(متغیرهای محلی).

Saved register values
(مقادیر ثبت‌شده رجیسترها).

Memory Management (مدیریت حافظه):
Automatic allocation/deallocation
(تخصیص/آزادسازی خودکار).

Stack overflow possible with deep recursion
(سرریز پشته ممکن با بازگشت عمیق).
*/