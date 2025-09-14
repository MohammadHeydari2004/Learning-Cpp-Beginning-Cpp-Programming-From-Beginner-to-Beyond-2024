// Array-pointer relationship - critical connection (رابطه آرایه-اشاره‌گر - ارتباط حیاتی)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

	int scores[]{ 100, 95, 89 };

	cout << "Array name (address): " << scores << endl; // Memory address (آدرس حافظه)

	int* score_ptr{ scores }; // Points to first element (به اولین عنصر اشاره می‌کند)
	cout << "Pointer value: " << score_ptr << endl; // Same as scores (همان scores)

	cout << "\nArray subscript notation -------------------------" << endl;
	cout << scores[0] << endl; // 100
	cout << scores[1] << endl; // 95
	cout << scores[2] << endl; // 89

	cout << "\nPointer subscript notation -------------------------" << endl;
	cout << score_ptr[0] << endl; // 100
	cout << score_ptr[1] << endl; // 95
	cout << score_ptr[2] << endl; // 89

	cout << "\nPointer offset notation-------------------------" << endl;
	cout << *score_ptr << endl; // 100 (First element) (اولین عنصر)
	cout << *(score_ptr + 1) << endl; // 95 (Second element) (دومین عنصر)
	cout << *(score_ptr + 2) << endl; // 89 (Third element) (سومین عنصر)

	cout << "\nArray offset notation-------------------------" << endl;
	cout << *scores << endl; // 100
	cout << *(scores + 1) << endl; // 95
	cout << *(scores + 2) << endl; // 89

	return 0;

}

/*
Array Name as Pointer (نام آرایه به عنوان اشاره‌گر):
Array name is a pointer to the first element
(نام آرایه اشاره‌گر به اولین عنصر است).

scores is equivalent to &scores[0]
(معادل &scores[0] است).

Two Ways to Access Elements (دو روش دسترسی به عناصر):
Array notation: scores[1]
(نوتیشن آرایه).

Pointer notation: *(scores + 1)
(نوتیشن اشاره‌گر).

Key Insight (بینش کلیدی):
Array subscripting is just pointer arithmetic
(ایندکس‌گذاری آرایه فقط حساب اشاره‌گر است).

scores[i] is equivalent to *(scores + i)
(معادل *(scores + i) است).
*/