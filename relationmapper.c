/*this code allows the user to enter in two charecters and output a relation in them .
The hope is that bythe end to get a map of all relation set */

#include <cs50.h>
#include <stdio.h>
typedef struct
{
    char x;
    int y[4];
    char z;
} person;
int main(void)
{
    int i = 0;
    person persona;
    printf("this program allows user to enter relation in form of a structure\n");

    while (i < 4)
    {
        printf("please enter two capital letters \n");
        scanf("%c%i%c", &persona.x, &persona.y[i], &persona.z);
        switch (persona.y[i])
        {
            case 1:
                printf("the %c to  %c by right\n", persona.x, persona.z);
                i++;
                break;

            case 2:
                printf("the %c to  %c by up\n", persona.x, persona.z);
                i++;
                break;

            case 3:
                printf("the %c to  %c by left\n", persona.x, persona.z);
                i++;
                break;

            case 4:
                printf("the %c to  %c by down\n", persona.x, persona.z);
                i++;
                break;

            default:
                printf("404 ERROR\n");//defaults to show error without increment
                break;
        }
    }
}
