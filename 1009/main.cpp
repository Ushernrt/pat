//#include <cstdio>
//#include <cstring>
//
//void reverse(char *s, int begin, int end) {
//	char tmp;
//	for (int i = begin, j = end; i < j; ++i, --j)
//	{
//		tmp = s[i];
//		s[i] = s[j];
//		s[j] = tmp;
//	}
//}
//
//
//int main()
//{
//	char s[100] = { 0 };
//	int begin = -1;
//	int end = -1;
//	gets(s);
//	int len = strlen(s);
//	reverse(s, 0, len - 1);
//	bool flag = true;
//	for (int i = 0; i < len; i++)
//	{
//		if (flag) {
//			begin = i;
//			flag = false;
//		}
//		if (s[i] == ' ') {
//			end = i - 1;
//			reverse(s, begin, end);
//			flag = true;
//		}
//
//	}
//	reverse(s, begin, len - 1);
//	printf("%s\n", s);
//    return 0;
//}


#include <iostream>
#include <cstdio>


using std::cout;
using std::endl;
using std::cin;

int main() {
	char s[80][30] = { 0 };
	int s_length = 0;
	int w_length = 0;
	char temp = 0;
	temp = getchar();
	while (temp != '\n') {
		if (' ' == temp) {
			++s_length;
			w_length = 0;
			temp = getchar();
			continue;
		}
		s[s_length][w_length++] = temp;
		temp = getchar();
	}
	for (int i = s_length; i > 0; i--)
	{
		cout << s[i] << " ";
	}
	cout << s[0] << endl;
}