#include <stdio.h>
#include <string.h>

void BubbleSort(char *a) {
    char *i, *j, temp;
    
	for (i = a; *i != '\0'; i++) {
        for (j = i + 1; j <= &a[strlen(a) - 1]; j++) {
            if (*i > *j) {
                temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

int main() {
    char str1[101], str2[101], str3[202], *a, *b;

    printf("\n�������ַ���1��100���ַ����ڣ�����ո񣬰��س�����������");
    fgets(str1, sizeof(str1), stdin); // ʹ��fgets()�滻gets()
    str1[strcspn(str1, "\n")] = '\0'; // ȥ�����з�

    printf("\n�������ַ���2��100���ַ����ڣ�����ո񣬰��س�����������");
    fgets(str2, sizeof(str2), stdin); // ʹ��fgets()�滻gets()
    str2[strcspn(str2, "\n")] = '\0'; // ȥ�����з�

    BubbleSort(str1);
    BubbleSort(str2);

    printf("\n��С����������Ϊ:\n\n%s\n\n%s	�����س���������", str1, str2);
	getchar();
	
	strcpy(str3,str1); 
	strcat(str3,str2); 
	
	BubbleSort(str3);
	
	printf("\n�ַ���1�����ַ���2��������Ϊ:\n\n%s\n", str3);
    return 0;
}
