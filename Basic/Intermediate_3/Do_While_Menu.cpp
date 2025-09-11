// Do-while loop for menu systems (حلقه do-while برای سیستم‌های منو)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    char selection{};

    do {
        // Display menu (نمایش منو)
        cout << "\n---------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        // Process selection (پردازش انتخاب)
        if (selection == '1')
            cout << "You chose 1 - doing this" << endl;
        else if (selection == '2')
            cout << "You chose 2 - doing that" << endl;
        else if (selection == '3')
            cout << "You chose 3 - doing something else" << endl;
        else if (selection == 'Q' || selection == 'q')
            cout << "Goodbye..." << endl;
        else
            cout << "Unknown option -- try again..." << endl;

    } while (selection != 'q' && selection != 'Q');

    return 0;

}

/*
Do - While Structure(ساختار do - while) :
do {  code  } while (condition);

Condition checked AFTER each iteration
(شرط پس از هر تکرار بررسی می‌شود).

Always executes at least once
(همیشه حداقل یک بار اجرا می‌شود).

Menu System Application(کاربرد سیستم منو) :
Perfect for interactive menus
(برای منوهای تعاملی عالی است).

Always shows menu at least once
(همیشه منو را حداقل یک بار نمایش می‌دهد).

Key Difference from While(تفاوت کلیدی با while) :
Guaranteed first execution
(اجرای اولیه تضمین‌شده).

Condition evaluation timing
(زمان ارزیابی شرط).
*/