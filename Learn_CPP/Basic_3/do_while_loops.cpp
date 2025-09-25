#include <iostream> // Required for I/O (ضروری برای ورودی/خروجی)

int main() {

	char selection{}; // Variable to store user selection (متغیر برای ذخیره انتخاب کاربر)

	// do-while loop: executes at least once (حلقه do-while: حداقل یک بار اجرا می‌شود)
	do {
		// Display menu (نمایش منو)
		std::cout << "\n---------------------" << std::endl;
		std::cout << "1. Do this" << std::endl;
		std::cout << "2. Do that" << std::endl;
		std::cout << "3. Do something else" << std::endl;
		std::cout << "Q. Quit" << std::endl;
		std::cout << "\nEnter your selection: ";
		std::cin >> selection;

		// Process user selection (پردازش انتخاب کاربر)
		if (selection == '1')
			std::cout << "You chose 1 - doing this" << std::endl;
		else if (selection == '2')
			std::cout << "You chose 2 - doing that" << std::endl;
		else if (selection == '3')
			std::cout << "You chose 3 - doing something else" << std::endl;
		else if (selection == 'Q' || selection == 'q')
			std::cout << "Goodbye..." << std::endl;
		else
			std::cout << "Unknown option -- try again..." << std::endl;

	} while (selection != 'q' && selection != 'Q'); // Condition checked after execution (شرط پس از اجرا بررسی می‌شود)

	return 0;

}

/*
هدف: آشنایی با حلقه do-while که حداقل یک بار اجرا می‌شود.

نکته آموزشی:

حلقه do-while حداقل یک بار اجرا می‌شود، حتی اگر شرط در ابتدا نادرست باشد.
این حلقه برای منوهای کاربری ایده‌آل است چون کاربر باید حداقل یک بار منو را ببیند.
شرط حلقه در انتهای حلقه بررسی می‌شود (برخلاف while).
حتماً از || برای بررسی حروف بزرگ و کوچک استفاده کنید.
*/