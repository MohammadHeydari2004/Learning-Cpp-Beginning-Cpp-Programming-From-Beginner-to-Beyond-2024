// Complex conditional application (کاربرد شرطی پیچیده)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <iomanip>  // For precision control (برای کنترل دقت)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    int length{}, width{}, height{};
    double base_cost{ 2.50 };

    // Constants for shipping rules (ثوابت برای قوانین ارسال)
    const int tier1_threshold{ 100 };  // volume in cubic inches (حجم بر حسب اینچ مکعب)
    const int tier2_threshold{ 500 };
    const int max_dimension{ 10 };     // maximum dimension in inches (حداکثر ابعاد بر حسب اینچ)

    double tier1_surcharge{ 0.10 };     // 10% extra (اضافه‌پرداخت 10%)
    double tier2_surcharge{ 0.25 };     // 25% extra (اضافه‌پرداخت 25%)

    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and height (inches): ";
    cin >> length >> width >> height;

    // Dimension validation (اعتبارسنجی ابعاد)
    if (length > max_dimension || width > max_dimension || height > max_dimension) {
        cout << "Sorry, package rejected - dimensions exceeded" << endl;
    }
    else {
        int package_volume = length * width * height;
        double package_cost = base_cost;

        // Tiered pricing logic (منطق قیمت‌گذاری سطحی)
        if (package_volume > tier2_threshold) {
            package_cost += package_cost * tier2_surcharge;
            cout << "Adding tier 2 surcharge" << endl;
        }
        else if (package_volume > tier1_threshold) {
            package_cost += package_cost * tier1_surcharge;
            cout << "Adding tier 1 surcharge" << endl;
        }

        cout << fixed << setprecision(2); // Display 2 decimal places (نمایش 2 رقم اعشار)
        cout << "Package volume: " << package_volume << " cubic inches" << endl;
        cout << "Shipping cost: $" << package_cost << endl;
    }

    return 0;

}

/*
Complex Conditionals (شرایط پیچیده):
Multiple validation checks 
(بررسی‌های اعتبارسنجی چندگانه).

Tiered business logic 
(منطق کسب‌وکار سطحی).

Calculation Flow (جریان محاسبه):
Validate input 
(اعتبارسنجی ورودی)

Calculate base values 
(محاسبه مقادیر پایه)

Apply conditional surcharges
(اعمال اضافه‌پرداخت‌های شرطی)

Real-World Complexity (پیچیدگی دنیای واقعی):
Business rules often have multiple conditions 
(قوانین کسب‌وکار اغلب شرایط چندگانه دارند).

Input validation is critical 
(اعتبارسنجی ورودی حیاتی است).
*/