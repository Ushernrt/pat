// 1025.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include<iostream>  
//#include<vector>  
//#include<cstdio>  
//using namespace std;
//
//struct node
//{
//	int add;
//	int data;
//	int next;
//};
//int main()
//{
//	vector<node> vin(100000);//输入时暂存节点  
//	vector<node> vsorted;//暂存排序后的结果  
//	vector<node> vout;//最后的结果  
//	node temp;
//	int first, N, K;
//
//	scanf_s("%d%d%d", &first, &N, &K);
//
//	for (int i = 0; i < N; i++)//输入  
//	{
//		//cin>>temp.add>>temp.data>>temp.next;  
//		scanf_s("%d%d%d", &temp.add, &temp.data, &temp.next);
//		vin[temp.add] = temp;
//	}
//	if (first == -1) //首地址为-1.直接输出  
//	{
//		printf("-1\n");
//	}
//	else
//	{
//		int nextAdd = first;
//		while (nextAdd != -1)
//		{
//			vsorted.push_back(vin[nextAdd]);
//			nextAdd = vin[nextAdd].next;
//		}
//		int Nnew = vsorted.size();//排序后的链的大小，不一定等于N，因为可能存在废点不在链上  
//		int right = K - 1;
//		while (right < Nnew)
//		{
//			for (int i = right; i > right - K; i--)
//			{
//				vout.push_back(vsorted[i]);
//			}
//			right += K;
//		}
//		for (int i = right - K + 1; i < Nnew; i++)
//		{
//			vout.push_back(vsorted[i]);
//		}
//		for (int i = 0; i < Nnew - 1; i++)
//		{
//			vout[i].next = vout[i + 1].add;
//			printf("%05d %d %05d\n", vout[i].add, vout[i].data, vout[i].next);
//			//cout<<setw(5)<<setfill('0')<<vout[i].add<<" "<<vout[i].data<<" "<<setw(5)<<setfill('0')<<vout[i].next<<endl;  
//		}
//		printf("%05d %d %d\n", vout[Nnew - 1].add, vout[Nnew - 1].data, -1);//最后地址-1 陷阱之一  
//		//cout<<setw(5)<<setfill('0')<<vout[Nnew-1].add<<" "<<vout[Nnew-1].data<<" "<<vout[Nnew-1].next<<endl;  
//	}
//	system("pause");
//	return 0;
//}


#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cstdio>

using std::string;
using std::cout;
using std::endl;
using std::vector;


struct node {
	int address;
	int data;
	int next;
};

int main()
{
	vector<node> vin(100000);
	vector<node> vsorted;
	vector<node> vout;
	node temp;
	int first, N, K;
	std::cin >> first >> N >> K;
	for (size_t i = 0; i < N; i++)
	{
		std::cin >> temp.address >> temp.data >> temp.next;
		vin[temp.address] = temp;
	}
	if (first == -1) {
		cout << "-1" << endl;
	}
	else {
		int nextAdd = first;
		while (nextAdd != -1) {
			vsorted.push_back(vin[nextAdd]);
			nextAdd = vin[nextAdd].next;
		}
		int Nnew = vsorted.size();
		int right = K - 1;
		while (right < Nnew) {
			for (int i = right; i > right - K; i--)
			{
				vout.push_back(vsorted[i]);
			}
			right += K;
		}

		for (int i = right - K + 1; i < Nnew; i++)
		{
			vout.push_back(vsorted[i]);
		}
		
		for (int i = 0; i < Nnew - 1; i++)
		{
			
			vout[i].next = vout[i + 1].address;
			printf("%05d %d %05d\n", vout[i].address, vout[i].data, vout[i].next);
			
		}
		printf("%05d %d %d\n", vout[Nnew - 1].address, vout[Nnew - 1].data, -1);
	}
}





//int main()
//{
//	string start;
//	int number = -1;
//	int K = -1;
//
//	std::cin >> start >> number >> K;
//	node* nodes = new node[number];
//	node* tmp = new node[number];
//	for (size_t i = 0; i < number; i++)
//	{
//		std::cin >> nodes[i].address >> nodes[i].data
//			>> nodes[i].next;
//	}
//	string addtmp = start;
//	for (size_t i = 0; i < number; i++)
//	{
//		for (size_t j = 0; j < number; j++)
//		{
//			if (0 == i) {
//				if (nodes[j].address == addtmp) {
//					addtmp = nodes[j].next;
//					tmp[i].address = nodes[j].address;
//					tmp[i].data = nodes[j].data;
//					tmp[i].next = nodes[j].next;
//					break;
//				}
//			}
//			else {
//				if (nodes[j].address == addtmp) {
//					addtmp = nodes[j].next;
//					tmp[i].address = nodes[j].address;
//					tmp[i].data = nodes[j].data;
//					tmp[i].next = nodes[j].next;
//					break;
//				}
//			}
//		}
//	}
//
//	int m = 0;
//	vector<node> stack;
//	for (size_t i = 0; i < number; i++)
//	{
//		if (stack.size() < K) {
//			stack.push_back(tmp[i]);
//		}
//		else if (stack.size() == K) {
//			while (!stack.empty()) {
//				node nodetmp = stack.back();
//				stack.pop_back();
//				cout << nodetmp.address << " " << nodetmp.data << " " << nodetmp.next << endl;
//			}
//			--i;
//			m = i + 1;
//		}
//	}
//	if (!stack.empty()) {
//		for (size_t i = m; i < number; i++)
//		{
//			cout << tmp[i].address << " " << tmp[i].data << " " << tmp[i].next << endl;
//		}
//	}
//
//	return 0;
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
