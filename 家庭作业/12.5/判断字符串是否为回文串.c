#include <stdio.h>
#include <string.h>

// �ж��ַ����Ƿ�Ϊ���ĵĺ���
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

	printf("\n��������Ҫ�жϵ��ַ�����100���ַ����ڣ�����ո񣬰��س�����������");
	fgets(str1, sizeof(str1), stdin); // ʹ��fgets()�滻gets()
	str1[strcspn(str1, "\n")] = '\0'; // ȥ�����з�

	if (is_huiwen(str1)) {
		printf("\n%s�ǻ����ַ�����\n", str1);
	} else {
		printf("\n%s���ǻ����ַ�����\n\n", str1);
	}
	system("pause"); 
	return 0;
}
