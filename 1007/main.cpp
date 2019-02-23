#include <iostream>
#include <vector>
#include <cmath>
using std::cout;
using std::endl;
using std::vector;

bool is_prime(int num) {
	int end = sqrt(num) + 1;
	for (int i = 2; i < end; i++)
	{
		if (0 == num % i) {
			return false;
		}
	}
	return true;
}


int main()
{
	vector<int> num;
	int count = 0;
	int n = -1;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (is_prime(i)) {
			num.push_back(i);
		}
	}

	for (size_t i = 1; i < num.size(); i++)
	{
		if (2 == num[i] - num[i - 1]) {
			++count;
		}
	}
	cout << count << endl;
	
	return 0;
}