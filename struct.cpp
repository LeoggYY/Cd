#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	struct product
	{
		char name[30];
		int price;
	};
	struct product xd[5];
	for (int i = 0; i < 5; i++)
	{
		printf("輸入第%d組品名:", i + 1);
		scanf("%s", xd[i].name);
		printf("輸入第%d組價錢:", i + 1);
		scanf("%d", &xd[i].price);
	}
	int max = 0;
	int min = 0;
	for (int j = 0; j < 5; j++)
	{
		if (xd[j].price > xd[max].price)
			max = j;
		if (xd[j].price < xd[min].price)
			min = j;
	}

	printf("\n最貴的產品：\n");
	printf("產品名稱：%s，單價：%d\n", xd[max].name, xd[max].price);

	printf("\n最便宜的產品：\n");
	printf("產品名稱：%s，單價：%d\n", xd[min].name, xd[min].price);
	return 0;
}