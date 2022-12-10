#include <stdio.h>
int main()
{
    int a, b, r;
    // a = b*q + r
    // a 被除數 = b 除數 * q商 + r餘數
    // (a,b) = (b,r)
    scanf("%d", &a);
    scanf("%d", &b);
    while (b != 0)
    {
        // 計算 r
        // 前⾯變成b
        // 後⾯變成r
        printf("a=%d b=%d r=%d\n", a, b, r);
        system("pause");
    }
    printf("最⼤公因數為%d", a);
}
