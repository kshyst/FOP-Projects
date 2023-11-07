#include <stdio.h>

int main()
{
    int d , m , wd , D , M , res , z , temp;


    scanf("%d %d -> %d" , &d , &m , &wd );
    scanf("%d %d" , &D , &M);


    z = ((M - m) * 30) + (D - d);

    temp = wd + (z % 7);

    if (temp < 0)
    {
        temp += 14;
    }
    

    res = (temp % 7) ;

    


    if (d <= 30 && d >= 1 && D <= 30 && D >= 1 && m <= 12 && m >= 1 && M <= 12 && M >= 1 && wd <= 6 && wd >= 0 )
    {
    if(res == 0)
    {
        printf("%s" , "Saturday");
    }
    else if(res == 1)
    {
        printf("%s" , "Sunday");
    }
    else if(res == 2)
    {
        printf("%s" , "Monday");
    }
    else if(res == 3)
    {
        printf("%s" , "Tuesday");
    }
    else if(res == 4)
    {
        printf("%s" , "Wednesday");
    }
    else if(res == 5)
    {
        printf("%s" , "Thursday");
    }
    else if(res == 6)
    {
        printf("%s" , "Friday");
    }
    }
    else 
    {
        printf("%s" , "Invalid Date!");
    }

    return 0 ;
}