// Solution to vector challenge with explanation (راه‌حل چالش وکتور با توضیح)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <vector>   // Required for vectors (ضروری برای استفاده از وکتورها)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    // Create vectors (ایجاد وکتورها)
    vector<int> vector1;
    vector<int> vector2;

    // Initialize vectors (مقداردهی اولیه وکتورها)
    vector1.push_back(10);
    vector1.push_back(20);
    vector2.push_back(100);
    vector2.push_back(200);

    // Display initial state (نمایش حالت اولیه)
    cout << "\nInitial vectors:" << endl;
    cout << "vector1: [" << vector1.at(0) << ", " << vector1.at(1) << "]" << endl;
    cout << "vector2: [" << vector2.at(0) << ", " << vector2.at(1) << "]" << endl;

    // Create and populate 2D vector (ایجاد و پر کردن وکتور دو‌بعدی)
    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    // Display 2D vector (نمایش وکتور دو‌بعدی)
    cout << "\nvector_2d initial state:" << endl;
    cout << "[" << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << "]" << endl;
    cout << "[" << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << "]" << endl;

    // Modify original vector (تغییر وکتور اصلی)
    vector1.at(0) = 1000;

    // Display results (نمایش نتایج)
    cout << "\nAfter modifying vector1[0] = 1000:" << endl;
    cout << "vector1: [" << vector1.at(0) << ", " << vector1.at(1) << "]" << endl;

    cout << "\nvector_2d unchanged:" << endl;
    cout << "[" << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << "]" << endl;
    cout << "[" << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << "]" << endl;

    // Explanation (توضیح)
    cout << "\nKey insight:" << endl;
    cout << "Vectors are copied by value when added to another vector" << endl;
    cout << "Original and copy are independent entities" << endl;
    cout << "(وکتورها هنگام افزودن به وکتور دیگر، مقدارشان کپی می‌شود" << endl;
    cout << "اصل و کپی موجودیت‌های مستقلی هستند)" << endl;

    return 0;

}

/*
Critical Insight (بینش حیاتی):
Value semantics: Vectors use copy semantics when added to containers
(معنای مقدار: وکتورها هنگام افزودن به ظرف‌ها از معنای کپی استفاده می‌کنند).

No references: Unlike some languages, C++ vectors don't store references by default 
(بدون ارجاع: برخلاف برخی زبان‌ها، وکتورهای سی‌پلاس‌پلاس به‌طور پیش‌فرض ارجاع ذخیره نمی‌کنند).

Memory Implications (پیامدهای حافظه):
Copies consume additional memory
(کپی‌ها حافظه اضافی مصرف می‌کنند).

For large data, consider pointers or references 
(برای داده‌های بزرگ، از اشاره‌گرها یا ارجاع‌ها استفاده کنید).
*/