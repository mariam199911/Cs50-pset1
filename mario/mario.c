#include <stdio.h>
#include <cs50.h>
int main(void)
{
    //mario game
    while (1)
    {
        int tall = get_int("Height: ");
        if (tall > 0 & tall <= 8) 
        {
            //rows
            for (int i = 1; i <= tall; i++)
            {
                for (int t = tall - i - 1; t >= 0; t--)
                {
                    printf(" ");
                }
                for (int r = 0; r < i; r++)
                {
                    printf("#");
                }
                printf("  ");
                for (int y = 0; y < i; y++)
                {
                    printf("#");
                }//column
                printf("\n");
            }
            break;
        }
    }
}