#include <stdio.h>
#include <string.h>

// 判断字符串是否为回文的函数
int is_huiwen(char *str) {
	int len = strlen(str);
	char *i,*j;
	i=str;
	j=str + len - 1;
	for (i; i < j; i++) {
		if (*i != str[j - i]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	char str1[101]= {};

	printf("\n请输入需要判断的字符串（100个字符以内，允许空格，按回车键继续）：");
	fgets(str1, sizeof(str1), stdin); // 使用fgets()替换gets()
	str1[strcspn(str1, "\n")] = '\0'; // 去除换行符

	if (is_huiwen(str1)) {
		printf("\n%s是回文字符串。\n", str1);
	} else {
		printf("\n%s不是回文字符串。\n\n", str1);
	}
	system("pause"); 
	return 0;
}
