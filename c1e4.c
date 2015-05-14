#include <stdio.h>

void jolly();
void deny();

int main(void)
{
    int i;

    for (i=0; i<3; i++)
    {
        jolly();
    }
    deny();
}

void jolly()
{
    printf("For he's a jolly good fellow!\n");
}

void deny()
{
    printf("Which nobody can deny!\n");
}
