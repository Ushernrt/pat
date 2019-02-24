// 1024.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

string findE(string s, int& pos, int& point_pos) {
	string res;
	for (size_t i = 1; i < s.length(); i++)
	{
		if ('.' == s[i]) {
			point_pos = i;
			continue;
		}
		if ('E' == s[i]) {
			res = s.substr(1, i - 1);
			pos = i + 1;
			break;
		}
	}
	return res;
}

int main()
{
	string s;
	std::cin >> s;
	if (s[0] == '-') {
		cout << '-';
	}

	int pos = 0;
	int point_pos = -1;
	int off = -1;
	string off_s;
	string front = findE(s, pos, point_pos);
	off_s = s.substr(pos + 1, s.length() - pos);
	off = std::stoi(off_s);
	if (s[pos] == '+') {
		if (0 == off) {
			cout << front;
		}
		if(point_pos + off < front.length())
		for (size_t i = 0, j = 0; i < (size_t)(front.length()); i++, j++)
		{
			if (0 == off) {
				break;
			}
			if (i < front.length() && front[i] == '.') {
				j = 0;
				continue;
			}
			if (i >= front.length()) {
				cout << '0';
				continue;
			}
			if (j == off + 1) {
				cout << '.';
			}
			cout << front[i];
		}
		else {
			for (size_t i = 0, j = 0; i < (size_t)(point_pos+off); i++, j++)
			{
				if (0 == off) {
					break;
				}
				if (i < front.length() && front[i] == '.') {
					j = 0;
					continue;
				}
				if (i >= front.length()) {
					cout << '0';
					continue;
				}

				cout << front[i];
			}
		}

	}
	else {
		if (0 == off) {
			for (size_t i = 0; i < front.length(); i++)
			{
				cout << front[i];
			}
		}
		else {
			cout << "0.";
			for (size_t i = 0; i < off - 1; i++)
			{
				cout << '0';
			}
			for (size_t i = 0; i < front.length(); i++)
			{
				if (front[i] == '.') continue;
				cout << front[i];
			}
		}
	}
	std::cin.get();
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
