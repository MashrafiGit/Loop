#include <stdio.h>
int main()
{

    // while loop same as while loop just syntax changed
    int i = 1;

    // minimum run 1time coz first off all do while loop doesn't check any condition
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}