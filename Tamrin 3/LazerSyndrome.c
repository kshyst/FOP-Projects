#include <stdio.h>

int main()
{
    int matrix[100][100], n = 0, maxArray[100] = {0}; // Initialize maxArray with 0

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Calculate the sum of the main diagonal
            if (i == j)
            {
                maxArray[i] += matrix[i][j];
            }

            // Calculate the sum of the secondary diagonal
            if (i == n - j - 1)
            {
                maxArray[n + i] += matrix[i][j];
            }
        }
    }

    int max = 0;

    for (int i = 0; i < 100; i++)
    {
        if (maxArray[i] == 0) // Break loop when encountering 0
        {
            break;
        }

        if (maxArray[i] > max)
        {
            max = maxArray[i];
        }
    }

    printf("%d\n", max);

    return 0;
}