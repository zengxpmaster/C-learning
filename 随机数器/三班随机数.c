#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
int main(void) {

	char loop;
	int num,a,b,co1;
	do {
		srand( (unsigned) time (NULL));
		num = (rand()%49)+1;
		co1 = rand()%2;
		system("color 0f");
		printf("正在生成随机数，请等待···\n");
		sleep(2);
		a=num/10;
		b=num%10;
		switch(a) {
			case(0):
				printf("　   正正正    \n");
				printf("   正      正　\n");
				printf("　 正      正　\n");
				printf("　 正　　  正　\n");
				printf("　 正　　  正　\n");
				printf("　 正　　  正　\n");
				printf("　 正　　  正　\n");
				printf("     正正正    \n");
				break;
			case(1):
				printf("　　　 正　　　\n");
				printf("     正正      \n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("    正正正正    \n");
				break;
			case(2):
				printf("　　 正正正　　\n");
				printf("　 正　　  正　\n");
				printf("　 正      正　\n");
				printf("　　　　 正　  \n");
				printf("　　　 正　    \n");
				printf("　　 正　　　　\n");
				printf("　 正　　　　　\n");
				printf("　 正正正正正　\n");
				break;
			case(3):
				printf("     正正正    \n");
				printf("　 正      正　\n");
				printf("　 　　　  正　\n");
				printf("　　　 正正    \n");
				printf("　　　　   正　\n");
				printf("　　　　　 正　\n");
				printf("　 正　 　 正　\n");
				printf("     正正正    \n");
				break;
			case(4):
				printf("　　　　 正　　\n");
				printf("　　　   正　　\n");
				printf("　　　 正正　　\n");
				printf("　　 正　正　　\n");
				printf("　 正　　正　　\n");
				printf("   正正正正正  \n");
				printf("　　　　 正　　\n");
				printf("　　   正正正  \n");
				break;
			case(5):
				printf("   正正正正正  \n");
				printf("   正          \n");
				printf("   正          \n");
				printf("   正正正正    \n");
				printf("   正      正  \n");
				printf("           正  \n");
				printf("           正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
			case(6):
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正          \n");
				printf("   正正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
			case(7):
				printf("   正正正正正  \n");
				printf("           正  \n");
				printf("         正    \n");
				printf("         正    \n");
				printf("       正      \n");
				printf("       正      \n");
				printf("       正	   \n");
				printf("       正      \n");
				break;
			case(8):
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
			case(9):
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正正  \n");
				printf("           正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
		}
		printf("\n");
		switch(b) {
			case(0):
				printf("　   正正正    \n");
				printf("   正      正　\n");
				printf("　 正      正　\n");
				printf("　 正　　  正　\n");
				printf("　 正　　  正　\n");
				printf("　 正　　  正　\n");
				printf("　 正　　  正　\n");
				printf("     正正正    \n");
				break;
			case(1):
				printf("　　　 正　　　\n");
				printf("     正正      \n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("　　　 正　　　\n");
				printf("     正正正    \n");
				break;
			case(2):
				printf("　　 正正正　　\n");
				printf("　 正　　  正　\n");
				printf("　 正      正　\n");
				printf("　　　　 正　  \n");
				printf("　　　 正　    \n");
				printf("　　 正　　　　\n");
				printf("　 正　　　　　\n");
				printf("　 正正正正正　\n");
				break;
			case(3):
				printf("     正正正    \n");
				printf("　 正      正　\n");
				printf("　 　　　  正　\n");
				printf("　　　 正正    \n");
				printf("　　　　   正　\n");
				printf("　　　　　 正　\n");
				printf("　 正　 　 正　\n");
				printf("     正正正    \n");
				break;
			case(4):
				printf("　　　　 正　　\n");
				printf("　　　   正　　\n");
				printf("　　　 正正　　\n");
				printf("　　 正　正　　\n");
				printf("　 正　　正　　\n");
				printf("   正正正正正  \n");
				printf("　　　　 正　　\n");
				printf("　　   正正正  \n");
				break;
			case(5):
				printf("   正正正正正  \n");
				printf("   正          \n");
				printf("   正          \n");
				printf("   正正正正    \n");
				printf("   正      正  \n");
				printf("           正  \n");
				printf("           正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
			case(6):
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正          \n");
				printf("   正正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
			case(7):
				printf("   正正正正正  \n");
				printf("           正  \n");
				printf("         正    \n");
				printf("         正    \n");
				printf("       正      \n");
				printf("       正      \n");
				printf("       正	   \n");
				printf("       正      \n");
				break;
			case(8):
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
			case(9):
				printf("     正正正    \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("   正      正  \n");
				printf("     正正正正  \n");
				printf("           正  \n");
				printf("   正      正  \n");
				printf("     正正正    \n");
				break;
		}
		printf("\n请问是否继续？(Y/N)");
		scanf("%c",&loop);
		getchar();			//清除回车
		system("cls");
	} while(loop=='Y'||loop=='y');
}

