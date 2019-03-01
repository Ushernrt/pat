// 1027.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using std::cout;
using std::endl;
int main()
{
	int num[1000] = { 0 };
	int n;
	char ch;
	for (size_t i = 0; i < 25; i++)
	{
		num[i] = (1 + (2 * i - 1)) * i / 2 * 2 - 1;
	}

	std::cin >> n >> ch;
	//n = 19, ch = '*';
	int index = 0;
	for (size_t i = 0; n >= num[i]; i++) {
		index = i;
	}
	int count = 0;
	int s_count = 0;
	for (size_t i = index; i >= 1; i--)
	{
		count = 2 * i - 1;
		for (size_t j = 0; j < s_count; j++)
		{
			cout << ' ';
		}
		for (size_t j = 0; j < count; j++)
		{
			cout << ch;
		}
		cout << endl;
		s_count ++;
	}
	s_count--;
	for (size_t i = 2; i <= index; i++)
	{
		count = 2 * i - 1;
		s_count--;
		for (size_t j = 0; j < s_count; j++)
		{
			cout << ' ';
		}
		for (size_t j = 0; j < count; j++)
		{
			cout << ch;
		}
		cout << endl;
	}
	cout << n - num[index] << endl;
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
