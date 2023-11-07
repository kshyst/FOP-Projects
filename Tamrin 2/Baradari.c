#include <stdio.h>

int main ()
{
    int a , b ;
    int diffCount = 0;
    scanf("%d%d" , &a , &b);

    if((a <= 255 || a>=0) &&  (b <= 255 || b>=0))
    {
        if(((a >> 0)&1) != ((b >> 0)&1))
        {
            diffCount ++;
        }
        if(((a >> 1)&1) != ((b >> 1)&1))
        {
            diffCount ++;
        }
        if(((a >> 2)&1) != ((b >> 2)&1))
        {
            diffCount ++;
        }
        if(((a >> 3)&1) != ((b >> 3)&1))
        {
            diffCount ++;
        }
        if(((a >> 4)&1) != ((b >> 4)&1))
        {
            diffCount ++;
        }
        if(((a >> 5)&1) != ((b >> 5)&1))
        {
            diffCount ++;
        }
        if(((a >> 6)&1) != ((b >> 6)&1))
        {
            diffCount ++;
        }
        if(((a >> 7)&1) != ((b >> 7)&1))
        {
            diffCount ++;
        }
    }

    printf("%d" , diffCount);
    return 0 ;
}