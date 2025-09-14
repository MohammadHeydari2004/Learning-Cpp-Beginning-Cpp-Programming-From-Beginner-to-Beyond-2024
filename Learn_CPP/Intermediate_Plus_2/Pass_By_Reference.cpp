// Pass-by-reference parameter passing (انتقال پارامتر به روش ارجاع)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <string>   // For string handling (برای مدیریت رشته‌ها)
#include <vector>   // For vector handling (برای مدیریت وکتورها)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

// Pass-by-reference functions (توابع انتقال به روش ارجاع)
void pass_by_ref1(int& num) {  // & indicates reference (علامت & نشان‌دهنده ارجاع است)

	num = 1000; // Modifies original (تغییر در اصل)

}

void pass_by_ref2(string& s) {

	s = "Changed"; // Modifies original (تغییر در اصل)

}

void pass_by_ref3(vector<string>& v) {

	v.clear(); // Modifies original (تغییر در اصل)

}

void print_vector(const vector<string>& v) {  // const reference (ارجاع ثابت)

	for (auto s : v)
		cout << s << " ";
	cout << endl;

}

int main() {

	// Integer demonstration (نشان‌دادن صحیح)
	int num{ 10 };
	cout << "num before: " << num << endl;
	pass_by_ref1(num);
	cout << "num after: " << num << endl; // Now 1000 (اکنون 1000 است)

	// String demonstration (نشان‌دادن رشته)
	string name{ "Frank" };
	cout << "\nname before: " << name << endl;
	pass_by_ref2(name);
	cout << "name after: " << name << endl; // Now "Changed" (اکنون "Changed" است)

	// Vector demonstration (نشان‌دادن وکتور)
	vector<string> stooges{ "Larry", "Moe", "Curly" };
	cout << "\nstooges before: ";
	print_vector(stooges);
	pass_by_ref3(stooges);
	cout << "stooges after: ";
	print_vector(stooges); // Now empty (اکنون خالی است)

	return 0;

}

/*
Pass-by-Reference Mechanism (مکانیزم انتقال به روش ارجاع):
& in parameter creates a reference
(استفاده از & در پارامتر یک ارجاع ایجاد می‌کند).

Works directly with original data
(مستقیماً با داده اصلی کار می‌کند).

Key Benefits (مزایای کلیدی):
No copying overhead
(بدون هزینه کپی).

Can modify original data
(می‌تواند داده اصلی را تغییر دهد).

Efficient for large objects
(برای اشیاء بزرگ کارآمد است).

const References (ارجاع‌های ثابت):
const vector<string> &v: Read-only access
(دسترسی فقط خواندنی).

Prevents accidental modification
(از تغییر تصادفی جلوگیری می‌کند).

Still avoids copying
(هنوز از کپی جلوگیری می‌کند).
*/