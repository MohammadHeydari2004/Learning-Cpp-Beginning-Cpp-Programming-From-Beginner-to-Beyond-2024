// Real-world if-else application (کاربرد واقعی if-else)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    int score{};
    cout << "Enter your score on the exam (0-100): ";
    cin >> score;
    char letter_grade{};

    if (score >= 0 && score <= 100) {
        // Grading scale (مقیاس نمره‌دهی)
        if (score >= 90)
            letter_grade = 'A';
        else if (score >= 80)
            letter_grade = 'B';
        else if (score >= 70)
            letter_grade = 'C';
        else if (score >= 60)
            letter_grade = 'D';
        else
            letter_grade = 'F';

        cout << "Your grade is: " << letter_grade << endl;
        if (letter_grade == 'F')
            cout << "Sorry, you must repeat the class" << endl;
        else
            cout << "Congrats!" << endl;
    }
    else {
        cout << "Sorry, " << score << " is not in range" << endl;
    }

    return 0;

}

/*
Nested If-Else (if-else تو در تو):
Multiple conditions checked in sequence
(چندین شرط به ترتیب بررسی می‌شوند).

First true condition executes, then exits 
(اولین شرط درست اجرا می‌شود، سپس خارج می‌شود).

Input Validation (اعتبارسنجی ورودی):
Outer if checks valid range 
(if خارجی محدوده معتبر را بررسی می‌کند).

Prevents invalid processing 
(از پردازش نامعتبر جلوگیری می‌کند).

Real-World Relevance (ارتباط با دنیای واقعی):
Grading systems
(سیستم‌های نمره‌دهی).

Tiered pricing/models
(مدل‌های قیمت‌گذاری سطحی).
*/