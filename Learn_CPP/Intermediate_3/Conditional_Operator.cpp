// Ternary conditional operator (عملگر شرطی سه‌گانه)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int main() {

    int num1{}, num2{};

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Traditional if-else approach (روش سنتی if-else)
    if (num1 != num2) {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    }
    else {
        cout << "The numbers are the same" << endl;
    }

    // Alternative using ternary directly in output (استفاده مستقیم از سه‌گانه در خروجی)
    cout << num1 << " is " << ((num1 % 2 == 0) ? "even" : "odd") << endl;

    return 0;

}

/*
Ternary Operator (عملگر سه‌گانه):
Syntax: condition ? expression_if_true : expression_if_false

Returns a value based on condition 
(بر اساس شرط مقداری را برمی‌گرداند).

Comparison with If-Else (مقایسه با if-else):
Ternary is an expression 
(سه‌گانه یک عبارت است).

If-else is a statement 
(if-else یک دستور است).

Ternary can be used within other expressions 
(سه‌گانه می‌تواند در عبارات دیگر استفاده شود).

When to Use (چه زمانی استفاده کنیم):
Simple conditions with direct value returns 
(شرایط ساده با بازگشت مستقیم مقدار).

Avoid for complex logic 
(برای منطق پیچیده از آن استفاده نکنید).
*/