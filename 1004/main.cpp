#include <iostream>
#include <string.h>
#include <string>
#include <sstream>
using std::cout;
using std::endl;
using std::istringstream;

typedef struct student {
	std::string name;
	std::string num;
	int grade;
}student;

int main()
{
	student s_temp;
	student s_best;
	student s_low;

	int max = -1;
	int min = 101;

	std::string temp;
	int n = -1;
	std::cin >> n;
	std::cin.get();
	
	while (n--) {
		
		std::getline(std::cin, temp);
		istringstream iss(temp);
		iss >> s_temp.name;
		iss >> s_temp.num;
		iss >> s_temp.grade;
		if (s_temp.grade > max) {
			max = s_temp.grade;
			s_best.name = s_temp.name;
			s_best.num = s_temp.num;
			s_best.grade = s_temp.grade;
		}
		if (s_temp.grade < min) {
			min = s_temp.grade;
			s_low.name = s_temp.name;
			s_low.num = s_temp.num;
			s_low.grade = s_temp.grade;
		}
		
	}
	cout << s_best.name << ' ' << s_best.num << endl;
	cout << s_low.name << ' ' << s_low.num << endl;

	std::cin >> n;
	return 0;
}