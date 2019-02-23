// 1015vs.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::sort;

struct student {
	int id;
	int de;
	int cai;
};

bool SortByGrade(const student & x, const student & y) {
	int x_grade, y_grade;
	x_grade = x.de + x.cai;
	y_grade = y.de + y.cai;

	if (x_grade != y_grade) {
		return x_grade > y_grade;
	}
	else if(x.de != y.de){
		return x.de > y.de;
	}
	else {
		return x.id < y.id;
	}
}

int main() {
	int N, L, H;
	int count = 0;
	std::cin >> N >> L >> H;
	vector<student> first;
	vector<student> second;
	vector<student> third;
	vector<student> fourth;

	int id, de, cai;
	student temp;
	for (size_t i = 0; i < N; i++)
	{
		std::cin >> id >> de >> cai;
		temp.id = id;
		temp.de = de;
		temp.cai = cai;
		if (de >= H && cai >= H) {
			++count;
			first.push_back(temp);
			continue;
		}
		if (de >= H && (cai < H && cai >= L)) {
			++count;
			second.push_back(temp);
			continue;
		}
		if ((de >= L && de < H) && (cai >= L && de < H) && (de >= cai)) {
			++count;
			third.push_back(temp);
			continue;
		}
		if (de >= L && cai >= L) {
			++count;
			fourth.push_back(temp);
			continue;
		}
	}

	cout << count << endl;

	sort(first.begin(), first.end(), SortByGrade);
	sort(second.begin(), second.end(), SortByGrade);
	sort(third.begin(), third.end(), SortByGrade);
	sort(fourth.begin(), fourth.end(), SortByGrade);

	for (student item : first) {
		cout << item.id << ' ' << item.de << ' ' << item.cai << endl;
	}
	for (student item : second) {
		cout << item.id << ' ' << item.de << ' ' << item.cai << endl;
	}
	for (student item : third) {
		cout << item.id << ' ' << item.de << ' ' << item.cai << endl;
	}
	for (student item : fourth) {
		cout << item.id << ' ' << item.de << ' ' << item.cai << endl;
	}
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
