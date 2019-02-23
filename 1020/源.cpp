#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using std::cout;
using std::endl;
using std::vector;


struct per
{
	double number;
	double price;
	double single;
};



int main() {
	int N, D;
	vector<per> p;



	std::cin >> N >> D;
	p.reserve(N);

	for (size_t i = 0; i < N; i++)
	{
		per tmp;
		std::cin >> tmp.number;
		p.push_back(std::move(tmp));
	}

	for (size_t i = 0; i < N; i++)
	{
		std::cin >> p[i].price;
	}

	for (size_t i = 0; i < N; i++)
	{
		p[i].single = p[i].price / p[i].number;
	}

	sort(p.begin(), p.end(), [](per a, per b) {
		return a.single > b.single;
		});
	double res = 0;
	for (size_t i = 0; i < N; i++)
	{
		if (D >= p[i].number) {
			res += p[i].price;
			D -= p[i].number;
		}
		else {
			res += D * p[i].single;
			break;
		}
	}
	printf("%.2f",res);

}