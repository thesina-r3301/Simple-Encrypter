#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encrypt(char text[]);
void decrypt(char text[]);

int main()
{
    int select;

START:
    printf("Encrypt  [1]\nDecrypt  [2]\nExit     [0]\n[$]: ");
    scanf("%d", &select);

    switch (select)
    {
    case 1:
        char encText[5000];
		printf("\nDo not use space \' \' , instead \'-\' use");
        printf("\nEnter text to encrypting : ");
        scanf("%s", &encText);

        encrypt(encText);
        break;

    case 2:
        char decText[5000];
		printf("\nDo not use space \' \' , instead \'-\' use");
        printf("\nEnter text to decrypting : ");
        scanf("%s", &decText);

        decrypt(decText);
        break;

    case 0:
        exit(0);

    default:
        printf("\nTry again :(\n\n");
        break;
    }
    goto START;
}

void encrypt(char encText[])
{
    for (int i = 0; i < strlen(encText); i++)
    {
        if (encText[i] == '-')
        {
            printf("-");
        }
        else
        {
            printf("%c", (int)encText[i] + 1);
        }
    }
    printf("\n\n");
}

void decrypt(char decText[])
{
    for (int i = 0; i < strlen(decText); i++)
    {
        if (decText[i] == '-')
        {
            printf("-");
        }
        else
        {
            printf("%c", (int)decText[i] - 1);
        }
    }
    printf("\n\n");
}