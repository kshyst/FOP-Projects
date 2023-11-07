#include <stdio.h>

int main()
{
    int saeed, masoud;
    scanf("%d %d", &saeed, &masoud);
    if (saeed > 31 ||  masoud > 31 ||  saeed < 1 || masoud < 1)
    {
        printf("invalid date");
        return 0;
    }

    saeed = saeed ^ masoud;
    masoud = saeed ^ masoud;
    saeed = saeed ^ masoud;


    printf("%d\n%d\n", saeed, masoud);
    return 0;
}