#include <stdio.h>

int main()
{
    int a, b;
    int _a, _b;
    int sum = 0, c = 0, carry = 0;
    while (1)
    {
        scanf("%d %d", &a, &b);

        if (a == 0 && b == 0)break;

            sum = 0, c = 0, carry = 0;
        while (a || b)
        {
            _a = a % 10;
            a = a / 10;
            _b = b % 10;
            b = b / 10;

            sum = _a + _b + c;
            if (sum > 9)
            {
                carry++;
                c = 1;
            }
            else c = 0;
        }
        if (carry == 0)printf("No carry operation.\n");
            else if (carry == 1)printf("1 carry operation.\n");
                else printf("%d carry operations.\n", carry);

    }
    return 0;
}
