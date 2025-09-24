#include <ios>
#include <iostream>
#include <vector>

using namespace std;

int main() {

	double My_double_array[]{ 0.25,0.263,45.6,20.9 };

	cout << "My_double_array [1] : " << My_double_array[1] << endl;
	My_double_array[1] = 0.56;
	cout << "After change : " << My_double_array[1] << endl;
	//----------------------------------------------------------------------
	vector<int> Number{};

	vector<int> Number_2{ 0,1,2 };

	cout << "Num2[1] : " << Number_2.at(1) << endl;
	cout << "Num2[1] : " << Number_2[1] << endl;

	cout << "Size : " << Number_2.size() << endl;

	Number_2.push_back(5);

	cout << "After add num : " << Number_2.size() << endl;

	vector<vector<int>> Num22{
		{20,40,60},
		{1,2,3}
	};

	cout << "Num22 : " << Num22.at(0).at(1) << endl;
	//----------------------------------------------------------------------
	int num1, num2{ 0 };
	std::cout << "\nEnter 2 integers separated by a space: ";
	std::cin >> num1 >> num2;

	std::cout << num1 << " > " << num2 << " : " << (num1 > num2) << std::endl;
	std::cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << std::endl;
	std::cout << num1 << " < " << num2 << " : " << (num1 < num2) << std::endl;
	std::cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << std::endl;
	cout << "After use boolalpha : " << endl;
	cout << boolalpha;
	std::cout << num1 << " > " << num2 << " : " << (num1 > num2) << std::endl;
	std::cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << std::endl;
	std::cout << num1 << " < " << num2 << " : " << (num1 < num2) << std::endl;
	std::cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << std::endl;
	//----------------------------------------------------------------------
	int Number_1{ 0 };
	cout << "Number_1 : " << Number_1 << endl;
	Number_1++;
	cout << "After ++ : " << Number_1 << endl;
	//----------------------------------------------------------------------
	int Number_3{ 0 };
	int Upper_Num{ 0 };
	bool result{ 0 };
	cout << "Enter Your Number : ";
	cin >> Upper_Num;
	result = Number_1 > Upper_Num || Upper_Num < Number_3;
	cout << "|| ?" << result << endl;
	result = Number_1 > Upper_Num && Upper_Num < Number_3;
	cout << "&& ?" << result << endl;
	//----------------------------------------------------------------------
	double Number_4{ 0 };
	cout << "Befor Cast : " << typeid(Number_4).name() << endl;
	int After = static_cast<int>(Number_4);
	cout << "After Cast : " << typeid(After).name() << endl;
	//----------------------------------------------------------------------
	double N1{ 6 };
	double N2{ 0.8 };
	double R = N1 * N2;
	cout << "R : " << R << endl;
	cout.precision(2);
	cout << "R (precision) : " << R << endl;
	cout << fixed ;
	cout << "R (fixed) : " << R << endl;
	//----------------------------------------------------------------------
	return 0;
}