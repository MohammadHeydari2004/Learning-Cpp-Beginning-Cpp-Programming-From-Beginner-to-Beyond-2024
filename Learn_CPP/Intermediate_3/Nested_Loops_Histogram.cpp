// Nested loops for histogram (حلقه‌های تو در تو برای هیستوگرام)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <vector>   // Required for vectors (ضروری برای استفاده از وکتورها)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    int num_items{};

    cout << "How many data items? ";
    cin >> num_items;

    vector<int> data{};

    // Collect data (جمع‌آوری داده‌ها)
    for (int i{ 1 }; i <= num_items; ++i) {
        int data_item{};
        cout << "Enter data item " << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
    }

    // Display histogram (نمایش هیستوگرام)
    cout << "\nHistogram:" << endl;
    for (auto val : data) {
        for (int i{ 1 }; i <= val; ++i) {
            if (i % 5 == 0)
                cout << "*";
            else
                cout << "-";
        }
        cout << endl;
    }

    return 0;

}

/*
p: Processes each data point 
(حلقه خارجی: پردازش هر نقطه داده).

Inner loop: Generates visualization for one point
(حلقه داخلی: تولید تصویر برای یک نقطه).

Histogram Visualization (تصویرسازی هیستوگرام):
Each data point represented by bar 
(هر نقطه داده با یک میله نمایش داده می‌شود).

Markers every 5 units for readability
(نشانگرها هر 5 واحد برای خوانایی).

Data Collection (جمع‌آوری داده):
Uses vector for dynamic storage 
(از وکتور برای ذخیره‌سازی پویا استفاده می‌کند).

User-defined data size
(اندازه داده تعریف‌شده توسط کاربر).
*/