#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int pontos[26] = {
    1,3,3,2,1,4,2,4,1,8,5,1,3,
    1,1,3,10,1,1,1,1,4,4,8,4,10
};

int main(void)
{
    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");

    int total1 = 0;
    int total2 = 0;

    for (int i = 0; p1[i] != '\0'; i++)
    {
        if (isalpha(p1[i]))
        {
            p1[i] = toupper(p1[i]);
            total1 = total1 + pontos[p1[i] - 'A'];
        }
    }

    for (int i = 0; p2[i] != '\0'; i++)
    {
        if (isalpha(p2[i]))
        {
            p2[i] = toupper(p2[i]);
            total2 = total2 + pontos[p2[i] - 'A'];
        }
    }

    if (total1 > total2)
    {
        printf("Player 1 wins!\n");
    }
    else if (total2 > total1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
