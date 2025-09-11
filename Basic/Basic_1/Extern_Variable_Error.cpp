#include <iostream> // Input/output stream library (کتابخانه جریان ورودی/خروجی)

extern int x; // Declare external variable (تعریف متغیر خارجی)

int main() {

	std::cout << "Hello world" << std::endl; // Print message (چاپ پیام)

	std::cout << x; // Use external variable (استفاده از متغیر خارجی)

	return 0; // This causes a linker error (این خطا لینکر ایجاد می‌کند)

}

/*
extern int x;  : Declares a variable defined elsewhere
(اعلام متغیر تعریف‌شده در جای دیگر).

No actual definition of x exists
(تعریف واقعی x وجود ندارد).

Results in a linker error
(منجر به خطای لینکر می‌شود).
*/