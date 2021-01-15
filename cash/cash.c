#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    while (1)
    {
        int n = 0;
        float dollars = get_float("Change owed: ");
        if (dollars > 0)
        {
            int cents = round(dollars * 100);
            while (cents >= 25)
            {
                cents = cents - 25;
                n++;
            }
            while (cents >= 10)
            {
                cents = cents - 10;
                n++;
            }
            while (cents >= 5)
            {
                cents = cents - 5;
                n++;
            }
            while (cents >= 1)
            {
                cents = cents - 1;
                n++;
            }
            printf(" %d\n", n);
            break;
        }
    }
   
}