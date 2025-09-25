#include <iostream> // Required for I/O (ضروری برای ورودی/خروجی)
#include <vector>   // Required for vectors (ضروری برای استفاده از وکتورها)

int main() {

	std::vector<int> numbers{}; // Vector to store numbers (وکتور برای ذخیره اعداد)
	char selection{}; // Variable for user selection (متغیر برای انتخاب کاربر)

	// Main program loop (حلقه اصلی برنامه)
	do {
		// Display menu (نمایش منو)
		std::cout << "\nP - Print numbers" << std::endl;
		std::cout << "A - Add a number" << std::endl;
		std::cout << "M - Display mean of the numbers" << std::endl;
		std::cout << "S - Display the smallest number" << std::endl;
		std::cout << "L - Display the largest number" << std::endl;
		std::cout << "Q - Quit" << std::endl;
		std::cout << "\nEnter your choice: ";
		std::cin >> selection;

		// Process user selection (پردازش انتخاب کاربر)
		if (selection == 'P' || selection == 'p') {
			// Print all numbers (چاپ تمام اعداد)
			if (numbers.size() == 0)
				std::cout << "[] - the list is empty" << std::endl;
			else {
				std::cout << "[ ";
				for (auto num : numbers)
					std::cout << num << " ";
				std::cout << "]" << std::endl;
			}
		}
		else if (selection == 'A' || selection == 'a') {
			// Add a number (افزودن یک عدد)
			int num_to_add{};
			std::cout << "Enter an integer to add to the list: ";
			std::cin >> num_to_add;
			numbers.push_back(num_to_add);
			std::cout << num_to_add << " added" << std::endl;
		}
		else if (selection == 'M' || selection == 'm') {
			// Calculate and display mean (محاسبه و نمایش میانگین)
			if (numbers.size() == 0)
				std::cout << "Unable to calculate mean - no data" << std::endl;
			else {
				int total{};
				for (auto num : numbers)
					total += num;
				std::cout << "The mean is: " << static_cast<double>(total) / numbers.size() << std::endl;
			}
		}
		else if (selection == 'S' || selection == 's') {
			// Find and display smallest number (یافتن و نمایش کوچک‌ترین عدد)
			if (numbers.size() == 0)
				std::cout << "Unable to determine the smallest - list is empty" << std::endl;
			else {
				int smallest = numbers.at(0);
				for (auto num : numbers)
					if (num < smallest)
						smallest = num;
				std::cout << "The smallest number is: " << smallest << std::endl;
			}
		}
		else if (selection == 'L' || selection == 'l') {
			// Find and display largest number (یافتن و نمایش بزرگ‌ترین عدد)
			if (numbers.size() == 0)
				std::cout << "Unable to determine largest - list is empty" << std::endl;
			else {
				int largest = numbers.at(0);
				for (auto num : numbers)
					if (num > largest)
						largest = num;
				std::cout << "The largest number is: " << largest << std::endl;
			}
		}
		else if (selection == 'Q' || selection == 'q') {
			// Exit program (خروج از برنامه)
			std::cout << "Goodbye" << std::endl;
		}
		else {
			// Handle invalid selection (مدیریت انتخاب نامعتبر)
			std::cout << "Unknown selection, please try again" << std::endl;
		}
	} while (selection != 'q' && selection != 'Q'); // Continue until user quits (ادامه تا زمانی که کاربر خارج نشود)

	return 0;

}

/*
هدف: راه‌حل کامل چالش عملیات روی لیست.

نکته آموزشی:

این برنامه ترکیبی از تمام مفاهیم یادگرفته‌شده است (وکتورها، حلقه‌ها، دستورات شرطی).
برای محاسبه میانگین، از static_cast<double> برای تبدیل نوع استفاده شده است.
برای یافتن کوچک‌ترین/بزرگ‌ترین عدد، ابتدا فرض می‌کنیم اولین عنصر کوچک‌ترین/بزرگ‌ترین است.
این برنامه نمونه‌ای از کدنویسی حرفه‌ای است که تمام موارد لبه (Edge Cases) را مدیریت می‌کند.
*/