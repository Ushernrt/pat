#include <cstdio>
#include <vector>
#include <numeric>
#include <algorithm>
using std::vector;

int main()
{
	vector<int> v1, v2, v3, v4, v5;
	int n = -1, temp = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &temp);
		if (0 == temp % 5 && 0 == temp % 2) {
			v1.push_back(temp);
			continue;
		}
		else if (1 == temp % 5) {
			v2.push_back(temp);
			continue;
		}
		else if (2 == temp % 5) {
			v3.push_back(temp);
			continue;
		}
		else if (3 == temp % 5) {
			v4.push_back(temp);
			continue;
		}
		else if (4 == temp % 5) {
			v5.push_back(temp);
		}
	}

	if (v1.size() != 0) {
		printf("%d", std::accumulate(v1.begin(), v1.end(), 0));
	}
	else {
		printf("N");
	}
	if (v2.size() != 0) {
		int op = 1;
		int sum = 0;
		for (int item : v2) {
			sum += op * item;
			op *= -1;
		}
		printf(" %d", sum);
	}
	else {
		printf(" N");
	}
	if (v3.size() != 0) {
		printf(" %d", v3.size());
	}
	else {
		printf(" N");
	}
	if (v4.size() != 0) {
		int sum = std::accumulate(v4.begin(), v4.end(), 0);
		int num = v4.size();
		printf(" %.1f", sum / (num * 1.0));
	}
	else {
		printf(" N");
	}
	if (v5.size() != 0) {
		vector<int>::iterator max = std::max_element(v5.begin(), v5.end());
		printf(" %d", *max);
	}
	else {
		printf(" N");
	}
	scanf("%d", &n);

	return 0;
}