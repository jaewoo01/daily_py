#include <stdio.h>
int main(void)
{
    int X,N;
    int price = 0;
    scanf("%d %d", &X, &N);
    for (int i = 0; i<N; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        price = price + a * b;
    }
    if (price == X)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}