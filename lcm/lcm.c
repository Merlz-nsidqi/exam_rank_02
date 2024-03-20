#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    if ((int)a <= 0 || (int)b <= 0)
        return 0;
    return (a * b);
}

int main(){
    printf("%d", lcm(-1, 7));
}
