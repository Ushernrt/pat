#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

bool judge(string s) {
	int count_AP = 0;
	int count_PA = 0;
	int count_TA = 0;
	int cnp = 0;
	int cnt = 0;
	int P_j(0);
	int T_j(0);

	bool nop = true;
	bool noT = true;
	for (size_t i = 0; i < s.length(); i++)
	{
		if ('A' != s[i] && 'P' != s[i] && 'T' != s[i]) return false;

		if ('A' == s[i] && nop) {
			++count_AP;
			continue;
		}
		else if ('P' == s[i]) {
			++cnp;
			P_j = i;
			nop = false;
			continue;
		}
		else if ('A' == s[i] && noT) {
			++count_PA;
			continue;
		}
		else if ('T' == s[i]) {
			T_j = i;
			++cnt;
			noT = false;
			continue;
		}
		else if ('A' == s[i] && !nop && !noT) {
			++count_TA;
			continue;
		}
	}
	if (!count_AP && !count_PA && !count_TA) return false;
	if (cnt != 1 || cnp != 1) return false;
	if ((T_j - 1 - P_j) >= 1 && count_TA == count_AP * count_PA || 1 == count_PA) {
		return true;
	}
	else {
		return false;
	}

}

int main() {
	int count = -1;
	std::cin >> count;
	string s;
	bool res;
	while (count--) {
		std::cin >> s;
		res = judge(s);
		if (res) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}