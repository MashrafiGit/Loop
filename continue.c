#include <stdio.h>
int main()
{

    // if we want any time to skip any value to the loop, we can use continue statement
    // must use continue statement in on loop
    for (int i = 1; i <= 10; i++)
    {
        if(i==5)
        {
            // printf("skip 5\n");
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}