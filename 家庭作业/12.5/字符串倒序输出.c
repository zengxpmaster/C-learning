#include <stdio.h>
#include <string.h>

int main() {
	char str1[101]= {},str2[101]= {},*hc,*b;
	
	printf("\n请输入需要倒序输出的字符串（100个字符以内，允许空格，按回车键继续）：");
	fgets(str1, sizeof(str1), stdin); // 使用fgets()替换gets()
	str1[strcspn(str1, "\n")] = '\0'; // 去除换行符
	
	b=str1;
	hc=str2;
	
	while(*b)
		b++;
	b--;
	
	for(b; b>=str1||*b!='\0'; b--) {
		*hc=*b;
		hc++;
	}
	printf("\n\n倒序的结果为：%s\n\n",str2);
	system("pause");
	
	return 0;
}
for(p;p!='\0';p++){
	for(q;q!='\0';q++){
		
		
	}
	q=str
}
