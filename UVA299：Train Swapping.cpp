#include<stdio.h>



int main()
{

	int a[50],b,n;
	scanf("%d", &n);

	while (n--)
	{
		scanf("%d", &b);
		int i ;
			int j ;
			int c = 0;int tmp ;
			for (i = 0; i < b; i++)
			{

				scanf("%d", &a[i]);
			}
			for (i = 0; i < b; i++)
			{
				for (j= b-1; j > i; j--)
				{
					if (a[j] < a[j - 1])
					{
						tmp = a[j];
						a[j] = a[j - 1];
						a[j - 1] = tmp;
						c++;
					}

				}

			}
			printf("Optimal train swapping takes %d swaps.\n",c);
		}
	
		return 0;
	
}
