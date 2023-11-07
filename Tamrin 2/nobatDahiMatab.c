// 402106101 kiarash shojaei
#include <stdio.h>

int main()
{

    int masoud , saeed ;

    scanf("%d %d" , &masoud , &saeed);

    saeed = saeed ^ masoud;
    masoud = masoud ^ saeed;
    saeed = masoud ^ saeed;

    if(masoud > 31 || masoud < 1 || saeed > 31 || masoud < 1)
    {
        printf("%s" , "invalid date");
    }
    else
    {
        printf("%d\n%d\n" , masoud , saeed);
        return 0 ;
    }

    return 0 ;
}