#include <stdio.h>

#include <stdlib.h>

int main(void)

{

	int x, y, z;

	printf("請輸入你的出生年月日:");

	scanf("%d年", &x);

	scanf("%d月", &y);

	scanf("%d日", &z);

	printf("你的出生年月日是:%d年%d月%d日",x,y,z);

	system("pause");

	return 0;



}
