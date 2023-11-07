#include <stdio.h>

int main ()
{
    int inputNumber;
    int a , b , c , d , e , f , g , h ,i  ;
    scanf("%d" , &inputNumber );
    i = inputNumber % 10;
    inputNumber /= 10;
    h = inputNumber % 10;
    inputNumber /= 10;
    g = inputNumber % 10;
    inputNumber /= 10;
    f = inputNumber % 10;
    inputNumber /= 10;
    e = inputNumber % 10;
    inputNumber /= 10;
    d = inputNumber % 10;
    inputNumber /= 10;
    c = inputNumber % 10;
    inputNumber /= 10;
    b = inputNumber % 10;
    inputNumber /= 10;
    a = inputNumber % 10;

    if ( (a == b && a==c) ||  (a == d && a == g)   || (a == e && a == i) )
    {
        if(a == 1)
        {
            printf("%d" , 1);
        }
        else if(a == 2)
        {
            printf("%d" , 2);  
        }
        else 
        {
            printf("%d" , 0); 
        }
    }
    else if((d == e && d == f)  || (b == e && b == h) || (c == e && c == g))
    {
        if(e == 1)
        {
            printf("%d" , 1);
        }
        else if(e == 2)
        {
            printf("%d" , 2);  
        }
        else 
        {
            printf("%d" , 0); 
        }
    }
    else if ((c == f && c == i) || (g == h && g == i))
    {
        if(i == 1)
        {
            printf("%d" , 1);
        }
        else if(i == 2)
        {
            printf("%d" , 2);  
        }
        else 
        {
            printf("%d" , 0); 
        }
    }
    else 
    {
        printf("%d" , 0); 
    }
    

    return 0 ;
}