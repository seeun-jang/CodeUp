#include <stdio.h>
int main()
{
    long long num1, num2, num3;
    scanf("%lld %lld %lld", &num1, &num2, &num3);

    long long sum = num1 + num2 + num3;
    printf("%lld", sum);
    printf("\n%.1f", (float)sum / 3);

    return 0;
}
