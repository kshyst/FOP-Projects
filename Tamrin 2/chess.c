#include <stdio.h>

int main()
{
    int whiteKing , blackKing , blackQueen , blackRook;

    scanf("%d %d" , &whiteKing , &blackKing);
    scanf("%d" , &blackQueen);
    scanf("%d" , &blackRook);

    if (whiteKing % 10 == blackRook %10 || whiteKing / 10 == blackRook / 10)
    {
        printf("Rook");
    }
    else if (whiteKing % 10 == blackQueen %10 || whiteKing / 10 == blackQueen / 10 ||
    (whiteKing % 10 + 1 == blackQueen %10 && whiteKing / 10 + 1 == blackQueen / 10) ||
    (whiteKing % 10 + 2 == blackQueen %10 && whiteKing / 10 + 2 == blackQueen / 10) ||
    (whiteKing % 10 + 3 == blackQueen %10 && whiteKing / 10 + 3 == blackQueen / 10) ||
    (whiteKing % 10 + 4 == blackQueen %10 && whiteKing / 10 + 4 == blackQueen / 10) ||
    (whiteKing % 10 + 5 == blackQueen %10 && whiteKing / 10 + 5 == blackQueen / 10) ||
    (whiteKing % 10 + 6 == blackQueen %10 && whiteKing / 10 + 6 == blackQueen / 10) ||
    (whiteKing % 10 + 7 == blackQueen %10 && whiteKing / 10 + 7 == blackQueen / 10) ||
    (whiteKing % 10 - 1 == blackQueen %10 && whiteKing / 10 - 1 == blackQueen / 10) ||
    (whiteKing % 10 - 2 == blackQueen %10 && whiteKing / 10 - 2 == blackQueen / 10) ||
    (whiteKing % 10 - 3 == blackQueen %10 && whiteKing / 10 - 3 == blackQueen / 10) ||
    (whiteKing % 10 - 4 == blackQueen %10 && whiteKing / 10 - 4 == blackQueen / 10) ||
    (whiteKing % 10 - 5 == blackQueen %10 && whiteKing / 10 - 5 == blackQueen / 10) ||
    (whiteKing % 10 - 6 == blackQueen %10 && whiteKing / 10 - 6 == blackQueen / 10) ||
    (whiteKing % 10 - 7 == blackQueen %10 && whiteKing / 10 - 7 == blackQueen / 10) ||
    
    (whiteKing % 10 + 1 == blackQueen %10 && whiteKing / 10 - 1 == blackQueen / 10) ||
    (whiteKing % 10 + 2 == blackQueen %10 && whiteKing / 10 - 2 == blackQueen / 10) ||
    (whiteKing % 10 + 3 == blackQueen %10 && whiteKing / 10 - 3 == blackQueen / 10) ||
    (whiteKing % 10 + 4 == blackQueen %10 && whiteKing / 10 - 4 == blackQueen / 10) ||
    (whiteKing % 10 + 5 == blackQueen %10 && whiteKing / 10 - 5 == blackQueen / 10) ||
    (whiteKing % 10 + 6 == blackQueen %10 && whiteKing / 10 - 6 == blackQueen / 10) ||
    (whiteKing % 10 + 7 == blackQueen %10 && whiteKing / 10 - 7 == blackQueen / 10) ||
    (whiteKing % 10 - 1 == blackQueen %10 && whiteKing / 10 + 1 == blackQueen / 10) ||
    (whiteKing % 10 - 2 == blackQueen %10 && whiteKing / 10 + 2 == blackQueen / 10) ||
    (whiteKing % 10 - 3 == blackQueen %10 && whiteKing / 10 + 3 == blackQueen / 10) ||
    (whiteKing % 10 - 4 == blackQueen %10 && whiteKing / 10 + 4 == blackQueen / 10) ||
    (whiteKing % 10 - 5 == blackQueen %10 && whiteKing / 10 + 5 == blackQueen / 10) ||
    (whiteKing % 10 - 6 == blackQueen %10 && whiteKing / 10 + 6 == blackQueen / 10) ||
    (whiteKing % 10 - 7 == blackQueen %10 && whiteKing / 10 + 7 == blackQueen / 10) )
    {
        printf("Queen");
    }
    else 
    {
        printf("No One!");
    }
    
    return 0;
}