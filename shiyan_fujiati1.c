//#include<stdio.h>
//#include<stdbool.h>
//#define MAXLEN 100
//typedef struct stack {
//	int top;
//	char data[MAXLEN];
//}S;
//
//
//bool push(S s, char x)
//{
//	s.top++;
//	s.data[s.top] = x;
//}
//
//bool pop(S s, char* x) {
//	x = s.data[s.top--];
//	return 1;
//}
//
//bool bracketCheck(char str[], int length) {
//	S s;
//	s.top = -1;
//	
//	int i;
//	int flag = 1;
//	for (i = 0; i < length; i++) {
//
//		if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
//			push(s, str[i]);
//		}
//		else {
//			if ((str[i] == ')' || str[i] == ']' || str[i] == '}') && s.top == -1) {
//				printf("0");
//				flag = 0;
//				break;
//			}
//			else if ((str[i] == '(' || str[i] == '[' || str[i] == '{') && s.top == -1) {
//				printf("0");
//				flag = 0;
//				break;
//			}
//		}
//
//
//		char topElem = 0;
//		pop(s, topElem);
//		if (str[i] == ')' && topElem != '(') {
//			printf("0");
//		}
//		if (str[i] == '[' && topElem != ']') {
//			printf("0");
//		}
//		if (str[i] == '{' && topElem != '}') {
//			printf("0");
//		}
//	}
//	if (flag)
//		printf("1");
//	return 0;
//}
//int main() {
//	char str[MAXLEN];
//	int length = sizeof(str[0]) / sizeof(str[MAXLEN]);
//	scanf("%s", str);
//	bracketCheck(str, length);
//	return 0;
//}