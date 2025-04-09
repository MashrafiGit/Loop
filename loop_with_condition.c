#include <stdio.h>
int main()
{
    // get number from user
    int n;
    scanf("%d", &n);

    // print all number with even or odd
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d - Even\n", i);
        }
        else
        {
            printf("%d - Odd\n", i);
        }
    }


    return 0;
}