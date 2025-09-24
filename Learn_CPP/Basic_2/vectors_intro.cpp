#include <iostream> // For input/output (برای ورودی/خروجی)
#include <vector>   // Required for vectors (ضروری برای استفاده از وکتورها)

int main() {

	// Declare and initialize character vector (تعریف وکتور کاراکتری)
	std::vector<char> vowels{ 'a', 'e', 'i', 'o', 'u' };
	std::cout << vowels[0] << std::endl; // Access first element (دسترسی به اولین عنصر)
	std::cout << vowels[4] << std::endl; // Access last element (دسترسی به آخرین عنصر)

	// Declare and initialize integer vector (تعریف وکتور عدد صحیح)
	std::vector<int> test_scores{ 100, 98, 89 };

	// Two ways to access elements (دو روش دسترسی به عناصر):
	// 1. Array syntax (with bounds checking disabled) (روش آرایه - بدون بررسی محدوده)
	std::cout << "\nTest scores using array syntax:" << std::endl;
	std::cout << test_scores[0] << std::endl; // Faster but unsafe (سریع‌تر اما ناامن)

	// 2. Vector syntax (with bounds checking) (روش وکتور - با بررسی محدوده)
	std::cout << "\nTest scores using vector syntax:" << std::endl;
	std::cout << test_scores.at(0) << std::endl; // Safe access (دسترسی ایمن)
	// test_scores.at(10) would throw an error (استفاده از .at(10) خطایی ایجاد می‌کند)

	// Get vector size (دریافت اندازه وکتور)
	std::cout << "\nThere are " << test_scores.size() << " scores in the vector" << std::endl;

	// Update elements (به‌روزرسانی عناصر)
	std::cout << "\nEnter 3 test scores: ";
	std::cin >> test_scores.at(0);
	std::cin >> test_scores.at(1);
	std::cin >> test_scores.at(2);

	// Add new elements dynamically (افزودن عناصر جدید به‌صورت پویا)
	int score_to_add{ 0 };
	std::cout << "\nEnter a test score to add to the vector: ";
	std::cin >> score_to_add;
	test_scores.push_back(score_to_add); // Adds element to end (افزودن عنصر به انتهای وکتور)

	// Show updated size (نمایش اندازه به‌روزرسانی‌شده)
	std::cout << "\nThere are now " << test_scores.size() << " scores in the vector" << std::endl;

	// 2D Vector example (مثال وکتور دو بعدی)
	std::vector<std::vector<int>> movie_ratings{
		{1, 2, 3, 4}, // Reviewer 1 (بررسی‌کننده 1)
		{1, 2, 4, 4}, // Reviewer 2 (بررسی‌کننده 2)
		{1, 3, 4, 5}  // Reviewer 3 (بررسی‌کننده 3)
	};

	// Access 2D vector elements (دسترسی به عناصر وکتور دو بعدی)
	std::cout << "\nMovie rating for reviewer #1: "
		<< movie_ratings.at(0).at(0) << std::endl;
	// First reviewer, first movie (اولین بررسی‌کننده، اولین فیلم)

	return 0;

}

/*
هدف: معرفی وکتورها (آرایه‌های پویا) و مزایای آن‌ها نسبت به آرایه‌های ساده.

نکته آموزشی:

وکتورها اندازه پویا دارند و می‌توانند در حین اجرا بزرگ‌تر شوند (push_back).
روش .at() بررسی محدوده انجام می‌دهد و اگر خارج از محدوده باشد، خطا می‌دهد (برخلاف []).
push_back() عنصر جدیدی را به انتهای وکتور اضافه می‌کند.
وکتورهای دو بعدی مثل جدول داده عمل می‌کنند (سطر و ستون).
*/