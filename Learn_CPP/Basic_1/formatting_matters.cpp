#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)

int main() { // Main function (تابع اصلی)

	int favorite_number;   // Variable declaration (تعریف متغیر)

	// BAD PRACTICE: Multiple statements in one line (عملکرد نامناسب: چندین دستور در یک خط)
	std::cout << "Enter your favorite number between 1 and 100: "; std::cin >> favorite_number;

	// BAD PRACTICE: No indentation (عملکرد نامناسب: عدم تورفتگی)
	std::cout << "Amazing!! That's my favorite number too!" << std::endl;
	std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;

	return 0; // Success code (کد موفقیت)

}

/*
هدف: درک اهمیت فرمت‌بندی کد و خوانایی.

نکته آموزشی:

فرمت‌بندی صحیح کد:
هر دستور در یک خط جداگانه باشد.
تورفتگی (Indentation) برای بلوک‌های کد استفاده شود.
فاصله‌گذاری منطقی بین عملگرها (<<, >>) رعایت شود.
چرا مهم است؟
کدهای خوانا را راحت‌تر دیباگ می‌کنید.
تیم‌های توسعه‌دهنده با کدهای استاندارد کارآمدتر هستند.
*/

/*
نکته طلایی:
✨ همیشه فرض کنید کد شما را یک انسان خسته در ۳ صبح می‌خواند!
کامنت‌نویسی و فرمت‌بندی صحیح، احترام به خودتان و دیگران است.
✅ این مجموعه دقیقاً برای کسی طراحی شده که هیچ‌چیز از سی‌پلاس‌پلاس نمی‌داند و نیاز به آموزش صفر تا صد دارد!
*/