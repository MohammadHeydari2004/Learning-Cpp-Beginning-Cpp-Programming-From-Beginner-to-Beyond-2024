/*
	Write a C++ program that:
	1. Creates two empty integer vectors (vector1 and vector2)
	2. Adds elements to them dynamically
	3. Creates a 2D vector containing both
	4. Tests what happens when you modify the original vectors

	نوشتن یک برنامه سی‌پلاس‌پلاس که:
	1. دو وکتور خالی از اعداد صحیح ایجاد کند (vector1 و vector2)
	2. عناصر را به‌صورت پویا به آن‌ها اضافه کند
	3. یک وکتور دو بعدی ایجاد کند که هر دو را شامل شود
	4. بررسی کند چه اتفاقی می‌افتد اگر وکتورهای اصلی را تغییر دهیم
*/

#include <iostream> // Required for I/O (ضروری برای ورودی/خروجی)
#include <vector>   // Required for vectors (ضروری برای استفاده از وکتورها)

int main() {

	// STEP 1: Declare empty vectors (مرحله 1: تعریف وکتورهای خالی)
	std::vector<int> vector1;
	std::vector<int> vector2;

	// STEP 2: Add elements to vector1 (مرحله 2: افزودن عناصر به vector1)
	vector1.push_back(10);
	vector1.push_back(20);

	// Display vector1 contents (نمایش محتوای vector1)
	std::cout << "\nvector1: " << std::endl;
	std::cout << vector1.at(0) << std::endl;
	std::cout << vector1.at(1) << std::endl;
	std::cout << "vector1 contains " << vector1.size() << " elements" << std::endl;

	// STEP 3: Add elements to vector2 (مرحله 3: افزودن عناصر به vector2)
	vector2.push_back(100);
	vector2.push_back(200);

	// Display vector2 contents (نمایش محتوای vector2)
	std::cout << "\nvector2: " << std::endl;
	std::cout << vector2.at(0) << std::endl;
	std::cout << vector2.at(1) << std::endl;
	std::cout << "vector2 contains " << vector2.size() << " elements" << std::endl;

	// STEP 4: Create 2D vector (مرحله 4: ایجاد وکتور دو بعدی)
	std::vector<std::vector<int>> vector_2d;

	// Add vectors to 2D vector (افزودن وکتورها به وکتور دو بعدی)
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	// Display 2D vector contents (نمایش محتوای وکتور دو بعدی)
	std::cout << "\nvector_2d:" << std::endl;
	std::cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << std::endl;
	std::cout << vector_2d.at(1).at(0) << "  " << vector_2d.at(1).at(1) << std::endl;

	// STEP 5: Modify original vector (مرحله 5: تغییر وکتور اصلی)
	vector1.at(0) = 1000; // Change first element (تغییر اولین عنصر)

	// QUESTION: What will happen to vector_2d? (سوال: vector_2d چه تغییری می‌کند؟)
	std::cout << "\nAfter modifying vector1, vector_2d becomes:" << std::endl;
	std::cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << std::endl;

	// TRY IT YOURSELF: Complete the program! (خودتان امتحان کنید: برنامه را کامل کنید!)
	// Display vector1 again to see the change (دوباره vector1 را نمایش دهید تا تغییر را ببینید)
	std::cout << "\nvector1: " << std::endl;
	std::cout << vector1.at(0) << std::endl;
	std::cout << vector1.at(1) << std::endl;

	return 0;

}

/*
هدف: تمرین عملی برای درک عمیق‌تر وکتورها و وکتورهای تو در تو.

نکته آموزشی:

این کد یک تمرین تعاملی است تا شما خودتان کشف کنید چه اتفاقی می‌افتد.
سؤال کلیدی: آیا تغییر vector1 بر vector_2d تأثیر می‌گذارد؟ چرا؟
قبل از دیدن راه‌حل، حتماً کد را اجرا کنید و پیش‌بینی خود را یادداشت کنید.
*/