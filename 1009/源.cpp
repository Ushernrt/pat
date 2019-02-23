//#include <iostream>
//#include <cstdio>
//
//
//using std::cout;
//using std::endl;
//using std::cin;
//
//int main() {
//	char s[80][30] = { 0 };
//	int s_length = 0;
//	int w_length = 0;
//	char temp = 0;
//	cin >> temp;
//	while (temp != '\n') {
//		if (' ' == temp) {
//			++s_length;
//			w_length = 0;
//			continue;
//		}
//		s[s_length][w_length++] = temp;
//		cin >> temp;
//	}
//	for (int i = s_length; i > 0; i--)
//	{
//		cout << s[i] << " ";
//	}
//	cout << s[0] << endl;
//}