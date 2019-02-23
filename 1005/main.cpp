#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;


int main()
{
	int num[100];
	bool hash[1000] = { false };
	int tmp = 0;
	memset(num, 0, sizeof(num));
	memset(hash, 0, sizeof(hash));
	vector<int> vec_res;
	size_t n = -1;
	std::cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> num[i];
		tmp = num[i];
		while (tmp != 1)
		{
			if (0 == tmp % 2) {
				tmp /= 2;
				hash[tmp] = true;
				continue;
			}
			else {
				tmp = (3 * tmp + 1) / 2;
				hash[tmp] = true;
				continue;
			}
		}
	}

	for (size_t i = 0; i < n; i++)
	{
		if (!hash[num[i]])
			vec_res.push_back(num[i]);
	}

	std::sort(vec_res.begin(), vec_res.end());
	for (size_t i = vec_res.size() - 1; i >= 1; --i)
	{
		cout << vec_res[i] << ' ';
	}
	cout << vec_res[0] << endl;
	
	return 0;
}