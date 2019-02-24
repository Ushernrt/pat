// 1022.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

vector<short> convert(int tar, int D) {
	vector<short> res;
	if (0 == tar) {
		res.push_back(0);
		return res;
	}
	int remainder = 0;
	while (tar != 0) {
		remainder = tar % D;
		res.push_back(remainder);
		tar /= D;
	}
	return res;
}

int main()
{
	int A, B, D;
	int res = 0;
	std::cin >> A >> B >> D;
	res = A + B;

	vector<short> result = convert(res, D);
	vector<short>::reverse_iterator rit;
	for (rit = result.rbegin(); rit != result.rend(); rit++)
	{
		cout << *rit;
	}
	cout << endl;
	
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
