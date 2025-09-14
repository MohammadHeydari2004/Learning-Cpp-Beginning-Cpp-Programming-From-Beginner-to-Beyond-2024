// Solution: Modularized list operations (راه‌حل: عملیات لیست ماژولار‌شده)
#include <cctype>   // For toupper (برای toupper)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
#include <vector>   // Required for vectors (ضروری برای استفاده از وکتورها)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

// Function prototypes (پیش‌نمونه‌های تابع)
void display_menu();
char get_selection();
void handle_display(const vector<int>& v);
void handle_add(vector<int>& v);
void handle_mean(const vector<int>& v);
void handle_smallest(const vector<int>& v);
void handle_largest(const vector<int>& v);
void handle_quit();
void handle_unknown();
void display_list(const vector<int>& v);
double calculate_mean(const vector<int>& v);
int get_smallest(const vector<int>& v);
int get_largest(const vector<int>& v);

int main() {
	vector<int> numbers; // Our list of numbers (لیست اعداد ما)
	char selection{};

	do {
		display_menu();
		selection = get_selection();
		switch (selection) {
		case 'P': handle_display(numbers); break;
		case 'A': handle_add(numbers); break;
		case 'M': handle_mean(numbers); break;
		case 'S': handle_smallest(numbers); break;
		case 'L': handle_largest(numbers); break;
		case 'Q': handle_quit(); break;
		default: handle_unknown();
		}
	} while (selection != 'Q');

	return 0;
}

// Function implementations (پیاده‌سازی توابع)
void display_menu() {
	cout << "\nP - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "M - Display mean" << endl;
	cout << "S - Display smallest" << endl;
	cout << "L - Display largest" << endl;
	cout << "Q - Quit" << endl;
	cout << "\nEnter your choice: ";
}

char get_selection() {
	char selection{};
	cin >> selection;
	return toupper(selection);
}

void handle_display(const vector<int>& v) {
	if (v.empty())
		cout << "[] - the list is empty" << endl;
	else
		display_list(v);
}

void handle_add(vector<int>& v) {
	int num_to_add{};
	cout << "Enter an integer to add: ";
	cin >> num_to_add;
	v.push_back(num_to_add);
	cout << num_to_add << " added" << endl;
}

void handle_mean(const vector<int>& v) {
	if (v.empty())
		cout << "Unable to calculate mean - list is empty" << endl;
	else
		cout << "The mean is " << calculate_mean(v) << endl;
}

void handle_smallest(const vector<int>& v) {
	if (v.empty())
		cout << "Unable to determine smallest - list is empty" << endl;
	else
		cout << "The smallest element is " << get_smallest(v) << endl;
}

void handle_largest(const vector<int>& v) {
	if (v.empty())
		cout << "Unable to determine largest - list is empty" << endl;
	else
		cout << "The largest element is " << get_largest(v) << endl;
}

void handle_quit() {
	cout << "Goodbye" << endl;
}

void handle_unknown() {
	cout << "Unknown selection - try again" << endl;
}

void display_list(const vector<int>& v) {
	cout << "[ ";
	for (auto num : v)
		cout << num << " ";
	cout << "]" << endl;
}

double calculate_mean(const vector<int>& v) {
	int total{};
	for (auto num : v)
		total += num;
	return static_cast<double>(total) / v.size();
}

int get_largest(const vector<int>& v) {
	int largest = v.at(0);
	for (auto num : v)
		if (num > largest)
			largest = num;
	return largest;
}

int get_smallest(const vector<int>& v) {
	int smallest = v.at(0);
	for (auto num : v)
		if (num < smallest)
			smallest = num;
	return smallest;
}

/*
Modularization Principles (اصول ماژولار‌سازی):
Single Responsibility Principle
(اصل تک‌مسئولیتی).

Separation of concerns
(جداسازی نگرانی‌ها).

Reusable components
(اجزای قابل استفاده مجدد).

Key Techniques (تکنیک‌های کلیدی):
Proper use of const references
(استفاده مناسب از ارجاع‌های ثابت).

Clear function naming
(نام‌گذاری واضح توابع).

Well-organized code structure
(ساختار کد سازمان‌یافته).
*/