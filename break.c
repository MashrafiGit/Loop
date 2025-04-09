#include <stdio.h>
int main()
{

    // if we want any time to stop the loop we can use break statement
    // must use break statement in on loop
    for (int i = 1; i <= 10; i++)
    {
        if(i==5)
        {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}