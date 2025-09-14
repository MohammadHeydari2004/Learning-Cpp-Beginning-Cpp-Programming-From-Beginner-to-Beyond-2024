// Recursion: Fibonacci sequence (بازگشت: دنباله فیبوناچی)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

// Recursive Fibonacci function (تابع فیبوناچی بازگشتی)
unsigned long long fibonacci(unsigned long long n) {

	if (n <= 1)
		return n;             // Base cases (حالت‌های پایه)
	return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case (حالت بازگشتی)

}

int main() {

	cout << "fibonacci(5) = " << fibonacci(5) << endl;   // 5
	cout << "fibonacci(30) = " << fibonacci(30) << endl; // 832040
	cout << "fibonacci(40) = " << fibonacci(40) << endl; // 102334155

	return 0;

}

/*
Fibonacci Sequence (دنباله فیبوناچی):
Each number is sum of two preceding ones
(هر عدد مجموع دو عدد قبلی است).

F(0) = 0, F(1) = 1, F(n) = F(n-1) + F(n-2)

Recursive Implementation (پیاده‌سازی بازگشتی):
Base cases: n=0 and n=1
(حالت‌های پایه: n=0 و n=1).

Recursive case: F(n) = F(n-1) + F(n-2)
(حالت بازگشتی).

Performance Issues (مشکلات عملکرد):
Exponential time complexity (O(2^n))
(پیچیدگی زمانی نمایی).

Many redundant calculations
(محاسبات تکراری زیاد).

Becomes very slow for larger values
(برای مقادیر بزرگ بسیار کند می‌شود).
*/