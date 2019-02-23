#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

struct student {
	int id;
	int de;
	int cai;
};

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

}