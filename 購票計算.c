#include <stdio.h>

int main()
{
    int money, ten_dollar, five_dollar, one_dollar;
    scanf("%d", &money);

    ten_dollar = money / 10;
    five_dollar = money % 10 / 5;
    one_dollar = money % 10 % 5 / 1;

    printf("NT10=%d\nNT5=%d\nNT1=%d\n", ten_dollar, five_dollar, one_dollar);

    return 0;
}