#include <stdio.h>
#include <string.h>

int main()
{
	int a[10],b,i=0;
	printf("¿é¤J¼Æ¦r:");
	scanf("%d", &b);
	while (b > 0)
	{
		a[i] = b % 2;
		b = b / 2;
		i++;
	}
	i--;
	for(i;i>=0;i--)
	{
		printf("%d", a[i]);
	}
} 