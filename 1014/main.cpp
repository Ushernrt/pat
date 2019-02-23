#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::min;

char day[8][4] = { "", "SUN","MON","TUE","WED","THU","FRI","SAT" };

int main()
{
	string s1, s2, s3, s4;
	std::cin >> s1 >> s2;// >> s3 >> s4;

	size_t len_s12 = min(s1.size(), s2.size());
	size_t len_s34 = min(s3.size(), s4.size());
	size_t flag = 0;
	for (size_t i = 0; i < len_s12; i++)
	{
		if (s1[i] == s2[i] && (s1[i] >= 'A' && s2[i] <= 'G')) {
			flag = i;
			cout << day[s1[i] - 'A' + 1];
			cout << ' ';
		}
	}

	return 0;
}