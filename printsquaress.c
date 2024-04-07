#include<stdio.h>

int main()
{
    // init variables
    int y_move, x_move, height, width;
    int y_init= 1;
    int x_init = 1;

    // get inputs (height, width) from user

    printf("Enter Height:\n");
    scanf("%d", &height);

    printf("Enter Width:\n");
    scanf("%d", &width);

    if ((height <= 0) || (width <= 0))
    {
        return 0;
    }
    else
    {
        for (y_move = y_init; y_move <= height; y_move++)
        {
            printf("\n");
            for (x_move = x_init; x_move <= width; x_move++)
            {
                if (y_move == y_init || y_move == height) // at start and last row, print *
                {
                    printf("*");
                }
                else
                {
                    if (x_move == x_init || x_move == height) // print * on the edge of every row
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        
        
        }
    }
    return 1;
}