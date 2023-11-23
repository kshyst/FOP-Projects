#include <stdio.h>

int main()
{
    char S[1000000];
    scanf("%[^\n]%*c" , S);

    int sLength = 0;

    for (int i = 0; i < 1000000; i++)
    {
        sLength ++;
        if (S[i] == NULL)
        {
            break;
        }
    }
    

    for(long i = 0 ; i < sLength - 1 ; i++)
    {
        long x , y;

        if(  S[i] == '0' || S[i] == '1' || S[i] == '2' || S[i] == '3' || S[i] == '4' || S[i] == '5' || S[i] == '6' || S[i] == '7' || S[i] == '8' || S[i] == '9')
        {
            printf("%c" , S[i]);
        }
        else if(S[i] == ' ')
        {
            printf("%s" , "00");
        }
        else
        {
            x = (S[i] - 'a' + 1);
            y = (S[i] - 'a' + 1);

            if(x % 3 == 0)
            {
                x = (x / 3);
                y = 3;
            }
            else 
            {
                x = (x / 3) + 1;
                y = (y % 3) ;
            }

            for (int j = 0; j < y+1; j++)
            {
                printf("%d" , x);
            }

        }
        printf(" ");
    }
    
    return 0 ;
}