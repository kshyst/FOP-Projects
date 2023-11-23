#include <stdio.h>

int main()
{
    int n , m;
    scanf("%d" , &n);

    while(n > 0)
    {
        for (int j = 0; j < n; j++)
        {
            printf("1");
        }
        printf("0");
        n --;
    }
    


    return 0;
}