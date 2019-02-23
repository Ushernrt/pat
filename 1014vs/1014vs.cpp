#include "pch.h"
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::min;

char day[8][4] = { "","MON","TUE","WED","THU","FRI","SAT", "SUN" };

int main()
{
	string s1, s2, s3, s4;
	std::cin >> s1 >> s2 >> s3 >> s4;

	size_t len_s12 = min(s1.size(), s2.size());
	size_t len_s34 = min(s3.size(), s4.size());
	size_t flag = 0;
	for (size_t i = 0; i < len_s12; i++)
	{
		if (s1[i] == s2[i] && (s1[i] >= 'A' && s2[i] <= 'G')) {
			flag = i;
			cout << day[s1[i] - 'A' + 1];
			cout << ' ';
			break;
		}
	}
	for (size_t i = flag + 1; i < len_s12; i++)
	{
		if (s1[i] == s2[i] && (s1[i] >= '0' && s2[i] <= '9')) {
			cout << '0' << s1[i] - '0' << ':';
			break;
		}
		if (s1[i] == s2[i] && (s1[i] >= 'A' && s2[i] <= 'N')) {
			cout << (s1[i] - 'A' + 10) % 24 << ':';
			break;
		}
	}
	for (size_t i = 0; i < len_s34; i++)
	{
		if (s3[i] == s4[i] && (s3[i] >= 'a' && s3[i] <= 'z' || s3[i] >= 'A' && s4[i] <= 'Z')) {
			if (i < 10) {
				printf("%02d", i);
			}
			else {
				printf("%02d", i % 60);
			}
		}
	}


	return 0;
}





// 1014vs.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//
//#include "pch.h"
//#include <iostream>
//#include <cstring>
//using std::cout;
//using std::endl;
//
//char day[7][4] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
//
//int main()
//{
//	char s1[61] = { 0 };
//	char s2[61] = { 0 };
//	char s3[61] = { 0 };
//	char s4[61] = { 0 };
//
//	std::cin >> s1;
//	std::cin >> s2;
//	std::cin >> s3;
//	std::cin >> s4;
//
//	size_t len_s12 = strlen(s1) > strlen(s2) ? strlen(s2) : strlen(s1);
//	size_t len_s34 = strlen(s3) > strlen(s4) ? strlen(s4) : strlen(s3);
//	bool flag = true;
//	for (size_t i = 0; i < len_s12; i++)
//	{
//		if (flag && s1[i] == s2[i] && (s1[i] >= 'A' && s1[i] <= 'G')) {
//			cout << day[(s1[i] - 'A' + 1) % 7] << " ";
//			flag = false;
//		}
//
//		if (!flag && s1[i] == s2[i] && (s1[i] >= 'A' && s1[i] <= 'Z' || s1[i] >= '0'&&s1[i] <= '9')) {
//			if (s1[i] >= '0' && s1[i] <= '9') {
//				cout << '0' << s1[i] - '0' << ':';
//			}
//			else {
//				cout << s1[i] - 'A' + 11 << ':';
//			}
//			break;
//		}
//	}
//
//	for (size_t i = 0; i < len_s34; i++)
//	{
//		if (s3[i] == s4[i] && (s3[i] >= 'a' && s3[i] <= 'z')) {
//			if (i <= 9) {
//				cout << '0' << i << endl;
//			}
//			else {
//				cout << i << endl;
//			}
//			break;
//		}
//	}
//
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
