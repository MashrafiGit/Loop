#include <stdio.h>
int main()
{
    // get number from user
    int n;
    scanf("%d", &n);

    // sum all number
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        // summation all number
        sum += i;
    }

    printf("%d", sum);

    return 0;
}