#include <iostream> // Required for I/O (ضروری برای ورودی/خروجی)

int main() {

	char letter_grade{}; // Variable for letter grade (متغیر برای نمره حروفی)

	// Prompt user for expected grade (درخواست نمره مورد انتظار از کاربر)
	std::cout << "Enter the letter grade you expect on the exam: ";
	std::cin >> letter_grade;

	// Switch statement for grade evaluation (دستور switch برای ارزیابی نمره)
	switch (letter_grade) {
	case 'a':
	case 'A':
		std::cout << "You need a 90 or above, study hard!" << std::endl;
		break; // Exit switch statement (خروج از دستور switch)
	case 'b':
	case 'B':
		std::cout << "You need 80-89 for a B, go study!" << std::endl;
		break;
	case 'c':
	case 'C':
		std::cout << "You need 70-79 for an average grade" << std::endl;
		break;
	case 'd':
	case 'D':
		std::cout << "Hmm, you should strive for a better grade. All you need is 60-69" << std::endl;
		break;
	case 'f':
	case 'F':
	{
		// Special handling for failing grade (مدیریت خاص برای نمره F)
		char confirm{};
		std::cout << "Are you sure (Y/N)? ";
		std::cin >> confirm;
		if (confirm == 'y' || confirm == 'Y')
			std::cout << "OK, I guess you didn't study..." << std::endl;
		else if (confirm == 'n' || confirm == 'N')
			std::cout << "Good - go study!" << std::endl;
		else
			std::cout << "Illegal choice" << std::endl;
		break;
	}
	default:
		// Handle invalid input (مدیریت ورودی نامعتبر)
		std::cout << "Sorry, not a valid grade" << std::endl;
	}

	return 0;

}

/*
هدف: آشنایی با دستور switch به عنوان جایگزینی برای زنجیره‌های طولانی if-else if.

نکته آموزشی:

دستور switch فقط با انواع اعداد صحیح و کاراکتر کار می‌کند (نه اعشاری یا رشته).
از break برای خروج از switch بعد از هر case استفاده کنید تا از fall-through جلوگیری شود.
default برای مدیریت موارد نامعتبر ضروری است.
برای حروف بزرگ و کوچک، از چندین case پشت سر هم استفاده کنید.
*/