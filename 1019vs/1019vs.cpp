// 1019vs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;

int asc(const void* a, const void* b) {
	int arg1 = *(const int*)a;
	int arg2 = *(const int*)b;

	return arg1 - arg2;
}
int des(const void* a, const void* b) {
	int arg1 = *(const int*)a;
	int arg2 = *(const int*)b;

	return arg2 - arg1;
}
char * non_increasing(int k,char *res) {
	
	int number[4] = { 0 };
	int tmp = 10;
	for (size_t i = 0; i < 4; i++)
	{
		number[i] = k % tmp;
		k /= 10;
	}
	qsort(number, 4, sizeof(int), des);
	for (size_t i = 0; i < 4; i++)
	{
		res[i] = number[i] + '0';
	}
	res[4] = 0;
	return res;
}

char * non_decreasing(int k, char* res) {
	
	int number[4] = { 0 };
	int tmp = 10;
	for (size_t i = 0; i < 4; i++)
	{
		number[i] = k % tmp;
		k /= 10;
	}
	qsort(number, 4, sizeof(int), asc);
	for (size_t i = 0; i < 4; i++)
	{
		res[i] = number[i] + '0';
	}
	res[4] = 0;
	return res;
}
int main()
{
	char non_incr[5];
	char non_decr[5];
	int k = -1;
	cin >> k;
	while (true) {
		char * non_inc = non_increasing(k,non_incr);
		char * non_dec = non_decreasing(k,non_decr);
		if (atoi(non_inc) == atoi(non_dec)) {
			cout << non_inc << " - " << non_dec << " = " << "0000" << endl;
			break;
		}
		else {
			k = atoi(non_inc) - atoi(non_dec);
			cout << non_inc << " - " << non_dec << " = " << k << endl;
			if (6174 == k) {
				break;
			}
		}

	}
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
