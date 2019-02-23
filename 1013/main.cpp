#include <cstdio>
#include <cstring>

// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103
// 1 2 3 4 5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26  27

int main()
{
	int index = 0;
	bool prime[1000000] = { true };
	memset(prime, true, sizeof(prime));
	int int_prime[10000] = { 0 };
	for (size_t i = 2; i <= 1000000; i++)
	{
		if (prime[i]) {
			int_prime[index++] = i;
			if (index == 10000) break;
			for (size_t j = i + i; j < 1000000; j += i)
			{
				prime[j] = false;
			}
		}
	}



	int m, n;
	scanf("%d%d", &m, &n);
	bool flag = true;
	if ((n - m + 1) % 10 == 0) flag = false;
	for (size_t i = m - 1, k = 1; i < n - 1; i++, ++k)
	{

		if (0 == k % 10 && flag) {
			printf("%d\n", int_prime[i]);
		}
		else if(0!=k%10){
			printf("%d ", int_prime[i]);
		}
		else if (0 == k % 10 && !flag) {
			printf("%d", int_prime[i]);
		}
	}
	printf("%d\n", int_prime[n - 1]);


	return 0;
}