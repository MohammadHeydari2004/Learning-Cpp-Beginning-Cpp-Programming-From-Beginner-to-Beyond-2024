#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)

int main() {
	int favorite_number;   // Variable declaration (تعریف متغیر)

	std::cout << "Enter your favorite number between 1 and 100: ";

	std::cin >> favorite_number;       std::cout << "Amazing!! That's my favorite number too!" << std::endl;
	// Poor formatting: Multiple statements on one line (فرمت‌بندی ضعیف: چند دستور در یک خط)

	std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;

	return 0;   // Success exit (خروج موفق)
}

/*
Key Takeaway (نکته اصلی):
Code must be readable for humans first
(کد باید ابتدا برای انسان‌ها قابل خواندن باشد).

Formatting Issues (مشکلات فرمت‌بندی):
Missing line breaks between logic blocks
(عدم شکستن خط بین بلوک‌های منطقی).

Overly long lines reduce readability
(خطوط طولانی کاهش خوانایی).

Why Formatting Matters (اهمیت فرمت‌بندی):
Critical for debugging and collaboration
(برای اشکال‌زدایی و کار تیمی حیاتی است).

Industry standards require consistent indentation
(استانداردهای صنعت نیازمند تورفتگی یکنواخت هستند).

Best Practices (بهترین روش‌ها):
One statement per line
(یک دستور در هر خط).

Consistent indentation
(تورفتگی یکنواخت).

Logical grouping with blank lines
(گروه‌بندی منطقی با خطوط خالی).
*/