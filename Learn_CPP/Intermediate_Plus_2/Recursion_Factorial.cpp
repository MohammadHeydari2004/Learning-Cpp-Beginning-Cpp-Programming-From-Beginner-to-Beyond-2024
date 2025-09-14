// Recursion: Factorial function (بازگشت: تابع فاکتوریل)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

// Recursive factorial function (تابع فاکتوریل بازگشتی)
unsigned long long factorial(unsigned long long n) {

	if (n == 0)
		return 1;             // Base case (حالت پایه)
	return n * factorial(n - 1); // Recursive case (حالت بازگشتی)

}

int main() {

	cout << "factorial(3) = " << factorial(3) << endl;   // 6
	cout << "factorial(8) = " << factorial(8) << endl;   // 40320
	cout << "factorial(12) = " << factorial(12) << endl; // 479001600
	cout << "factorial(20) = " << factorial(20) << endl; // 2432902008176640000

	return 0;

}

/*
Recursion Basics (اساسیات بازگشت):
Function calls itself
(تابع خود را فراخوانی می‌کند).

Must have base case to terminate
(باید حالت پایه برای خاتمه داشته باشد).

Each call works on smaller problem
(هر فراخوانی روی مسئله کوچک‌تر کار می‌کند).

Factorial Example (مثال فاکتوریل):
Base case: 0! = 1
(حالت پایه: 0! = 1).

Recursive case: n! = n × (n-1)!
(حالت بازگشتی).

Call Stack Behavior (رفتار پشته فراخوانی):
Each call adds frame to call stack
(هر فراخوانی چارچوبی به پشته فراخوانی اضافه می‌کند).

Stack unwinds after base case reached
(پشته پس از رسیدن به حالت پایه باز می‌شود).

Limitations (محدودیت‌ها):
Stack overflow for large inputs
(سرریز پشته برای ورودی‌های بزرگ).

Less efficient than iterative solutions
(کمتر کارآمد از راه‌حل‌های تکراری).
*/