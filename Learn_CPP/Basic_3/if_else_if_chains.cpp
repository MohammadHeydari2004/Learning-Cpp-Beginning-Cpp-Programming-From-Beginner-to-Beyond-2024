#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)

int main() {

	int score{}; // Variable to store exam score (متغیر برای ذخیره نمره امتحان)
	char letter_grade{}; // Variable for letter grade (متغیر برای نمره حروفی)

	// Prompt user for score (درخواست نمره از کاربر)
	std::cout << "Enter your score on the exam (0-100): ";
	std::cin >> score;

	// Check if score is within valid range (بررسی اینکه آیا نمره در محدوده معتبر است)
	if (score >= 0 && score <= 100) {
		// Determine letter grade using if-else if chain (تعیین نمره حروفی با زنجیره if-else if)
		if (score >= 90)
			letter_grade = 'A';
		else if (score >= 80)
			letter_grade = 'B';
		else if (score >= 70)
			letter_grade = 'C';
		else if (score >= 60)
			letter_grade = 'D';
		else
			letter_grade = 'F';

		// Display results (نمایش نتایج)
		std::cout << "Your grade is: " << letter_grade << std::endl;

		// Additional feedback based on grade (بازخورد اضافی بر اساس نمره)
		if (letter_grade == 'F')
			std::cout << "Sorry, you must repeat the class" << std::endl;
		else
			std::cout << "Congrats!" << std::endl;
	}
	else {
		// Handle invalid input (مدیریت ورودی نامعتبر)
		std::cout << "Sorry, " << score << " is not in range" << std::endl;
	}

	return 0;

}

/*
هدف: آشنایی با زنجیره‌های if-else if برای تصمیم‌گیری چند حالته.

نکته آموزشی:

زنجیره‌های if-else if برای تصمیم‌گیری‌های چند حالته استفاده می‌شوند.
شرط‌ها از بالا به پایین بررسی می‌شوند و اولین شرط درست اجرا می‌شود.
همیشه یک بلوک else برای مدیریت موارد نامعتبر اضافه کنید.
برای خوانایی بهتر، هر شرط را در یک خط جداگانه بنویسید.
*/