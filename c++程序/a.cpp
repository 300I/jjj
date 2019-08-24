#include <stdio.h>

int main()
{
    int w, h, i, j;
    printf("输入矩形的宽和高\n");
    scanf("%d%d", &w, &h);
    if (w <= 0 || h <= 0)
    {
        printf("宽度和高度都要大于0\n");
        return 0;
    }
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            if (i == 0 || i == h - 1 || j == 0 || j == w - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

