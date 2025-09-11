// Logical operations for decision making (عملیات منطقی برای تصمیم‌گیری)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    int num;
    const int lower{ 10 };
    const int upper{ 20 };
    cout << boolalpha; // Display true/false (نمایش true/false)

    // AND operator demonstration (نشان‌دادن عملگر AND)
    cout << "Enter number between " << lower << " and " << upper << ": ";
    cin >> num;
    bool within_bounds{ num > lower && num < upper };
    cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;

    // OR operator demonstration (نشان‌دادن عملگر OR)
    cout << "\nEnter number outside " << lower << " and " << upper << ": ";
    cin >> num;
    bool outside_bounds{ num < lower || num > upper };
    cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;

    // Practical application: Weather decision (کاربرد عملی: تصمیم‌گیری آب‌وهوا)
    double temperature;
    int wind_speed;
    const int wind_threshold{ 25 };
    const double temp_threshold{ 45.0 };

    cout << "\nEnter temperature (F): ";
    cin >> temperature;
    cout << "Enter wind speed (mph): ";
    cin >> wind_speed;

    // OR condition: Either condition true (شرایط OR: یکی از شرایط درست باشد)
    bool wear_coat_or{ temperature < temp_threshold || wind_speed > wind_threshold };
    cout << "Wear coat (OR): " << wear_coat_or << endl;

    // AND condition: Both conditions true (شرایط AND: هر دو شرط درست باشد)
    bool wear_coat_and{ temperature < temp_threshold && wind_speed > wind_threshold };
    cout << "Wear coat (AND): " << wear_coat_and << endl;

    return 0;

}

/*
Logical Operators (عملگرهای منطقی):
&& (AND): Both conditions must be true
(هر دو شرط باید درست باشند).

|| (OR): At least one condition true 
(حداقل یک شرط درست باشد).

Short-Circuit Evaluation (ارزیابی کوتاه‌مدار):
false && ... skips second check 
(در false && ... بررسی دوم انجام نمی‌شود).

true || ... skips second check 
(در true || ... بررسی دوم انجام نمی‌شود).

Practical Usage (کاربرد عملی):
Range checks 
(بررسی محدوده).

Combined conditions for decisions 
(شرایط ترکیبی برای تصمیم‌گیری).
*/