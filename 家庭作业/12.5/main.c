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

    printf("\n请输入字符串1（100个字符以内，允许空格，按回车键继续）：");
    fgets(str1, sizeof(str1), stdin); // 使用fgets()替换gets()
    str1[strcspn(str1, "\n")] = '\0'; // 去除换行符

    printf("\n请输入字符串2（100个字符以内，允许空格，按回车键继续）：");
    fgets(str2, sizeof(str2), stdin); // 使用fgets()替换gets()
    str2[strcspn(str2, "\n")] = '\0'; // 去除换行符

    BubbleSort(str1);
    BubbleSort(str2);

    printf("\n从小到大排序结果为:\n\n%s\n\n%s	（按回车键继续）", str1, str2);
	getchar();
	
	strcpy(str3,str1); 
	strcat(str3,str2); 
	
	BubbleSort(str3);
	
	printf("\n字符串1加上字符串2后排序结果为:\n\n%s\n", str3);
    return 0;
}
