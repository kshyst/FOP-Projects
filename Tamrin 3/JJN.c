#include <stdio.h>

int main()
{
    int inputLen = 3 , m = 1;
    char inputWord[100000];

    scanf("%d %d" , &inputLen , &m);
    scanf("%[^\n]" , &inputWord);

    int ind = 0 , wordFirstIndex = 0;
    char word[100000] , minWord[100000] ;

    for (int i = 0; i < inputLen; i++)
    {
        minWord[i] = 'x';
    }
    

    while (1)
    {
        char tempInputWord[100000];
        for (int i = 0; i < inputLen; i++) // makes a copy of input word
        {
            tempInputWord[i] = inputWord[i];
        }
        
        for (int i = 0; i < m; i++) // shifts the word m times
        {
            for (int i = 0; i < inputLen ; i++) // shifts // NOT COMPLETED
            {
                if (ind == i)
                {
                    continue;
                }

                tempInputWord[i]++;

            }

            // if the word is smaller than previous one this code changes the min

            for (int i = 0; i < inputLen; i++)
            {
                if (minWord[i] == tempInputWord[i])
                {
                    continue;
                }
                else if(tempInputWord[i] < minWord[i])
                {
                    for (int j = 0; j < inputLen; j++)
                    {
                        minWord[i] = tempInputWord[i];
                    }  
                }
                else
                {
                    break;
                }
            }

        }
    }

    printf("%c" , minWord[1]);

    return 0;
}
