#include <stdio.h>

void br();
void ic();

int main(void)
{
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    printf("\n");
}

void br()
{
    printf("Brazil, Russia");
}

void ic()
{
    printf("India, China");
}
