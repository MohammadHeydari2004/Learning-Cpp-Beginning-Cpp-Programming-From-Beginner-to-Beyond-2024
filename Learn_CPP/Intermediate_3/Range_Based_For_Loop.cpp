// Range-based for loops (حلقه for مبتنی بر محدوده)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <vector>   // Required for vectors (ضروری برای استفاده از وکتورها)
#include <iomanip>  // For output formatting (برای فرمت‌بندی خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    // Basic array iteration (تکرار روی آرایه پایه)
    int scores[]{ 10, 20, 30 };
    for (auto score : scores)
        cout << score << endl;

    // Vector iteration (تکرار روی وکتور)
    vector<double> temperatures{ 87.9, 77.9, 80.0, 72.5 };
    double total{};

    for (auto temp : temperatures)
        total += temp;

    // Calculate average (محاسبه میانگین)
    if (!temperatures.empty()) {
        double average_temp = total / temperatures.size();
        cout << fixed << setprecision(1);
        cout << "Average temperature: " << average_temp << endl;
    }

    // Direct initialization (مقداردهی اولیه مستقیم)
    for (auto val : { 1, 2, 3, 4, 5 })
        cout << val << endl;

    // String processing (پردازش رشته)
    for (auto c : "This is a test")
        if (c != ' ')
            cout << c;
    cout << endl;

    // String formatting (فرمت‌بندی رشته)
    for (auto c : "This is a test")
        cout << (c == ' ' ? '\t' : c);

    return 0;

}

/*
Range-Based For Syntax (سینتکس for مبتنی بر محدوده):
for (element_declaration : container) { code }

Automatically iterates through all elements
(به طور خودکار از تمام عناصر عبور می‌کند).

Key Advantages(مزایای کلیدی) :
Simpler syntax for container iteration
(سینتکس ساده‌تر برای تکرار روی ظرف‌ها).

No index management required
(نیازی به مدیریت ایندکس نیست).

Less error - prone
(کمتر مستعد خطا).

Auto Keyword(کلیدواژه auto) :
Automatically deduces variable type
(به طور خودکار نوع متغیر را استنتاج می‌کند).

Reduces typing and potential errors
(تایپ و خطاهای احتمالی را کاهش می‌دهد).
*/