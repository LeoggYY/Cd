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
		printf("��J��%d�ի~�W:", i + 1);
		scanf("%s", xd[i].name);
		printf("��J��%d�ջ���:", i + 1);
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

	printf("\n�̶Q�����~�G\n");
	printf("���~�W�١G%s�A����G%d\n", xd[max].name, xd[max].price);

	printf("\n�̫K�y�����~�G\n");
	printf("���~�W�١G%s�A����G%d\n", xd[min].name, xd[min].price);
	return 0;
}