#include <stdio.h>
#include <stdlib.h>

struct student
{
    float total;
    float chinese;
    float english;
    float math;
}st[128];

int main()
{
    int x;
    float avg_chinese = 0, avg_englsih = 0, avg_math = 0, avg_total = 0;

    scanf("%d", &x);
    for(int i = 0; i < x; i++)
    {
        scanf("%f", &st[i].chinese);
        avg_chinese = avg_chinese + st[i].chinese;
        scanf("%f", &st[i].english);
        avg_englsih = avg_englsih + st[i].english;
        scanf("%f", &st[i].math);
        avg_math = avg_math + st[i].math;
        st[i].total = st[i].chinese + st[i].english + st[i].math;
        avg_total = avg_total + st[i].total;
    }

    avg_chinese = avg_chinese / x;
    avg_englsih = avg_englsih / x;
    avg_math = avg_math / x;
    avg_total = avg_total / (3 * x);
    

    printf("%.1f %.1f %.1f %.1f\n", avg_total, avg_chinese, avg_englsih, avg_math);

    return 0;
}