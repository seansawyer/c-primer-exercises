#include <stdio.h>

int main(void)
{
    const char smile[] = "Smile!";
    int i, j;

    for (i=3; i>0; i--) {
        for (j=0; j<i; j++) {
            printf(smile);
        }
        printf("\n");
    }
}
