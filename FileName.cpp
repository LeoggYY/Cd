#include <stdio.h>
#include <string.h>

int main()
{
	struct date
	{
		int year;
		int month;
		int day;
	};
	int y,m,d, y1, m1, d1;
	struct date xd[2];
	while (1)
	{
		scanf("%d/%d/%d %d/%d/%d", &xd[0].day, &xd[0].month, &xd[0].year, &xd[1].day, &xd[1].month, &xd[1].year);
		y = xd[0].year;
		y1= xd[1].year;
		m= xd[0].month;
		m1= xd[1].month;
		d= xd[0].day;
		d1= xd[1].day;
		if (y > y1)printf("after\n");
		else if (y < y1)printf("before\n");
		else if (y == y1 && m > m1)printf("after\n");
		else if (y == y1 && m < m1)printf("before\n");
		else if (y == y1 && m > m1 && d > d1)printf("after\n");
		else if (y == y1 && m > m1 && d < d1)printf("before\n");
		else printf("same");
	}

} 