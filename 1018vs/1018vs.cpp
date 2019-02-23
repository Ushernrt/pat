// 1018vs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

struct win_num {
	int win;
	int fail;
	int equal;
	int c_win;
	int j_win;
	int b_win;
};

int judge(char a, char b) {
	if (a == b) {
		return 0;
	}
	else if ((a == 'C' && b == 'J') || (a == 'J' && b == 'B') || (a == 'B' && b == 'C')) {
		return 1;
	}
	else {
		return -1;
	}
}

int main()
{
	win_num jia, yi;
	::memset(&jia, 0, sizeof(jia));
	::memset(&yi, 0, sizeof(yi));
	int k = 0;
	int res = 0;
	char c_jia, c_yi;
	std::cin >> k;
	while (k--) {
		std::cin >> c_jia >> c_yi;
		res = judge(c_jia, c_yi);
		if (0 == res) {
			jia.equal++;
			yi.equal++;
		}
		else if (1 == res) {
			jia.win++;
			yi.fail++;
			if (c_jia == 'B') {
				jia.b_win++;
			}
			else if(c_jia == 'J')
			{
				jia.j_win++;
			}
			else {
				jia.c_win++;
			}
		}
		else {
			jia.fail++;
			yi.win++;

		}
		if (c_yi == 'B') {
			yi.b_win++;
		}
		else if (c_yi == 'J')
		{
			yi.j_win++;
		}
		else {
			yi.c_win++;
		}
	}

	cout << jia.win << ' ' << jia.equal << ' ' << jia.fail << endl;
	cout << yi.win << ' ' << yi.equal << ' ' << yi.fail << endl;
	int shuchu = jia.b_win >= jia.c_win ? (jia.b_win >= jia.j_win ? 1 : 3) : (jia.c_win >= jia.j_win ? 2 : 3);
	if (shuchu == 1) {
		cout << 'B' << ' ';
	}
	else if(shuchu == 2) {
		cout << 'C' << ' ';
	}
	else {
		cout << 'J' << ' ';
	}
	shuchu = yi.b_win >= yi.c_win ? (yi.b_win >= yi.j_win ? 1 : 3) : (yi.c_win >= yi.j_win ? 2 : 3);
	if (shuchu == 1) {
		cout << 'B' ;
	}
	else if (shuchu == 2) {
		cout << 'C' ;
	}
	else {
		cout << 'J' ;
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
