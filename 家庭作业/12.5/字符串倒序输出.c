#include <stdio.h>
#include <string.h>

int main() {
	char str1[101]= {},str2[101]= {},*hc,*b;
	
	printf("\n��������Ҫ����������ַ�����100���ַ����ڣ�����ո񣬰��س�����������");
	fgets(str1, sizeof(str1), stdin); // ʹ��fgets()�滻gets()
	str1[strcspn(str1, "\n")] = '\0'; // ȥ�����з�
	
	b=str1;
	hc=str2;
	
	while(*b)
		b++;
	b--;
	
	for(b; b>=str1||*b!='\0'; b--) {
		*hc=*b;
		hc++;
	}
	printf("\n\n����Ľ��Ϊ��%s\n\n",str2);
	system("pause");
	
	return 0;
}
for(p;p!='\0';p++){
	for(q;q!='\0';q++){
		
		
	}
	q=str
}
