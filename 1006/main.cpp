#include <cstdio>
#include <iostream>
int main()
{
	int n = 0;
	int count[3] = { 0 };
	scanf("%d", &n);
	for (size_t i = 0; i < 3; i++)
	{
		count[i] = n % 10;
		n /= 10;
	}
	for (size_t i = 0; i < count[2]; i++)
	{
		printf("B");
	}
	for (size_t i = 0; i < count[1]; i++)
	{
		printf("S");
	}
	for (size_t i = 0; i < count[0]; i++)
	{
		printf("%d", i + 1);
	}
	printf("\n");
	std::cin >> n;
	return 0;
}