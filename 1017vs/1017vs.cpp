// 1017vs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

int main()
{
	char num1[1001] = { 0 };
	char result[1001] = { 0 };
	size_t r_index = 0;
	int x = -1;
	int yushu = 0;
	int dangqianwei;

	std::cin >> num1;
	std::cin >> x;
	int numlen = strlen(num1);
	for (size_t i = 0; i < numlen; i++)
	{
		dangqianwei = num1[i] - '0';
		if (0 == i) {
			if (dangqianwei >= x) {
				result[r_index++] = dangqianwei / x + '0';
				yushu = dangqianwei % x;
			}
			else {
				yushu = dangqianwei % x;
			}
		}
		else {
			yushu = yushu * 10 + dangqianwei;
			if (yushu >= x) {
				result[r_index++] = yushu / x + '0';
				yushu = yushu % x;
			}
			else {
				result[r_index++] = '0';
			}
		}
	}

	if (1 == numlen) {
		dangqianwei = num1[0] - '0';
		if (dangqianwei >= x) {
			result[r_index++] = dangqianwei / x;
			yushu = dangqianwei % x;
		}
		else {
			result[r_index++] = '0';
			yushu = dangqianwei % x;
		}
	}

	for (size_t i = 0; i < r_index; i++)
	{
		cout << result[i];
	}
	cout << ' ' << yushu << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
