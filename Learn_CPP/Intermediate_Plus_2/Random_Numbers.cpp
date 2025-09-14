// Generating random numbers (تولید اعداد تصادفی)
#include <cstdlib>  // For rand() and srand() (برای rand() و srand())
#include <ctime>    // For time() (برای time())
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

	int random_number{};
	size_t count{ 10 };    // Number of random numbers (تعداد اعداد تصادفی)
	int min{ 1 };          // Lower bound (حد پایین)
	int max{ 6 };          // Upper bound (حد بالا)

	// Seed the random number generator (تنظیم دانه مولد اعداد تصادفی)
	cout << "RAND_MAX: " << RAND_MAX << endl;
	srand(time(nullptr));  // Use current time as seed (استفاده از زمان فعلی به عنوان دانه)

	for (size_t i{ 1 }; i <= count; ++i) {
		// Generate random number in range [min, max] (تولید عدد تصادفی در محدوده [min, max])
		random_number = rand() % (max - min + 1) + min;
		cout << random_number << endl;
	}

	return 0;

}

/*
Random Number Generation (تولید اعداد تصادفی):
rand(): Generates pseudo-random number
(عدد شبه‌تصادفی تولید می‌کند).

srand(): Seeds the random number generator
(مولد اعداد تصادفی را تنظیم می‌کند).

Without seeding, same sequence every run
(بدون تنظیم دانه، هر بار همان دنباله تولید می‌شود).

Range Calculation (محاسبه محدوده):
rand() % n: Gives 0 to n-1
(اعداد 0 تا n-1 را می‌دهد).

Adjust to get desired range
(برای به دست آوردن محدوده مورد نظر تنظیم کنید).

Best Practices (بهترین روش‌ها):
Seed once at program start
(یک بار در ابتدای برنامه تنظیم دانه کنید).

Use time(nullptr) for different sequences
(از time(nullptr) برای دنباله‌های متفاوت استفاده کنید).
*/