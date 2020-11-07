#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1;
    int y=1;
    int z;
    z = x++ + ++x + y++ + --y;
    printf("x= %d\ny= %d\nz= %d",x,y,z);
    return 0;
}
