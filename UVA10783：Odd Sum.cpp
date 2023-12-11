#include <stdio.h>
int  os(int a, int b)
{
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 1)sum = sum + i;
	}
	return sum;
}
int main()

{
	//printf("%d",os(1,5));
	int a, b, c, n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		c = os(a, b);
		printf("Case %d: %d\n", i, c);
	}

}