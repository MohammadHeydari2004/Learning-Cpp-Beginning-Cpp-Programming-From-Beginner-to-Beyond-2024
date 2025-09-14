// Variable scope and lifetime (دامنه و عمر متغیرها)
#include <iostream> // Input/output library (کتابخانه ورودی/خروجی)
using namespace std; // Avoids "std::" prefix (جلوگیری از پیشوند "std::")

int num{ 300 }; // Global variable (متغیر سراسری)

void global_example() {

	cout << "\nGlobal num: " << num << " (start)" << endl;
	num *= 2;
	cout << "Global num: " << num << " (end)" << endl;

}

void local_example(int x) {

	int num{ 1000 }; // Local to this function (محلی برای این تابع)
	cout << "\nLocal num: " << num << " (start)" << endl;
	num = x;
	cout << "Local num: " << num << " (end)" << endl;

}

void static_local_example() {

	static int num{ 5000 }; // Static local variable (متغیر محلی ایستا)
	cout << "\nStatic local num: " << num << " (start)" << endl;
	num += 1000;
	cout << "Static local num: " << num << " (end)" << endl;

}

int main() {

	int num{ 100 }; // Local to main (محلی برای main)
	int num1{ 500 }; // Local to main (محلی برای main)

	cout << "Main local num: " << num << endl;

	{ // New scope block (بلوک دامنه جدید)
		int num{ 200 }; // Local to this block (محلی برای این بلوک)
		cout << "Inner block num: " << num << endl;
		cout << "Inner block can see num1: " << num1 << endl;
	}

	cout << "Main local num (after block): " << num << endl;

	local_example(10);
	local_example(20);

	global_example();
	global_example();

	static_local_example();
	static_local_example();
	static_local_example();

	return 0;

}

/*
Scope Types (انواع دامنه):
Global: Accessible everywhere
(در همه جا قابل دسترسی).

Local: Limited to block/function
(محدود به بلوک/تابع).

Block: Limited to specific code block
(محدود به بلوک کد خاص).

Variable Lifetime (عمر متغیر):
Automatic: Created when block entered, destroyed when exited
(خودکار: هنگام ورود به بلوک ایجاد، هنگام خروج نابود).

Static: Created once, persists for entire program
(ایستا: یک بار ایجاد، برای کل برنامه باقی می‌ماند).

Global: Exists for entire program duration
(سراسری: برای کل مدت برنامه وجود دارد).

Name Hiding (سایه‌اندازی نام):
Local variables hide global variables with same name
(متغیرهای محلی متغیرهای سراسری با نام یکسان را مخفی می‌کنند).

Inner block variables hide outer block variables
(متغیرهای بلوک داخلی متغیرهای بلوک خارجی را مخفی می‌کنند).
*/