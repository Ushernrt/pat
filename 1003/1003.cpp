#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

bool judge0(string s) {
	int count_A = 0;
	bool nop = true;
	bool noT = true;
	for (size_t i = 0; i < s.length(); i++)
	{
		if (count_A > 2) return false;
		if ('A' == s[i] && nop) {
			continue;
		}
		else if ('P' == s[i]) {
			nop = false;
			continue;
		}
		else if (!nop) {
			if ('A' == s[i] && noT) {
				++count_A;
				continue;
			}
			else if ('T' == s[i] && noT) {
				if (count_A == 0) {
					return false;
				}
				noT = false;
				continue;
			}
			else if (!noT) {
				if ('A' != s[i]) {
					return false;
				}
			}
		}
		else {
			return false;
		}
	}

	return true;
}

int main0() {
	int count = -1;
	std::cin >> count;
	string s;
	bool res;
	while (count--) {
		std::cin >> s;
		res = judge0(s);
		if (res) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}