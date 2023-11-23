#include <stdio.h>

int main()
{
    int matrix[100][100] , n = 0 , maxArray[100] , wallHitCount = 0;

    scanf("%d" , &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d" , &matrix[i][j]); 
        }
    }

    for (int i = 0; i < n; i++)
    {

        if (i == 0)
        {
            for (int j = 0; j < n; j++)
            {
                maxArray[i] += matrix[j][j];
            } 
        }
        else if (i == n-1)
        {
            for (int j = 0; j < n; j++)
            {
                maxArray[i] += matrix[j][n - j - 1];
            } 
        }
        else
        {
            int tempY = i , tempX = 0;

            while (tempY < n-1)
            {
                maxArray[i] += matrix[tempX][tempY];
                tempX++;
                tempY++;
            }
            while (tempX < n)
            {
                maxArray[i] += matrix[tempX][tempY];
                tempX++;
                tempY--;
            }
            
            tempY = i; 
            tempX = 0;

            while (tempY >0)
            {
                maxArray[i + n-1] += matrix[tempX][tempY];
                tempX++;
                tempY--;
            }
            while (tempX < n)
            {
                maxArray[i + n-1] += matrix[tempX][tempY];
                tempX++;
                tempY++;
            }


            // int temp = i;

            // for (int j = 0; j < n; j++)
            // {
            //     if (temp + j == 0 || temp + j == n-1)
            //     {
            //         temp -= 2;   
            //     }
                
            //     maxArray[i] += matrix [j][temp + j];

                
            // }
            
            // temp = i;

            // for (int j = 0; j < n; j++)
            // {
            //     if (temp - j == 0 || temp - j == n-1)
            //     {
            //         temp += 2;
            //     }
                
            //     maxArray[n-1 + i] += matrix [j][temp - j];
            // }
        }
    }
    
    
    

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%d" , matrix[i][j]);
    //         printf("%c" , ' ');
    //     }
    //     printf("\n");
    // }

    
    int max = 0;

    for (int i = 0; i < 100; i++)
    {
        if (maxArray[i] == NULL)
        {
            break;
        }
        

        //printf("%d" , maxArray[i]);
        if (maxArray[i] > max)
        {
            max = maxArray[i];
        }
    }
    

    printf("%d" , max);


    return 0 ;
}