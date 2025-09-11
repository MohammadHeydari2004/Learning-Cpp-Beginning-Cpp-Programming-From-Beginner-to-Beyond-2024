// Introduction to arrays in C++ (مقدمه‌ای بر آرایه‌ها در سی‌پلاس‌پلاس)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    // Declare and initialize character array (تعریف و مقداردهی اولیه آرایه کاراکتر)
    char vowels[]{ 'a', 'e', 'i', 'o', 'u' };
    cout << "\nFirst vowel: " << vowels[0] << endl; // Index starts at 0 (ایندکس از 0 شروع می‌شود)
    cout << "Last vowel: " << vowels[4] << endl;

    // Declare and initialize double array (تعریف و مقداردهی اولیه آرایه اعشاری)
    double hi_temps[]{ 90.1, 89.8, 77.5, 81.6 };
    cout << "\nFirst high temperature: " << hi_temps[0] << endl;

    // Modify array element (تغییر مقدار عنصر آرایه)
    hi_temps[0] = 100.7;
    cout << "First temperature updated: " << hi_temps[0] << endl;

    // Working with integer arrays (کار با آرایه‌های صحیح)
    int test_scores[]{ 100, 90, 80, 70, 60 };

    // Display all elements (نمایش تمام عناصر)
    cout << "\nTest scores:" << endl;
    cout << "Index 0: " << test_scores[0] << endl;
    cout << "Index 1: " << test_scores[1] << endl;
    cout << "Index 2: " << test_scores[2] << endl;
    cout << "Index 3: " << test_scores[3] << endl;
    cout << "Index 4: " << test_scores[4] << endl;

    // Get user input for array (دریافت ورودی کاربر برای آرایه)
    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0] >> test_scores[1] >> test_scores[2] >> test_scores[3] >> test_scores[4];

    // Display updated array (نمایش آرایه به‌روزرسانی‌شده)
    cout << "\nUpdated scores:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Index " << i << ": " << test_scores[i] << endl;
    }

    // Array name is memory address (نام آرایه، آدرس حافظه است)
    cout << "\nArray memory address: " << test_scores << endl;

    return 0;

}

/*
Array Basics (اساسیات آرایه):
Fixed-size collection of same-type elements 
(مجموعه‌ای با اندازه ثابت از عناصر هم‌نوع).

Indexing starts at 0 
(ایندکس‌گذاری از 0 شروع می‌شود).

Declaration: type name[size] or type name[] {values} 
(تعریف: type name[size] یا type name[] {values}).

Critical Concepts (مفاهیم حیاتی):
No bounds checking: Accessing vowels[5] causes undefined behavior 
(عدم بررسی محدوده: دسترسی به vowels[5] رفتار تعریف‌نشده ایجاد می‌کند).

Memory address: Array name represents starting memory location
(آدرس حافظه: نام آرایه محل شروع در حافظه را نشان می‌دهد).
*/