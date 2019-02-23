#include<iostream>
#include<string>
#include<sstream>
using std::cout;
using std::endl;
using std::string;

char pinyin[10][5] = { "ling","yi","er","san", "si", "wu", "liu", "qi", "ba", "jiu" };



int main() {
	string num;
	std::stringstream sstr;
	std::getline(std::cin, num);
	int sum = 0;
	for (char var : num)
	{
		sum += var - '0';
	}

	sstr << sum;
	string res = sstr.str();

	for (size_t i = 0; i < res.length() - 1; i++)
	{
		cout << pinyin[res[i] - '0'] << ' ';
	}
	cout << pinyin[res[res.length() - 1] - '0'];
	return 0;
}