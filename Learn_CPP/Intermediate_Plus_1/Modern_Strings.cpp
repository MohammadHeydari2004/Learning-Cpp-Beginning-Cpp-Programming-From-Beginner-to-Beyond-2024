// Modern C++ strings using std::string (رشته‌های مدرن سی‌پلاس‌پلاس با std::string)
#include <ios>
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <string>   // Required for std::string (ضروری برای استفاده از std::string)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

	// String initialization (مقداردهی اولیه رشته)
	string s0;                     // Empty string (رشته خالی)
	string s1{ "Apple" };           // Direct initialization (مقداردهی مستقیم)
	string s2{ "Banana" };          // Direct initialization (مقداردهی مستقیم)
	string s3{ "Kiwi" };            // Direct initialization (مقداردهی مستقیم)
	string s4{ "apple" };           // Direct initialization (مقداردهی مستقیم)
	string s5{ s1 };                // Copy initialization (مقداردهی کپی)
	string s6{ s1, 0, 3 };          // Substring: "App" (زیررشته)
	string s7(10, 'X');           // "XXXXXXXXXX" (تکرار کاراکتر)

	cout << "s0 (empty): \"" << s0 << "\"" << endl;
	cout << "s0 length: " << s0.length() << endl; // 0 (رشته خالی)

	// String comparison (مقایسه رشته‌ها)
	cout << "\nComparison:" << endl;
	cout << boolalpha; // Display true/false (نمایش true/false)
	cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl; // True
	cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl; // False
	cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;   // True (Apple < Banana)

	// String modification (تغییر رشته)
	s3 = "Watermelon";
	cout << "\nAfter assignment: " << s3 << endl;

	s3[0] = 'P'; // Modify character (تغییر کاراکتر)
	cout << "After modifying first character: " << s3 << endl; // "Patermelon"

	// String concatenation (الحاق رشته)
	s3 = s1 + " and " + s2 + " juice";
	cout << "\nConcatenated string: " << s3 << endl; // "Apple and Banana juice"

	// String traversal (پیمایش رشته)
	cout << "\nTraversal with for loop:" << endl;
	for (size_t i = 0; i < s1.length(); ++i)
		cout << s1[i]; // "Apple"
	cout << endl;

	// Range-based for loop (حلقه مبتنی بر محدوده)
	cout << "Traversal with range-based for:" << endl;
	for (char c : s1)
		cout << c; // "Apple"
	cout << endl;

	// Substring operations (عملیات زیررشته)
	string test{ "This is a test" };
	cout << "\nSubstring examples:" << endl;
	cout << "0,4: " << test.substr(0, 4) << endl; // "This"
	cout << "5,2: " << test.substr(5, 2) << endl; // "is"

	// Erase operation (عملیات حذف)
	test.erase(0, 5); // Remove "This " (حذف "This ")
	cout << "After erase: " << test << endl; // "is a test"

	// getline for full line input (دریافت خط کامل)
	string full_name;
	cout << "\nEnter full name: ";
	getline(cin, full_name);
	cout << "Full name: " << full_name << endl;

	return 0;

}

/*
std::string Advantages (مزایای std::string):
Dynamic sizing
(اندازه پویا).

Built-in methods for common operations
(روش‌های داخلی برای عملیات رایج).

Safe memory management
(مدیریت ایمن حافظه).

Operator overloading for intuitive usage
(اضافه‌بارگیری عملگرها برای استفاده شهودی).

Key Features (ویژگی‌های کلیدی):
length(): Get string length
(دریافت طول رشته).

substr(): Extract substring
(استخراج زیررشته).

erase(): Remove characters
(حذف کاراکترها).

getline(): Read full lines
(خواندن خطوط کامل).
*/