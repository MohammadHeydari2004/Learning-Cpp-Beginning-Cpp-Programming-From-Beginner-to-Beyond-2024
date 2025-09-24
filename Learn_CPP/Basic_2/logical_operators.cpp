#include <ios>
#include <iostream> // I/O operations (عملیات ورودی/خروجی)

int main() {

	int num{};
	const int lower{ 10 }; // Lower boundary (مرز پایین)
	const int upper{ 20 }; // Upper boundary (مرز بالا)

	// Display boolean values as true/false (نمایش مقادیر بولین به‌صورت true/false)
	std::cout << std::boolalpha;

	// Check if number is between lower and upper (بررسی اینکه آیا عدد بین مرزها است)
	std::cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
	std::cin >> num;

	bool within_bounds{ false };
	within_bounds = (num > lower && num < upper); // AND operator (عملگر AND)
	std::cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << std::endl;

	// Check if number is outside bounds (بررسی اینکه آیا عدد خارج از مرزها است)
	std::cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
	std::cin >> num;

	bool outside_bounds{ false };
	outside_bounds = (num < lower || num > upper); // OR operator (عملگر OR)
	std::cout << num << " is outside " << lower << " and " << upper << " : " << outside_bounds << std::endl;

	// Check if number is exactly on boundary (بررسی اینکه آیا عدد دقیقاً روی مرز است)
	std::cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
	std::cin >> num;

	bool on_bounds{ false };
	on_bounds = (num == lower || num == upper); // OR with equality (OR با تساوی)
	std::cout << num << " is on one of the bounds which are " << lower << " and " << upper << " : " << on_bounds << std::endl;

	// Practical example: Do you need a coat? (مثال عملی: آیا به پالتو نیاز دارید؟)
	bool wear_coat{ false };
	double temperature{};
	int wind_speed{};

	const int wind_speed_for_coat{ 25 };       // Wind speed threshold (آستانه سرعت باد)
	const double temperature_for_coat{ 45 };   // Temperature threshold (آستانه دما)

	std::cout << "\nEnter the current temperature in (F): ";
	std::cin >> temperature;
	std::cout << "Enter windspeed in (mph): ";
	std::cin >> wind_speed;

	// Need coat if EITHER wind is too high OR temperature is too low (به پالتو نیاز است اگر یا باد زیاد است یا دما پایین)
	wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
	std::cout << "Do you need to wear a coat using OR? " << wear_coat << std::endl;

	// Need coat only if BOTH conditions are true (فقط اگر هر دو شرط برقرار باشد به پالتو نیاز است)
	wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
	std::cout << "Do you need to wear a coat using AND? " << wear_coat << std::endl;

	return 0;

}

/*
هدف: آشنایی با عملگرهای منطقی (&&, ||, !) و کاربردهای آن‌ها.

&& (AND): فقط اگر همه شرط‌ها درست باشند، نتیجه درست است.
|| (OR): اگر حداقل یکی از شرط‌ها درست باشد، نتیجه درست است.
! (NOT): مقدار بولین را معکوس می‌کند (!true می‌شود false).
اولویت عملگرها: ! > && > || (همیشه از پرانتز استفاده کنید تا اولویت واضح باشد).
*/