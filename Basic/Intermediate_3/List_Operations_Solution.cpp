// Solution to list operations challenge (راه‌حل چالش عملیات لیست)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <vector>   // Required for vectors (ضروری برای استفاده از وکتورها)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    vector<int> numbers{};
    char selection{};

    do {
        // Display menu (نمایش منو)
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;

        // Process selection (پردازش انتخاب)
        if (selection == 'P' || selection == 'p') {
            if (numbers.empty())
                cout << "[] - the list is empty" << endl;
            else {
                cout << "[ ";
                for (auto num : numbers)
                    cout << num << " ";
                cout << "]" << endl;
            }
        }
        else if (selection == 'A' || selection == 'a') {
            int num_to_add{};
            cout << "Enter an integer to add: ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
        }
        else if (selection == 'M' || selection == 'm') {
            if (numbers.empty())
                cout << "Unable to calculate mean - no data" << endl;
            else {
                int total{};
                for (auto num : numbers)
                    total += num;
                cout << "The mean is: " << static_cast<double>(total) / numbers.size() << endl;
            }
        }
        else if (selection == 'S' || selection == 's') {
            if (numbers.empty())
                cout << "Unable to determine smallest - list is empty" << endl;
            else {
                int smallest = numbers.at(0);
                for (auto num : numbers)
                    if (num < smallest)
                        smallest = num;
                cout << "The smallest number is: " << smallest << endl;
            }
        }
        else if (selection == 'L' || selection == 'l') {
            if (numbers.empty())
                cout << "Unable to determine largest - list is empty" << endl;
            else {
                int largest = numbers.at(0);
                for (auto num : numbers)
                    if (num > largest)
                        largest = num;
                cout << "The largest number is: " << largest << endl;
            }
        }
        else if (selection == 'Q' || selection == 'q') {
            cout << "Goodbye" << endl;
        }
        else {
            cout << "Unknown selection, please try again" << endl;
        }
    } while (selection != 'q' && selection != 'Q');

    return 0;

}

/*
Complete Application (برنامه کامل):
Implements all challenge requirements 
(تمام الزامات چالش را پیاده‌سازی می‌کند).

Handles edge cases properly 
(موارد لبه را به درستی مدیریت می‌کند).

Key Techniques (تکنیک‌های کلیدی):
Vector for dynamic storage 
(وکتور برای ذخیره‌سازی پویا).

Range-based for loops for iteration
(حلقه‌های for مبتنی بر محدوده برای تکرار).

Do-while for menu system
(do-while برای سیستم منو).

Critical Details (جزئیات حیاتی):
Input validation 
(اعتبارسنجی ورودی).

Empty container checks
(بررسی ظرف‌های خالی).

Proper type casting for division 
(تبدیل نوع مناسب برای تقسیم).
*/