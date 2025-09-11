// Vectors: Dynamic arrays in C++ (وکتورها: آرایه‌های پویا در سی‌پلاس‌پلاس)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <vector>   // Required for vectors (ضروری برای استفاده از وکتورها)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    // Vector initialization (مقداردهی اولیه وکتور)
    vector<char> vowels{ 'a', 'e', 'i', 'o', 'u' };
    cout << "First vowel: " << vowels[0] << endl;
    cout << "Last vowel: " << vowels[4] << endl;

    // Integer vector examples (مثال‌های وکتور صحیح)
    vector<int> test_scores{ 100, 98, 89 };

    // Access methods comparison (مقایسه روش‌های دسترسی)
    cout << "\nArray syntax:" << endl;
    cout << test_scores[0] << endl; // No bounds checking (عدم بررسی محدوده)

    cout << "\nVector syntax (safer):" << endl;
    cout << test_scores.at(0) << endl; // Bounds-checked access (دسترسی با بررسی محدوده)

    // Size information (اطلاعات اندازه)
    cout << "\nVector size: " << test_scores.size() << " elements" << endl;

    // User input for vectors (ورودی کاربر برای وکتورها)
    cout << "\nEnter 3 test scores: ";
    cin >> test_scores.at(0) >> test_scores.at(1) >> test_scores.at(2);

    // Dynamic resizing with push_back (تغییر اندازه پویا با push_back)
    int score_to_add;
    cout << "\nAdd a score: ";
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    // Display updated vector (نمایش وکتور به‌روزرسانی‌شده)
    cout << "\nUpdated scores:" << endl;
    for (int i = 0; i < test_scores.size(); i++) {
        cout << "Score " << i << ": " << test_scores.at(i) << endl;
    }

    // 2D vector example (مثال وکتور دو‌بعدی)
    vector<vector<int>> movie_ratings{
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };

    cout << "\nReviewer #1 ratings:" << endl;
    cout << movie_ratings.at(0).at(0) << " "
        << movie_ratings.at(0).at(1) << " "
        << movie_ratings.at(0).at(2) << " "
        << movie_ratings.at(0).at(3) << endl;

    return 0;

}

/*
Vectors vs Arrays (تفاوت وکتورها و آرایه‌ها):
Dynamic size: Vectors can grow/shrink at runtime 
(اندازه پویا: وکتورها در زمان اجرا می‌توانند بزرگ/کوچک شوند).

Bounds checking: .at() throws error on invalid access 
(بررسی محدوده: .at() در دسترسی نامعتبر خطا می‌دهد).

Memory management: Automatic 
(مدیریت حافظه خودکار).

Essential Methods (روش‌های ضروری):
push_back(): Add element to end 
(افزودن عنصر به انتها).

size(): Get current element count 
(دریافت تعداد عناصر فعلی).

.at(): Safe element access 
(دسترسی ایمن به عناصر).
*/