#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
    string text = get_string("text: ");
    int letters = 0;
    int words = 1;
    int sentences = 0;
    int n = strlen(text);
    float L;
    float S;
    for (int i = 0; i < n; i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) 
        {
            letters++;
        }
        if (text[i] == ' ')
        {
            words++;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    L = ((float)letters / words) * 100;
    S = ((float)sentences /  words) * 100;
     
    float index = 0.0588 * L - 0.296 * S - 15.8;
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %.0f\n", index);
    }
}