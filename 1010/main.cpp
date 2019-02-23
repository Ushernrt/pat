#include <cstdio>

int main()
{
	int num1, num2;
	bool flag = true;
	while (scanf("%d%d", &num1, &num2) != EOF) {
		if (num2 <= 0) break;
		if (flag == true) {
			printf("%d %d", num1 * num2, num2 - 1);
			flag = false;
		}
		else {
			printf(" %d %d", num1 * num2, num2 - 1);
		}
		
	}
	if (flag) {
		printf("0 0");
	}
	
	return 0;
}