#include <iostream> // I/O operations (عملیات ورودی/خروجی)
#include <vector>   // Vector library (کتابخانه وکتور)

int main() {

	// Create and populate vectors (ایجاد و پر کردن وکتورها)
	std::vector<int> vector1{ 10, 20 };
	std::vector<int> vector2{ 100, 200 };

	// Create 2D vector (ایجاد وکتور دو بعدی)
	std::vector<std::vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	// Display initial state (نمایش حالت اولیه)
	std::cout << "\nInitial vector_2d:" << std::endl;
	std::cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << std::endl; // 10 20
	std::cout << vector_2d.at(1).at(0) << "  " << vector_2d.at(1).at(1) << std::endl; // 100 200

	// Modify original vector (تغییر وکتور اصلی)
	vector1.at(0) = 1000;

	// Display after modification (نمایش پس از تغییر)
	std::cout << "\nAfter modifying vector1:" << std::endl;
	std::cout << "vector_2d: " << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << std::endl;
	// Output: 10 20 (NOT 1000 20!) (خروجی: 10 20 (نه 1000 20!))

	std::cout << "vector1: " << vector1.at(0) << "  " << vector1.at(1) << std::endl; // 1000 20

	/*
	 * KEY INSIGHT:
	 * When you push a vector into another vector,
	 * a COPY is made - not a reference!
	 *
	 * بینش کلیدی:
	 * هنگام اضافه کردن یک وکتور به وکتور دیگر،
	 * یک کپی ایجاد می‌شود - نه یک ارجاع!
	 */

	std::cout << "\nWhy this happens? (چرا این اتفاق می‌افتد؟)" << std::endl;
	std::cout << "vector_2d[0] is a COPY of vector1, not vector1 itself!" << std::endl;
	std::cout << "وکتور_2d[0] یک کپی از vector1 است، نه خود vector1!" << std::endl;

	// How to actually modify 2D vector (روش واقعی تغییر وکتور دو بعدی)
	vector_2d.at(0).at(0) = 5000; // Directly modify 2D vector (تغییر مستقیم وکتور دو بعدی)
	std::cout << "\nNow vector_2d is: " << vector_2d.at(0).at(0) << std::endl; // 5000

	return 0;

}

/*
هدف: درک رفتار کپی‌برداری در وکتورها و تفاوت آن با ارجاع.

نکته آموزشی:

وکتورها هنگام اضافه شدن به وکتور دیگر کپی می‌شوند (رفتار ارجاع ندارند).
این رفتار باعث ایمنی کد می‌شود اما ممکن است برای مبتدیان گمراه‌کننده باشد.
برای تغییر وکتور دو بعدی، باید مستقیماً از طریق vector_2d.at(i).at(j) عمل کنید.
این رفتار در مقایسه با آرایه‌های ساده (که آدرس حافظه را ارسال می‌کنند) متفاوت است.
*/