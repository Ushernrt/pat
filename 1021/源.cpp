#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main() {
	string input;

	short hash[10] = { 0 };

	std::cin >> input;

	for (size_t i = 0; i < input.size(); i++)
	{
		++hash[input[i] - '0'];
	}
	for (int i = 0; i < 10; i++)
	{
		if (hash[i] != 0) {
			cout << i << ':' << hash[i] << endl;
		}
	}
}