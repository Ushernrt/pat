#include<iostream>

using std::cout;
using std::endl;

int kalazi(int n) {
	int count = 0;
	
	while (n != 1)
	{
		if (0 == n % 2) {
			n /= 2;
		}
		else {
			n = (3 * n + 1) / 2;		
		}
		++count;
	}
	return count;
}

int main() {
	int n;
	std::cin >> n;
	cout << kalazi(n) << endl;
	return 0;
}