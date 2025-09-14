// References vs Pointers - key differences (مرجع‌ها در مقابل اشاره‌گرها - تفاوت‌های کلیدی)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <string>   // For string (برای رشته)
#include <vector>   // For vector (برای وکتور)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

	int num{ 100 };
	int& ref{ num }; // Reference declaration (تعریف مرجع)

	cout << "num: " << num << endl; // 100
	cout << "ref: " << ref << endl; // 100

	num = 200; // Modify original (تغییر اصل)
	cout << "\nAfter modifying num:" << endl;
	cout << "num: " << num << endl; // 200
	cout << "ref: " << ref << endl; // 200

	ref = 300; // Modify through reference (تغییر از طریق مرجع)
	cout << "\nAfter modifying through ref:" << endl;
	cout << "num: " << num << endl; // 300
	cout << "ref: " << ref << endl; // 300

	cout << "\n---------------------------------" << endl;
	vector<string> stooges{ "Larry", "Moe", "Curly" };

	// Copy-based loop (حلقه مبتنی بر کپی)
	for (auto str : stooges)
		str = "Funny"; // Modifies copy, NOT original (کپی را تغییر می‌دهد، نه اصل)

	cout << "After copy loop:" << endl;
	for (auto str : stooges) // No change (تغییری نیست)
		cout << str << " ";
	cout << endl;

	cout << "\n---------------------------------" << endl;
	// Reference-based loop (حلقه مبتنی بر مرجع)
	for (auto& str : stooges)  // str is reference (str مرجع است)
		str = "Funny"; // Modifies original (اصل را تغییر می‌دهد)

	cout << "After reference loop:" << endl;
	for (auto const& str : stooges)   // const reference (مرجع ثابت)
		cout << str << " "; // Vector elements changed (عناصر وکتور تغییر کرده‌اند)

	return 0;

}

/*
References (مرجع‌ها):
Alias for existing variable
(نام مستعار برای متغیر موجود).

Must be initialized when declared
(باید هنگام تعریف مقداردهی شوند).

Cannot be reassigned to refer to different variable
(نمی‌توانند به متغیر متفاوتی ارجاع دهند).

Key Differences (تفاوت‌های کلیدی):
References cannot be null
(مرجع‌ها نمی‌توانند null باشند).

References cannot be reassigned
(مرجع‌ها نمی‌توانند مجدداً تخصیص یابند).

No pointer arithmetic with references
(بدون حساب اشاره‌گر با مرجع‌ها).

When to Use (چه زمانی استفاده کنیم):
References: As function parameters
(به عنوان پارامترهای تابع).

Pointers: When null is valid, or need pointer arithmetic
(وقتی null معتبر است یا نیاز به حساب اشاره‌گر دارید).
*/