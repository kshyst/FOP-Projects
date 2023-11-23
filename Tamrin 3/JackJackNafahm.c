#include <stdio.h>

int main()
{
    long long int inputLen , shiftLimit;
    char inputWord[100000] = {NULL};

    scanf("%lld %lld\n" , &inputLen , &shiftLimit);
    scanf("%[^\n]%*c" , inputWord);


    for (int i = 0; i < inputLen; i++)
    {
        if (inputWord[i] == 'a' && i == inputLen - 1)
        {
            break;
        }
        else if(inputWord[i] == 'a')
        {
            continue;
        }
        else if (123 - inputWord[i] > shiftLimit)
        {
            inputWord[inputLen - 1] += shiftLimit % 26;
            if (inputWord[inputLen - 1] > 122)
            {
                inputWord[inputLen - 1] -= 26;
            }
        }
        else
        {
            shiftLimit -= (123 - inputWord[i]);
            inputWord[i] = 'a';   
        }
        
    }
        
    for (int i = 0; i < inputLen; i++)
    {
        printf("%c" , inputWord[i]);
    }
    
    

    return 0;
}
