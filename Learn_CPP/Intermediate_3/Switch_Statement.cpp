// Switch statement for discrete values (دستور switch برای مقادیر گسسته)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    char letter_grade{};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch (letter_grade) {
    case 'a':
    case 'A':
        cout << "You need 90 or above, study hard!" << endl;
        break;
    case 'b':
    case 'B':
        cout << "You need 80-89 for a B, go study!" << endl;
        break;
    case 'c':
    case 'C':
        cout << "You need 70-79 for an average grade" << endl;
        break;
    case 'd':
    case 'D':
        cout << "Hmm, you should strive for a better grade. All you need is 60-69" << endl;
        break;
    case 'f':
    case 'F':
    {
        char confirm{};
        cout << "Are you sure (Y/N)? ";
        cin >> confirm;
        if (confirm == 'y' || confirm == 'Y')
            cout << "OK, I guess you didn't study..." << endl;
        else if (confirm == 'n' || confirm == 'N')
            cout << "Good - go study!" << endl;
        else
            cout << "Illegal choice" << endl;
        break;
    }
    default:
        cout << "Sorry, not a valid grade" << endl;
    }

    return 0;

}

/*
Switch Structure (ساختار switch):
switch (expression) 
{ 
case value: 
code break;

default:  code  
}

Evaluates expression once, then jumps to matching case 
(یک بار عبارت را ارزیابی می‌کند).

Key Components(اجزای کلیدی):
break : Exits switch statement
(از دستور switch خارج می‌شود).

default: Handles unmatched cases
(شرایط نامطابق را مدیریت می‌کند).

Multiple cases can share code
(چندین case می‌توانند کد را به اشتراک بگذارند).

When to Use(چه زمانی استفاده کنیم) :
Discrete values
(مقادیر گسسته).

Multiple exact comparisons
(مقایسات دقیق چندگانه).

More readable than long if - else chains
(خواناتر از زنجیره‌های طولانی if - else).
*/