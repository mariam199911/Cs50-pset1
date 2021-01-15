#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(int argc, string argv[])
{
    int b = 0;
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        for (int i = 0, kaylenght = strlen(argv[1]); i < kaylenght ; i++)
        {
            if (isalpha(argv[1][i]))
            {
                b = 1;
            }
            else
            {
                b = 0;
            }
        }
    }
    if (b == 1)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        int kay = atoi(argv[1]); 
        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int w = 0, lenght = strlen(plaintext); w < lenght ; w++)
        {
            if (isupper(plaintext[w]))
            {
                printf("%c", (((plaintext[w] + kay) - 65) % 26) + 65);
            }
            //checks if character is lower case and if so encrypts it in lower case
            else if (islower(plaintext[w]))
            {    
                printf("%c", (((plaintext[w] + kay) - 97) % 26) + 97);
            }
            //if chracter is not upper or lower case, e.g. a question mark, it prints as a question mark
            else
            {
                printf("%c", plaintext[w]);
            }
        }
    
        printf("\n");
        return 0;
    }
   
    
}
