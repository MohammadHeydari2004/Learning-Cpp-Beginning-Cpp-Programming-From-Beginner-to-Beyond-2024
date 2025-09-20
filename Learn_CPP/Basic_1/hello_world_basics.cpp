#include <iostream> // Includes input/output stream library (درگیر کردن کتابخانه ورودی/خروجی)

int main() { // Entry point of the program (جایی که اجرای برنامه شروع می‌شود)

	// Prints "Hello world!" to the console (چاپ متن "Hello world!" در خروجی)
	std::cout << "Hello world!";

	// std::endl adds a newline and flushes the buffer (std::endl یک خط جدید اضافه کرده و بافر را پاک می‌کند)
	
	// Uncomment below to see different output styles (کامنت را بردارید تا سبک‌های خروجی متفاوت را ببینید):
	// std::cout << "Hello" << " world!" << std::endl; 
	// std::cout << "Hello\nOut\nThere\n"; 

	return 0; // Indicates successful execution (بازگرداندن 0 به معنای اجرای موفقیت‌آمیز)

}

/*
هدف: آشنایی با اولین برنامه سی‌پلاس‌پلاس و خروجی ساده.

نکته آموزشی:

std::cout برای چاپ متن استفاده می‌شود.
<< نماد "جابجایی به چپ" است که داده‌ها را به خروجی ارسال می‌کند.
std::endl مانند فشار دادن Enter عمل می‌کند و خط بعدی را شروع می‌کند.
*/