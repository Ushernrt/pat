#include <cstdio>

int main()
{
	long long A, B, C;
	int n = -1;
	scanf("%d", &n);
	int index = 1;
	while (n--) {
		scanf("%lld%lld%lld", &A, &B, &C);
		if (A + B > C) {
			printf("Case #%d: true\n", index ++);
		}
		else {
			printf("Case #%d: false\n", index++);
		}
	}

    return 0;
}